ifeq ($(wildcard /home/hxy/ysyx-workbench/npc/csrc/main.cpp),)
  $(error can't find the sim cpp file)
endif

include /usr/local/share/verilator/include/verilated.mk

OBJ_PATH=./obj_dir/
VERILOG= ./vsrc/
CC=g++
SIM_DIR= ./csrc/build
VERILAGS= -Wall --trace --cc --exe --build --top-module ysyx_22051013_rvcpu
VERILAGS+= -y ./vsrc/
GTKFLAG = -CFLAGS -g
NPC_IMG?= 
NPC_FLAGS?= 
LINK= -LDFLAGS "-lreadline  --no-pie  -ldl -lLLVM-14" 
LLVM= -CFLAGS "-I/usr/lib/llvm-14/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS   -D__STDC_LIMIT_MACROS -fPIE"


$(shell  mkdir -p $(SIM_DIR))

run:git
	@verilator $(VERILAGS) $(GTKFLAGS) $(LINK) $(LLVM) ./csrc/*.cpp $(VERILOG)rvcpu.v 
	@make -j -C $(OBJ_PATH) -f Vysyx_22051013_rvcpu.mk Vysyx_22051013_rvcpu 
	./obj_dir/Vysyx_22051013_rvcpu  $(NPC_FLAGS) $(NPC_IMG)

gtk:
	@gtkwave ./obj_dir/rvcpu.vcd
git:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
clean:
	rm -rf $(SIM_DIR)
clean-all: clean
	rm -rf ./obj_dir/
.PHONY:clean
include ../Makefile
