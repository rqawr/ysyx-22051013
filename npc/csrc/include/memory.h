#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <cstdint>
#include "common.h"

#define PMEM_LEFT  ((uint64_t)CONFIG_MEM_BASE)
#define PMEM_RIGHT ((uint64_t)CONFIG_MEM_BASE + CONFIG_MSIZE - 1)
uint64_t host_read(void *addr, int len);

void host_write(void *addr, int len, uint64_t data);

static inline bool in_pmem(uint64_t addr) {
  return addr - CONFIG_MEM_BASE < CONFIG_MSIZE;
}

uint8_t* gi_to_hi(uint64_t addr);

#endif
