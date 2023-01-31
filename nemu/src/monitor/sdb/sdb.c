/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_si(char *args) {
  char *arg = strtok(NULL, " ");
    if(arg==NULL){
        cpu_exec(1);
        }
  else{
    int n=0;
    sscanf(arg,"%d",&n);
        cpu_exec(n);
        }
  return 0;
}

static int cmd_info(char *args) {
  char *arg=strtok(NULL, " ");
  if(strcmp(arg,"r")==0){
    isa_reg_display();
    return 0;
    }
  else if(strcmp(arg,"w")==0){
     print_wp();
     }
   return 0;
 }

static int cmd_x(char *args){
  char *arg=strtok(NULL, " ");
  int n=0;
  sscanf(arg,"%d",&n);
  char *exp=strtok(NULL, " ");
  char *str;
  vaddr_t addr=strtol(exp,&str,16);
  for (int i=0;i<n;i++){
     uint64_t byte=paddr_read(addr+i*4,4);
     printf("0x%08lx ",addr+i*4);
        for (int j=0;j<4;j++){
            printf("%02lx ",byte&0xff);
            byte=byte>>8;
            }
     printf("\n");
     }
  return 0;
}

static int cmd_p(char *args) {
  bool success;
  if(strcmp(args, "test") == 0) {
    char str[3000];
    uint64_t answer;
    FILE *fp=fopen("/home/hxy/ysyx-workbench/nemu/tools//gen-expr/input.txt","r");
    assert(fp!=NULL);
    while(fscanf(fp,"%lu %[^\n]",&answer,str)>0){
      uint64_t result=expr(str,&success);
      if(result!=answer){
        printf("Wrong calculate for %s, right answer: %lu, wrong calculate: %lu\n",str,answer,result);
      }
    }
    fclose(fp);
    printf("Test passed.\n");
  }
  else{
  uint64_t result = expr(args,&success);
  if(!success){
    printf("wrong calculate in expr\n");
	}
  else{
    printf("%lu\n",result);
    }
  }
      return 0;
}

static int cmd_w(char *args){
  WP* temp = new_wp();
  strcpy(temp->expr, args);
  bool success;
  temp->value = expr(args, &success);
 // printf("watchpoint value set to 0x%08lx \n", temp->value);
  printf("watchpoint NO.%d for expression %s\n",temp->NO,temp->expr);
  return 0; 
}

static int cmd_d(char *args){
  char *arg=strtok(NULL," ");
  int N = 0;
  sscanf(arg, "%d", &N);
  bool ret = delete_wp(N);
  if(ret == true){printf("delete watchpoint NO.%d \n",N);}
  else{printf("delete watchpoint failure\n");}
  return 0;
}

static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","Execute program step for step N times",cmd_si },
  { "info","Print value of registers or watchpoints", cmd_info},
  { "x", "Sweep memory at given address", cmd_x },
  { "p", "Calculate given  expressions", cmd_p },
  { "w", "Set the watchpoint", cmd_w },
  { "d", "Delete the watchpoint whose id is N", cmd_d },
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
