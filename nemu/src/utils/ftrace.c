#include<common.h>
#include<elf.h>

#define NUM_SHDR 64
#define NUM_SYM 1000
#define NUM_FUNCTION_RECORD 1000

Elf64_Ehdr ehdr;
Elf64_Shdr shdr[NUM_SHDR];
int num_sym = 0;
Elf64_Sym sym[NUM_SYM];
Elf64_Off strtab_ptr;
char func_name[64];
FILE *elf_fp = NULL;

int num_cnt = 0;
struct ftrace_result{
  uint64_t pc;
  uint64_t addr;
  char name[64];
  bool call_ret;
  } ftrace_res[NUM_FUNCTION_RECORD];


void init_ftrace(const char *elf_file){
  elf_fp = fopen(elf_file, "rb");
  Assert(elf_fp!=NULL,"Error when opening '%s'\n",elf_file);
  
  fseek(elf_fp,0,SEEK_SET);
  int ehdr_flag = fread(&ehdr,sizeof(Elf64_Ehdr),1,elf_fp);
  Assert(ehdr_flag != 0, "Error when reading elf header\n");
  
  fseek(elf_fp,ehdr.e_shoff,SEEK_SET);
  int shdr_flag = fread(shdr,sizeof(Elf64_Shdr),ehdr.e_shnum,elf_fp);
  Assert(shdr_flag != 0, "Error when reading section header\n");
  

  for(int i=0;i<ehdr.e_shnum;++i){
    switch(shdr[i].sh_type){
      case SHT_SYMTAB:
        fseek(elf_fp, shdr[i].sh_offset, SEEK_SET);
        int sym_flag = fread(sym, 1, shdr[i].sh_size, elf_fp);
        Assert(sym_flag != 0, "Error when reading symbol table\n");
        num_sym = shdr[i].sh_size / shdr[i].sh_entsize;
        break;
      case SHT_STRTAB:
        if(i!=ehdr.e_shstrndx){
        strtab_ptr = shdr[i].sh_offset;}
        break;
      default : break;
     }
   }
}

char *search_func_name(uint64_t addr){
  for(int i = 0; i<num_sym;++i){
    if(ELF64_ST_TYPE(sym[i].st_info)==STT_FUNC){
      if(sym[i].st_value <= addr && addr <sym[i].st_value + sym[i].st_size){
        fseek(elf_fp,(strtab_ptr+sym[i].st_name),SEEK_SET);
        return fgets(func_name,64,elf_fp);
      }
    }
  }
  return NULL;
}

void ftrace_exec(uint64_t pc, uint64_t addr, bool call_ret){
  char *name = search_func_name(addr);
  if (name != NULL) {
    ftrace_res[num_cnt].pc = pc;
    ftrace_res[num_cnt].addr = addr;
    strcpy(ftrace_res[num_cnt].name,name);
    ftrace_res[num_cnt].call_ret = call_ret;
    num_cnt++;
  }
}

void ftrace_print() {
  int blank_num = 0;
  for (int i = 0; i < num_cnt; ++i) {
    printf("0x%016lx: ", ftrace_res[i].pc);
    if (ftrace_res[i].call_ret) blank_num += 2;
    for (int j = 0; j < blank_num; ++j) putchar(' ');
    if (ftrace_res[i].call_ret) {
      printf("call [%s@0x%016lx]\n", ftrace_res[i].name, ftrace_res[i].addr);
    } else {
      printf("ret [%s]\n", ftrace_res[i].name);
      blank_num -= 2;
    }
  }
}
