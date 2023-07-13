#include <fs.h>
#include <common.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  size_t open_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, DEV_EVENT, PROC_DISP, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}


size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len) ;
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, 0, invalid_read, serial_write},
  [DEV_EVENT] = {"/dev/events", 0, 0, 0, events_read, invalid_write},
  [PROC_DISP] = {"/proc/dispinfo", 0, 0, 0, dispinfo_read, invalid_write},
  [FD_FB]     = {"/dev/fb", 0, 0, 0, invalid_read, fb_write},
#include "files.h"
};

void init_fs() {
//printf("init_fs\n");
  AM_GPU_CONFIG_T config = io_read(AM_GPU_CONFIG);  
  file_table[FD_FB].size = config.width * config.height * sizeof(uint32_t);
}

int fs_open(const char *pathname, int flags, int mode){
  //printf("pathname %s \n",pathname);
  int num = sizeof(file_table) / sizeof(Finfo);
  for(int i = 0; i < num; i++){
    if(strcmp(pathname, file_table[i].name) == 0) return i;
  }
  panic("pathname %s do not exist\n",pathname);
}

size_t fs_read(int fd, void *buf, size_t len) {
//printf("fs_read GPR2(fd) :%d, GPR3(addr) : %x, GPR4(len) : %d, offset : %d\n",fd,buf,len,file_table[fd].open_offset);
  if (file_table[fd].read == NULL) {
    if (file_table[fd].open_offset + len > file_table[fd].size) {
      len = file_table[fd].size - file_table[fd].open_offset;
    }
    size_t ret = ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
    file_table[fd].open_offset += len;
    return ret;
  } else return file_table[fd].read(buf, file_table[fd].open_offset, len);
}

size_t fs_write(int fd, const void *buf, size_t len) {
//printf("fs_write GPR2(fd) :%d, GPR3(addr) : %x, GPR4(len) : %d, offset : %d\n",fd,buf,len,file_table[fd].open_offset);
  if (file_table[fd].write == NULL) {
    if (file_table[fd].open_offset + len > file_table[fd].size) {
      len = file_table[fd].size - file_table[fd].open_offset;
    }
    size_t ret = ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
    file_table[fd].open_offset += len;
    return ret;
    } else return file_table[fd].write(buf, file_table[fd].open_offset, len);
}

size_t fs_lseek(int fd, size_t offset, int whence) {
//printf("fs_lseek GPR2(fd) :%d, open_offset : %d, GPR3(offset) : %d, GPR4(whence) : %d\n",fd,file_table[fd].open_offset,offset,whence);
  switch (whence) {
    case SEEK_SET:
      file_table[fd].open_offset = offset;//0
      break;
    case SEEK_CUR:
      file_table[fd].open_offset += offset;
      break;
    case SEEK_END:
      file_table[fd].open_offset = file_table[fd].size + offset;
      break;
    default:
      panic("error in fs_lseek");
  }
  //printf("return offset : %d\n",file_table[fd].open_offset);
  return file_table[fd].open_offset;
  
}

int fs_close(int fd) {
  file_table[fd].open_offset = 0;
  return 0;
}
