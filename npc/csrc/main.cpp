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
 
Vysyx_22051013_rvcpu* rvcpu ;
VerilatedVcdC* tfp;
VerilatedContext* contextp;

void close_npc();
void init_monitor(int argc, char *argv[]);
int is_exit_status_bad();
void sdb_mainloop();


//-------------------DPI-C-------------------------//
 
extern "C" void if_id_thepc(long long thepc_data, const svBitVecVal* the_inst){
  cpu.pc=thepc_data;
  s.val=*((uint32_t*)the_inst);
  //printf("%lx  %x\n",cpu.pc,s.val);
}




extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu.gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
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
	tfp->close() ;
	delete rvcpu ;
	delete contextp ;
	exit(0) ;
	
}

void cpu_reset(){
  rvcpu -> clk = 0;
  rvcpu -> rst = 1;
  rvcpu -> inst = host_read((void *)gi_to_hi(CONFIG_MEM_BASE) , 4);
  rvcpu -> eval();
  tfp -> dump(main_time++);
  
  rvcpu -> clk = 1;
  rvcpu -> rst = 1;
  rvcpu -> eval();
  tfp -> dump(main_time++);
  
  rvcpu -> rst = 0;

}

void isa_exec_once(){
  rvcpu->clk = 0;
  rvcpu -> inst = host_read(gi_to_hi(rvcpu -> inst_pc) , 4);
  rvcpu -> eval();
  tfp -> dump(main_time++);
  
  rvcpu -> clk = 1;
  rvcpu -> eval();
  tfp -> dump(main_time++);

}
  

int main(int argc, char** argv) {
	contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	rvcpu = new Vysyx_22051013_rvcpu{contextp};
	Verilated::traceEverOn(true);
	tfp = new VerilatedVcdC;
	rvcpu->trace(tfp,0);
	tfp->open("obj_dir/rvcpu.vcd");
	
	cpu_reset();
	init_monitor(argc,argv);
	sdb_mainloop();
	
	
	close_npc();
	is_exit_status_bad();
}


