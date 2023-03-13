#include "include/isa.h"
#include <dlfcn.h>
#include "include/memory.h"

#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;

void difftest_skip_ref() {
  is_skip_ref = true;
  //printf("skip\n");
  }
  
// Definations of Ref
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;

void init_difftest(char *ref_so_file, long img_size)
{

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint32_t addr, void *buf, size_t n, bool direction))(dlsym(handle, "difftest_memcpy"));
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *dut, bool direction))(dlsym(handle, "difftest_regcpy"));
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t n))(dlsym(handle, "difftest_exec"));
  assert(ref_difftest_exec);

  void (*ref_difftest_init)() = (void (*)())(dlsym(handle, "difftest_init"));
  assert(ref_difftest_init);

  ref_difftest_init();
  ref_difftest_memcpy(CONFIG_MEM_BASE, gi_to_hi(CONFIG_MEM_BASE), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
  //printf("%lx\n",cpu.pc);
}

static void checkregs(NPC_reg *ref, uint64_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    isa_reg_display();
  }
}


void difftest_step(uint64_t pc, uint64_t npc ) {
  NPC_reg ref_r;
  int t;
  if (is_skip_ref) {
    if(t==1){
    //printf("step skip\n");
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    t=0;
    }
    t=1;
    return;

  }
  
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  //printf("%lx\n",ref_r.pc);
  checkregs(&ref_r, pc);
  }
#endif
