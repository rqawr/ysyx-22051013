#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <cstdint>

uint64_t host_read(void *addr, int len);

void host_write(void *addr, int len, uint64_t data);

uint8_t* gi_to_hi(uint64_t addr);

#endif
