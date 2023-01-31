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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned long result = %s; "
"  printf(\"%%lu\", result); "
"  return 0; "
"}";

static unsigned choose(unsigned n){
	return rand() %n;
}

static void gen(char s){
	char add_str[]={s,'\0'};
	strcat(buf,add_str);
}

static void gen_num(){
	char num_str[70];
	sprintf(num_str,"%u",choose(100));
	strcat(buf,num_str);
}

static void gen_space(){
	for(int i=0;i<choose(5);i++){
		if(choose(11)>9){
			strcat(buf," ");
		}
	}
}

static void gen_rand_op(){
	char op_list[]={'+','-','*','/'};
	char add_str[] = {op_list[choose(4)],'\0'};
	strcat(buf,add_str);
}

static void gen_rand_expr(int depth) {
	if(strlen(buf)>65536-20000 ||depth>12){
	 gen_num();
   return;
	}
	gen_space();
	  switch(choose(3)){
		  case 0: gen_num();break;
	    case 1: gen('('); gen_rand_expr(depth+1); gen(')');break;
	    default : gen_rand_expr(depth+1);gen_rand_op();gen_rand_expr(depth+1); break;
    }
	gen_space();
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
		buf[0] = '\0';
    gen_rand_expr(0);

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) {continue;}

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    uint64_t result;
    if(fscanf(fp, "%lu", &result)){
      if(pclose(fp)!=0){
        continue;
      }
      printf("%lu %s\n", result, buf);
    }
   }
  return 0;
}
