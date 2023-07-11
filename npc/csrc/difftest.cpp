#include "include/isa.h"
#include <dlfcn.h>
#include "include/memory.h"

#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;
bool is_diff_on = true;
static size_t diff_img_size = 0;

int cnt = 0;
void difftest_skip_ref() {
  is_skip_ref = true;
  cnt += 1;
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
   diff_img_size = img_size;
   
   //cpu.csr[0] =  0x00000005;
  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
}

static void checkregs(NPC_reg *ref, uint64_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    isa_reg_display();
  }
}
int t=0;
void difftest_step(uint64_t pc, uint64_t npc ) {
  if(is_diff_on){
  NPC_reg ref_r;

  if (is_skip_ref) {
  //printf("%lx,%d\n",cpu.pc,cnt);
  if(t==1 & cnt == 0) {
   //printf("step skip\n");
   cpu.pc+=4;
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    //ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
   // printf("%lx,%lx,%lx, %d\n", pc,ref_r.pc,cpu.pc,cnt);
    is_skip_ref = false;
    t=0;
      return;
      }
   else if(t==1 & cnt != 0){
      t=1;
     // printf(" %d\n",cnt);
      cnt--;
      return;
      }
   else if(t==0 & cnt != 0){
      t=1;
      cnt--;
   }
     }

  //if (is_skip_ref) {printf("should not be here\n");}
  //if(cpu.pc >= 0x80001260) { printf("%lx,%d,%d\n",cpu.pc,t,cnt);}
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
   //printf("%lx,%lx,%lx\n", pc,ref_r.pc,cpu.pc);
  checkregs(&ref_r, npc);
  }
}
  
void difftest_attach(){
  if(is_diff_on) return;
	ref_difftest_memcpy(CONFIG_MEM_BASE, gi_to_hi(CONFIG_MEM_BASE), diff_img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
	is_diff_on = true;
	printf("difftest attached\n");
}

void difftest_detach(){
  is_diff_on = false;
	printf("difftest detached\n");
}
#endif
