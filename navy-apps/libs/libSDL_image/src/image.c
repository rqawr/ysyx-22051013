#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  int fd = open(filename, 0, 0);
  size_t sz = lseek(fd, 0, SEEK_END);
  //printf("%ld\n",sz);
  char *buf = malloc(sz);
  lseek(fd, 0, SEEK_SET);
  read(fd, buf, sz);
  SDL_Surface *p = STBIMG_LoadFromMemory(buf, sz);
  close(fd);
  free(buf);
  return p;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
