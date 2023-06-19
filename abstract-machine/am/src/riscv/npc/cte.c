#include <am.h>
#include <klib.h>
#include "../riscv.h"

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  //printf("%d \n",c->mcause);
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11: 
      		if(c->GPR1 == -1){
      			ev.event = EVENT_YIELD; 
      			}
      		else {
      			ev.event = EVENT_SYSCALL;
      			}
      		c->mepc += 4;
      		break;
       case 0x8000000000000007:
       		ev.event = EVENT_IRQ_TIMER;
       		break;
      default: ev.event = EVENT_ERROR; break;

    }


    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}
uint64_t time_now;

void iset(bool enable) {
	int time = 0x0200bff8;
	int timecmp = 0x02004000;
	int set = 500;
	int mie_set = 0x80;
	int mstatus_set = 0x8;
	time_now = inll(time);
	uint64_t time_set = time_now + set;
	outll(timecmp,time_set);
	asm volatile("csrw mie, %0" : : "r"(mie_set));
	asm volatile("csrw mstatus, %0" : : "r"(mstatus_set));
}
