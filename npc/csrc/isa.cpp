#include "include/isa.h"


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
#ifdef HAS_CSR
const char *csrs[] = {
  "mstatus", "mtvec", "mepc", "mcause"
 };
#endif

void isa_reg_display() {
	for( int i=0; i<32;i++){
		printf("%s :  %lu       %lx \n", regs[i],cpu.gpr[i],cpu.gpr[i]);
	}
	#ifdef HAS_CSR
	for (int j = 0 ; j<4 ; j++){
		printf("%s :  %lu       %lx \n", csrs[j],cpu.csr[j],cpu.csr[j]);
		}
	#endif
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

bool isa_difftest_checkregs(NPC_reg *ref_r, uint64_t pc) {
  for (int i = 0; i < 32; ++i){
    if (ref_r->gpr[i]!= cpu.gpr[i]){
      Log("for [%s], expceted %lx, but got %lx.", regs[i], ref_r->gpr[i], cpu.gpr[i]);
      //Assert(ref_r->pc == pc, "PC expected %lx but got %lx", ref_r->pc, pc);
      return false;
    }
  }
  #ifdef HAS_CSR
  //printf("%lx,%lx,%lx,%lx\n",ref_r->csr[0],ref_r->csr[1],ref_r->csr[2],ref_r->csr[3]);
  for (int j = 0; j < 4; ++j){
    if (ref_r->csr[j]!= cpu.csr[j]){
      Log("for [%s], expceted %lx, but got %lx.", csrs[j], ref_r->csr[j], cpu.csr[j]);
      return false;
    }
  }
  #endif
  if (ref_r->pc == pc){
    return true;
  }
  else {
    Log("PC expected %lx but got %lx", ref_r->pc, pc);
    return false;
  }
}
