ifeq ($(wildcard /home/hxy/ysyx-workbench/npc/csrc/main.cpp),)
  $(error can't find the sim cpp file)
endif

include /usr/local/share/verilator/include/verilated.mk

OBJ_PATH=./obj_dir/
VERILOG= ./vsrc/pip_cpu/
CC=g++
VERILAGS= -O3 -Wall --trace --cc --exe --build --top-module ysyx_22051013 ##--prof-cfuncs
VERILAGS+= -y ./vsrc 
GTKFLAG = -CFLAGS -g
NPC_IMG?= ##$(OBJ_PATH)matrix-mul-riscv64-npc.bin
NPC_FLAGS?= -l $(OBJ_PATH)npc-log.txt -b
LINK= -LDFLAGS "-lreadline  --no-pie  -ldl -lLLVM-14 -lSDL2" 
LLVM= -CFLAGS "-I/usr/lib/llvm-14/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS   -D__STDC_LIMIT_MACROS -fPIE"


run:git
	@verilator $(VERILAGS) $(GTKFLAGS) $(LINK) $(LLVM) ./csrc/*.cpp $(VERILOG)soc_top.v 
	@make -j -C $(OBJ_PATH) -f Vysyx_22051013.mk Vysyx_22051013
	./obj_dir/Vysyx_22051013  $(NPC_FLAGS) $(NPC_IMG)

gtk:
	@gtkwave ./obj_dir/rvcpu.vcd
gdb:
	@gdb -s ./obj_dir/Vysyx_22051013 --args ./obj_dir/Vysyx_22051013 $(NPC_FLAGS) $(NPC_IMG)
git:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
gprof:
	@gprof -b -p ./obj_dir/Vysyx_22051013 
clean:
	rm -rf $(SIM_DIR)
clean-all: clean
	rm -rf ./obj_dir/
.PHONY:clean
include ../Makefile
