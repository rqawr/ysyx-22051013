#include <proc.h>
#include <elf.h>
#include <fs.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#elif
# error unsupported ISA __ISA__
#endif
/*
static uintptr_t loader(PCB *pcb, const char *filename) {
  //TODO();
  Elf_Ehdr ehdr;
  ramdisk_read(&ehdr,0,sizeof(Elf_Ehdr));
  assert(*(uint32_t *)ehdr.e_ident == 0x464C457F);
  assert(EXPECT_TYPE == ehdr.e_machine);
  Elf_Phdr phdr[ehdr.e_phnum];
  ramdisk_read(phdr, ehdr.e_phoff , ehdr.e_phentsize * ehdr.e_phnum);
  for(int i = 0; i < ehdr.e_phnum ; i++){
    if(phdr[i].p_type == PT_LOAD){
      ramdisk_read((void *)(phdr[i].p_vaddr),phdr[i].p_offset,phdr[i].p_memsz);
      memset((void *)(phdr[i].p_vaddr+phdr[i].p_filesz),0 ,(phdr[i].p_memsz-phdr[i].p_filesz));
    }
  }
  
  return ehdr.e_entry;
}*/

static uintptr_t loader(PCB *pcb, const char *filename) {

  int fd = fs_open(filename, 0, 0);
  Elf_Ehdr ehdr;
  assert(fs_read(fd, &ehdr, sizeof(Elf_Ehdr))!=0);
  
  
  assert(*(uint32_t *)ehdr.e_ident == 0x464C457F);
  assert(EXPECT_TYPE == ehdr.e_machine);
  
  Elf_Phdr phdr[ehdr.e_phnum];
  fs_lseek(fd, ehdr.e_phoff, SEEK_SET);
  assert(fs_read(fd, phdr, ehdr.e_phentsize * ehdr.e_phnum)!=0);
  
  for (int i = 0; i < ehdr.e_phnum; i++) {
    if(phdr[i].p_type == PT_LOAD){
      fs_lseek(fd, phdr[i].p_offset, SEEK_SET);
      fs_read(fd, (void *)phdr[i].p_vaddr, phdr[i].p_memsz);
      memset((void *)phdr[i].p_vaddr + phdr[i].p_filesz, 0, phdr[i].p_memsz - phdr[i].p_filesz);
    }
  }
  return ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

