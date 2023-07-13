#include <common.h>
#include "syscall.h"
#include <sys/time.h>

static void strace(Context *c);

#define STRACE 1
#undef STRACE

const char *sys_name[] = {
  "SYS_exit",
  "SYS_yield",
  "SYS_open",
  "SYS_read",
  "SYS_write",
  "SYS_kill",
  "SYS_getpid",
  "SYS_close",
  "SYS_lseek",
  "SYS_brk",
  "SYS_fstat",
  "SYS_time",
  "SYS_signal",
  "SYS_execve",
  "SYS_fork",
  "SYS_link",
  "SYS_unlink",
  "SYS_wait",
  "SYS_times",
  "SYS_gettimeofday"
};

static void strace(Context *c){
  #ifdef STRACE
  if(c->GPR1 == 2){
    printf("\n\nSystem call trace open file : %s\n\n", c->GPR2);
    }
    else{
    printf("System call trace \nGPR1\t\t\t\tGPR2\t\t\t\tGPR3\t\t\t\tGPR4 \n%s\t\t\t\t 0x%x\t\t\t\t 0x%x\t\t\t\t 0x%x\n", sys_name[c->GPR1], c->GPR2, c->GPR3, c->GPR4);
    }
  #endif
}


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  strace(c);
  switch (a[0]) {
    case SYS_exit:
      halt(0);
      break;
    case SYS_yield:
   //   printf("sys_yield\n");
      yield();
      c->GPRx = 0;
      break;
    case SYS_brk:
      c->GPRx = 0;
      break;
    case SYS_open:
      c->GPRx = fs_open((const char *)c->GPR2, c->GPR3, c->GPR4);
      break;
    case SYS_read:
      c->GPRx = fs_read(c->GPR2, (void *)c->GPR3, c->GPR4);
      break;
    case SYS_write:
      /*if (c->GPR2 == 1 || c->GPR2 == 2){
        for (int i = 0; i < c->GPR4; ++i){
          putch(*(((char *)c->GPR3) + i));
        }
        c->GPRx = c->GPR4;
      }else{*/
        c->GPRx = fs_write(c->GPR2,(void *)c->GPR3,c->GPR4);
      break;
    case SYS_lseek:
      c->GPRx = fs_lseek(c->GPR2, c->GPR3, c->GPR4);
      break;
    case SYS_close:
      c->GPRx = fs_close(c->GPR2);
      break;
    case SYS_gettimeofday:
      struct timeval *tv = (struct timeval *)c->GPR2;
      uint64_t time = io_read(AM_TIMER_UPTIME).us;
      tv->tv_usec = (time % 1000000);
      tv->tv_sec = (time / 1000000);
      c->GPRx = 0;
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}


