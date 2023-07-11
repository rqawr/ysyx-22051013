#include <cstdlib>
#include <getopt.h>
#include "include/common.h"
#include "include/memory.h"

void init_log(const char *log_file);
void init_ftrace(const char *elf_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n", ANSI_FMT("riscv64", ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  
}

void sdb_set_batch_mode();

char *p = getenv("NEMU_HOME");
const char *q = "/build/riscv64-nemu-interpreter-so";
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file =NULL;
static char *log_file = NULL;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(gi_to_hi(CONFIG_MEM_BASE), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"elf"      , required_argument, NULL, 'e'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      //case 'd': diff_so_file = optarg; break;
      case 'l': log_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-e,--elf=FILE           open elf from FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* For diff_so_file*/
	strcat(p,q);
	diff_so_file = p;
	
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);
  
  /* init log*/
  init_log(log_file);

  #ifdef CONFIG_FTRACE
  /* Open the elf file. */
  init_ftrace(elf_file);
  #endif

  /* Initialize memory. */
  init_mem();
  
  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Initialize devices. */
//  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
//  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();
 #ifdef CONFIG_DIFFTEST
  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size);
  #endif
  /* Initialize the simple debugger. */
  init_sdb();
#ifdef CONFIG_ITRACE
  init_disasm("riscv64-pc-linux-gnu");
#endif
  /* Display welcome message. */
  welcome();
}
