#ifndef __MMIO_H__
#define __MMIO_H__

//#include <cpu/difftest.h>

typedef void(*io_callback_t)(uint32_t, int, bool);
uint8_t* new_space(int size);

typedef struct {
  const char *name;
  // we treat ioaddr_t as uint64_t here
  uint64_t  low;
  uint64_t  high;
  void *space;
  io_callback_t callback;
} IOMap;

static inline bool map_inside(IOMap *map, uint64_t  addr) {
  return (addr >= map->low && addr <= map->high);
}

static inline int find_mapid_by_addr(IOMap *maps, int size, uint64_t  addr) {
  int i;
  for (i = 0; i < size; i ++) {
    if (map_inside(maps + i, addr)) {
      //difftest_skip_ref();
      return i;
    }
  }
  return -1;
}


void add_mmio_map(const char *name, uint64_t  addr,
        void *space, uint32_t len, io_callback_t callback);

uint64_t  map_read(uint64_t  addr, int len, IOMap *map);
void map_write(uint64_t  addr, int len, uint64_t  data, IOMap *map);

uint64_t  mmio_read(uint64_t  addr, int len);
void mmio_write(uint64_t  addr, int len, uint64_t  data);

#endif
