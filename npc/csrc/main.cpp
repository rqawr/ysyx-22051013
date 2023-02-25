 #include <cstdio>
 #include <assert.h>
 #include "Vysyx_22051013_rvcpu.h"
 #include <verilated.h>          
 #include "verilated_dpi.h"
 #include <verilated_vcd_c.h>  
 #include <Vysyx_22051013_rvcpu__Dpi.h>
 #include <svdpi.h>
 #include "include/memory.h"
 #include "include/isa.h"
 #include "include/mmio.h"
 
Vysyx_22051013_rvcpu* rvcpu ;
#ifdef CONFIG_GTK
VerilatedVcdC* tfp;
#endif
VerilatedContext* contextp;

void close_npc();
void init_monitor(int argc, char *argv[]);
int is_exit_status_bad();
void sdb_mainloop();
uint64_t get_time();


//-------------------DPI-C-------------------------//
 
extern "C" void if_id_thepc(long long thepc_data, const svBitVecVal* the_inst){
  cpu.pc=thepc_data;
  s.val=*((uint32_t*)the_inst);
  //printf("%lx  %x\n",cpu.pc,s.val);
}

extern "C" void pmem_read(long long raddr, long long* rdata, char rlen){

  if (likely(in_pmem(raddr))) {
    *rdata = host_read(gi_to_hi(raddr),rlen);
#ifdef CONFIG_MTRACE
      Log("Read from memory at %#.8llx for %d bytes,content is %#.8llx.",raddr,rlen,*rdata);
#endif
    return;
    }
   IFDEF(CONFIG_DEVICE, *rdata = mmio_read(raddr, rlen);return);
   return;
}

// Memory Write
extern "C" void pmem_write(long long waddr, long long wdata, char wlen){
//printf("%lx %llx\n",gi_to_hi(waddr),waddr);
#ifdef CONFIG_MTRACE
   Log("Write to memory at %#.8llx with mask %x,content is %#.8llx",waddr,wlen,wdata);
#endif
  int len=0;

  //printf("%lx\n",addr);
  if (likely(in_pmem(waddr))) {
  for (int i = 0; i < 8; ++i) {
    if (wlen & 0x01 & 1) {
      //printf("%llx\n", (waddr & ~0x7ull)+i);
      uint64_t addr = waddr & ~0x7ull;
      host_write(gi_to_hi(addr+i),1,wdata);
      wdata >>= 8;
      }
    wlen >>= 1;
    }
   return; 
  }
  else{
    uint64_t ulen = atoi(&wlen);
    //printf("%lx\n",wlen);
    switch(wlen){
      case 1 : len = 1; break;
      case 15 : case -16 : len = 4; break;
      case 0xff : len=8; break;
      default : len = 0; break;
      
      }
     // printf("%u\n",len);
   /* if(wlen&0xff){len=8;}
    if(wlen&0x0f || wlen & 0xf0){len=4;}
    if(wlen&0x03 || wlen&0x0c || wlen&0x30 || wlen&0xc0){len=2;}
    if(wlen&0x01 || wlen&0x02 || wlen&0x04 || wlen&0x08 || wlen&0x10 || wlen&0x20 || wlen&0x40 || wlen&0x80){len=1;}
    //printf("%u\n",len);*/
    }
    //if(waddr == 0xa0000104){printf("sync write %llx\n",wdata);}
  IFDEF(CONFIG_DEVICE, mmio_write(waddr, len, wdata); return);
}


extern "C" void difftest_dut_regs(long long Z0, long long ra, long long sp, long long gp, long long tp, long long t0, long long t1, long long t2, long long fp, long long s1, long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long s2, long long s3, long long s4, long long s5, long long s6, long long s7, long long s8, long long s9, long long s10, long long a11, long long t3, long long t4, long long t5, long long t6){
  cpu.gpr[0] = Z0;
  cpu.gpr[1] = ra;
  cpu.gpr[2] = sp;
  cpu.gpr[3] = gp;
  cpu.gpr[4] = tp;
  cpu.gpr[5] = t0;
  cpu.gpr[6] = t1;
  cpu.gpr[7] = t2;
  cpu.gpr[8] = fp;
  cpu.gpr[9] = s1;
  cpu.gpr[10] = a0;
  cpu.gpr[11] = a1;
  cpu.gpr[12] = a2;
  cpu.gpr[13] = a3;
  cpu.gpr[14] = a4;
  cpu.gpr[15] = a5;
  cpu.gpr[16] = a6;
  cpu.gpr[17] = a7;
  cpu.gpr[18] = s2;
  cpu.gpr[19] = s3;
  cpu.gpr[20] = s4;
  cpu.gpr[21] = s5;
  cpu.gpr[22] = s6;
  cpu.gpr[23] = s7;
  cpu.gpr[24] = s8;
  cpu.gpr[25] = s9;
  cpu.gpr[26] = s10;
  cpu.gpr[27] = a11;
  cpu.gpr[28] = t3;
  cpu.gpr[29] = t4;
  cpu.gpr[30] = t5;
  cpu.gpr[31] = t6;
}

extern "C" void ebreak(svBit ebreak_ena){
    if(ebreak_ena) {
    npc_state.halt_ret = cpu.gpr[10];
    npc_state.state = NPC_END;
    npc_state.halt_pc = cpu.pc+4;
  }
}

//------------------MAIN----------------------------//

vluint64_t main_time = 0;

void close_npc(){
#ifdef CONFIG_GTK
	tfp->close() ;
#endif
	delete rvcpu ;
	delete contextp ;
	exit(0) ;
	
}

void cpu_reset(){
  rvcpu -> clk = 0;
  rvcpu -> rst = 1;  
  rvcpu -> eval();
#ifdef CONFIG_GTK
  tfp -> dump(main_time++);
#endif  

  rvcpu -> clk = 1;
  rvcpu -> rst = 1;
  rvcpu -> eval();
#ifdef CONFIG_GTK
  tfp -> dump(main_time++);
#endif  

  rvcpu -> rst = 0;

}

void isa_exec_once(){
  rvcpu->clk = 0;
  rvcpu -> eval();
#ifdef CONFIG_GTK
  tfp -> dump(main_time++);
#endif  

  rvcpu -> clk = 1;
  rvcpu -> eval();
#ifdef CONFIG_GTK
  tfp -> dump(main_time++);
#endif
}
  

int main(int argc, char** argv) {
	contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	rvcpu = new Vysyx_22051013_rvcpu{contextp};
#ifdef CONFIG_GTK
	Verilated::traceEverOn(true);
	tfp = new VerilatedVcdC;
	rvcpu->trace(tfp,0);
	tfp->open("obj_dir/rvcpu.vcd");
#endif
	
	
	init_monitor(argc,argv);
	cpu_reset();
	sdb_mainloop();
	
	
	close_npc();
	is_exit_status_bad();
}


