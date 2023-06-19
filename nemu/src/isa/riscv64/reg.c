/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

const char *csrs[] = {
  "mstatus", "mtvec", "mepc", "mcause"
 };

int reg_num = (sizeof(regs))/(sizeof(regs[0]));

void isa_reg_display() {
	for( int i=0; i<reg_num;i++){
		printf("%s :  %lu       %lx \n", regs[i],gpr(i),gpr(i));
	}
	for (int j = 0 ; j<4 ; j++){
		printf("%s :  %lu       %lx \n", csrs[j],cpu.csr[j],cpu.csr[j]);
		}
	printf("pc is %lu       %lx \n",cpu.pc,cpu.pc);
}

word_t isa_reg_str2val(const char *s, bool *success) {
  *success=true;
  for(int i=0;i<reg_num;i++){
    if(strcmp(s+1,regs[i])==0){
      return gpr(i);
    }
  }
  if(strcmp(s,"$pc")==0){
    return cpu.pc;
  }
  *success=false;
  
  return 0;
}
