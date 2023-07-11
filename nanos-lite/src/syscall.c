#include <common.h>
#include "syscall.h"
#include <sys/time.h>

static void strace(Context *c);

#define STRACE 1
#undef STRACE


static void strace(Context *c){
  #ifdef STRACE
  if(c->GPR1 == 2){
    printf("\n\nSystem call trace open file : %s\n\n", c->GPR2);
    }
    else{
    printf("System call trace \nmcause\t\t\t\tGPR1\t\t\t\tGPR2\t\t\t\tGPR3\t\t\t\tGPR4 \n0x%x\t\t\t\t %d\t\t\t\t 0x%x\t\t\t\t 0x%x\t\t\t\t 0x%x\n", c->mcause, c->GPR1, c->GPR2, c->GPR3, c->GPR4);
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


