#include <common.h>
#include "syscall.h"

static void strace(Context *c);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  strace(c);
  switch (a[0]) {
    case SYS_exit:
      halt(0);
      break;
    case SYS_yield:
      yield();
      c->GPRx = 0;
      break;
    case SYS_brk:
      c->GPRx = 0;
      break;
    case SYS_write:
     if (c->GPR2 == 1 || c->GPR2 == 2){
       for (int i = 0; i < c->GPR4; ++i){
         putch(*(((char *)c->GPR3) + i));
       }
       c->GPRx = c->GPR4;
       }
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}

#define STRACE 1
//#undef STRACE

static void strace(Context *c){
  #ifdef STRACE
    //TODO: 缺一个trace
    printf("System call trace\nmcause\t\t\t\tGPR1\t\t\t\tGPR2\t\t\t\tGPR3\t\t\t\tGPR4 \n0x%x\t\t\t\t %d\t\t\t\t 0x%x\t\t\t\t 0x%x\t\t\t\t 0x%x\n",
      c->mcause, c->GPR1, c->GPR2, c->GPR3, c->GPR4);
  #endif
}
