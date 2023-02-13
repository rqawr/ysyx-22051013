#include "include/isa.h"


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
	for( int i=0; i<32;i++){
		printf("%s :  %lu       %lx \n", regs[i],cpu.gpr[i],cpu.gpr[i]);
	}
	printf("pc is %lu       %lx \n",cpu.pc,cpu.pc);
}

uint64_t isa_reg_str2val(const char *s, bool *success) {
  *success=true;
  for(int i=0;i<32;i++){
    if(strcmp(s+1,regs[i])==0){
      return cpu.gpr[i];
    }
  }
  if(strcmp(s,"$pc")==0){
    return cpu.pc;
  }
  *success=false;
  
  return 0;
}
