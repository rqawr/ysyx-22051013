#include "include/memory.h"
#include "include/common.h"

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
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    IFDEF(CONFIG_ISA64, case 8: *(uint64_t *)addr = data; return);
    IFDEF(CONFIG_RT_CHECK, default: assert(0));
  }
}


uint8_t mem[CONFIG_MSIZE];
// Memory transfer
uint8_t* gi_to_hi(uint64_t addr) { return mem + (addr - CONFIG_MEM_BASE); }

const static uint32_t img [] = {
  0x00130393,  // addi t1 t0,1
  0x00138393,   // addi t1 t1,1
  0x00138393,   // addi t1 t1,1
  0x00138393,   // addi t0 t1,1
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};


void init_mem() {
  /* Load built-in image. */
  memcpy(gi_to_hi(0x80000000), img, sizeof(img));
 } 