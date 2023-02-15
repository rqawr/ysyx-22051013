#ifndef __ISA_H__
#define __ISA_H__

#include "common.h"
typedef struct 
{
  uint64_t gpr[32];
  uint64_t pc;
} NPC_reg;


typedef struct Decode {
  uint64_t pc;
  uint64_t snpc; // static next pc
  uint32_t val;
  IFDEF(CONFIG_ITRACE, char logbuf[128]);
} Decode;

extern NPC_reg cpu;
extern Decode s;

void isa_reg_display();
uint64_t isa_reg_str2val(const char *name, bool *success);
void cpu_exec(uint64_t n);

void isa_exec_once();

bool isa_difftest_checkregs(NPC_reg *ref_r, uint64_t pc);
#endif
