#include <common.h>

static Context* do_event(Event e, Context* c) {

//printf("FROM AM \nmcause\t\t\t\tGPR1\t\t\t\tGPR2\t\t\t\tGPR3\t\t\t\tGPR4 \n0x%x\t\t\t\t %s\t\t\t\t 0x%x\t\t\t\t 0x%x\t\t\t\t 0x%x\n", c->mcause,c->GPR1, c->GPR2, c->GPR3, c->GPR4);
  switch (e.event) {
    case EVENT_SYSCALL : do_syscall(c);break;
    case EVENT_YIELD : printf("successfully call sys_yield\n"); break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
