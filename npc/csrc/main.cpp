 #include <cstdio>
 #include <assert.h>
 #include "Vysyx_22051013_rvcpu.h"
 #include <verilated.h>          
 #include "verilated_dpi.h"
 #include <verilated_vcd_c.h>  
 #include <Vysyx_22051013_rvcpu__Dpi.h>
 #include <svdpi.h>
 #include "include/memory.h"
 
Vysyx_22051013_rvcpu* rvcpu ;
VerilatedVcdC* tfp;
VerilatedContext* contextp;

void close_npc();
void init_monitor(int argc, char *argv[]);
//uint8_t* gi_to_hi(uint64_t addr);
//-------------------DPI-C-------------------------//
 
 extern "C" void ebreak(svBit ebreak_ena){
    if(ebreak_ena) {
	close_npc();
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

void execute(){
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
	
	init_monitor(argc,argv);
	cpu_reset();
	while(1){
	  execute();
	  }
	
	close_npc();
	return 0;
}


