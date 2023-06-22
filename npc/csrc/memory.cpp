#include "include/memory.h"
#include "include/isa.h"

uint64_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    IFDEF(CONFIG_ISA64, case 8: return *(uint64_t *)addr);
    default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
  }
}

void host_write(void *addr, int len, uint64_t data) {
  //printf("%lx\n",(uint64_t *)addr);
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    IFDEF(CONFIG_ISA64, case 8: *(uint64_t *)addr = data; return);
    IFDEF(CONFIG_RT_CHECK, default: assert(0));
  }
}


uint8_t mem[CONFIG_MSIZE] = {0};
// Memory transfer
uint8_t* gi_to_hi(uint64_t addr) { return mem + (addr - CONFIG_MEM_BASE); }

const static uint32_t img [] = {
  /*0x00130393,  // addi t1 t0,1
  0x00c000ef,  // jal ra ,80000010
  0x00240493,   // addi s0 t2,2
  0x00350593,   // addi a0 s1,3
 
  0x00460693,   // addi a2 a1,4
  0x00570793,	//addi a4 a3,5
  0x00100073,  // ebreak (used as nemu_trap)
  0x0000006f,  // j self*/
  
  //fencei-test
  0x00570537,	//lui	a0, 0x00570
  0x79350513,	//addi	a0, 0x793 
  0x00000597,	//auipc a1, 0x0
  0x01858593,	//addi	a1, 0x18
  0x00a5a023,	//sw	a0, 0(a1)
  0x0000100f,	//fencei
  0x008000ef,	//jal	ra, 0x80000020
  0x00570793,	//addi a4 a3,5
  0x00460693,	//addi a2 a1,4   0x80000020 fencei目标
  0x00000513,	//addi	a0, 0x793
  0x00100073,	//ebreak (used as nemu_trap)
  0x0000006f,	//j self*/
};


void init_mem() {
  /* Load built-in image. */
  memcpy(gi_to_hi(0x80000000), img, sizeof(img));
 } 
