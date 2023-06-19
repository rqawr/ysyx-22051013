#include "include/isa.h"
#include "sdb.h"
#include <locale.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

NPC_reg cpu = { .pc =0x80000000};
Decode s;
NPC_State npc_state = { .state = NPC_QUIT };

uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
int flag = 0;
int difftest_ena = 0;

void device_update();

#ifdef CONFIG_ITRACE_IRINGBUF
int ringbufnum = 15;
char iringbuf[16][128];
#endif

#ifdef CONFIG_DIFFTEST
void difftest_step(uint64_t pc, uint64_t npc);
#endif

#ifdef CONFIG_FTRACE
void ftrace_exec(uint64_t pc, uint64_t addr, bool call_ret);
void ftrace_print();
#endif

static void trace_and_difftest(Decode *_this, uint64_t dnpc) {
#ifdef CONFIG_ITRACE
  log_write("%s\n", _this->logbuf); 
#endif
#ifdef CONFIG_ITRACE_IRINGBUF
  ringbufnum = (ringbufnum + 1)%16;
  strcpy(iringbuf[ringbufnum] , _this->logbuf);
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  //printf("%lx\n",_this->pc);
#ifdef CONFIG_DIFFTEST
 // if(difftest_ena == 1){
      difftest_step(_this->pc,dnpc);
      //printf("%lx\n",_this->pc);
 //   }
//  else {
//    difftest_ena = 1;
    
//    }
#endif
  
 // IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc));
#ifdef CONFIG_WATCHPOINT
  bool change = test_change();
  if(change) {npc_state.state = NPC_STOP; printf("watchpoint reached\n");}
#endif
}

static void exec_once(Decode *s, uint64_t pc) {
  //printf("%x , %lx\n",s->val,cpu.pc);
  s->pc = cpu.pc;
  //printf("%lx , %lx\n",s->pc,cpu.pc);
  isa_exec_once();
  
  s->snpc = cpu.pc;
   //printf("%x , %lx\n",s->val,cpu.pc);
  
#ifdef CONFIG_FTRACE
  uint64_t finst = s->val;
  if (finst == 0x00008067) {  // ret
    ftrace_exec(s->snpc, s->snpc, false);
  } 
  else if ((BITS(finst, 6, 0) == 0x6f || BITS(finst, 6, 0) == 0x67) && BITS(finst, 11, 7) != 0) {
   flag = 1;}
   // printf("%d\n",flag);}
  else if(flag == 1){
    flag = 0;
    //printf("%d\n",flag);
    //printf("%lx , %lx\n",s->pc,s->snpc);
    ftrace_exec(s->pc, s->snpc, true);
    }
  
#endif
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->snpc);
  int ilen = 4;//s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
 
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
       s->snpc, (uint8_t *)&s->val, ilen);
  
#endif
}

static void execute(uint64_t n) {
  //printf("%x , %lx\n",s.val,cpu.pc);
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (npc_state.state != NPC_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;
    
    case NPC_ABORT: 
      #ifdef CONFIG_ITRACE_IRINGBUF
        printf("\n-------------IRINGBUF------------\n");
        for (int i = 0 ; i <16 ; ++i){
          if(i==ringbufnum-1){
	    printf("--->%s\n",iringbuf[i]);
	  }
	  else{
	    printf("    %s\n",iringbuf[i]);
	  }
	}
	printf("\n");
      #endif
      #ifdef CONFIG_FTRACE
	printf("========== Ftrace Result ==========\n");
	ftrace_print();
	printf("\n");
      #endif

     case NPC_END:
      Log("npc: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);

      // fall through
    case NPC_QUIT: statistic();
  }
}
