# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vysyx_22051013_rvcpu.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vysyx_22051013_rvcpu \
	Vysyx_22051013_rvcpu___024root \
	Vysyx_22051013_rvcpu___024root__1 \
	Vysyx_22051013_rvcpu___024root__2 \
	Vysyx_22051013_rvcpu___024root__3 \
	Vysyx_22051013_rvcpu___024root__4 \
	Vysyx_22051013_rvcpu___024root__5 \
	Vysyx_22051013_rvcpu___024root__6 \
	Vysyx_22051013_rvcpu___024root__7 \
	Vysyx_22051013_rvcpu___024root__8 \
	Vysyx_22051013_rvcpu___024root__9 \
	Vysyx_22051013_rvcpu___024root__10 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vysyx_22051013_rvcpu__ConstPool_0 \
	Vysyx_22051013_rvcpu___024root__Slow \
	Vysyx_22051013_rvcpu___024root__1__Slow \
	Vysyx_22051013_rvcpu___024root__2__Slow \
	Vysyx_22051013_rvcpu___024root__3__Slow \
	Vysyx_22051013_rvcpu___024root__4__Slow \
	Vysyx_22051013_rvcpu___024root__5__Slow \
	Vysyx_22051013_rvcpu___024root__6__Slow \
	Vysyx_22051013_rvcpu___024root__7__Slow \
	Vysyx_22051013_rvcpu___024root__8__Slow \
	Vysyx_22051013_rvcpu___024root__9__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vysyx_22051013_rvcpu__Dpi \
	Vysyx_22051013_rvcpu__Trace \
	Vysyx_22051013_rvcpu__Trace__1 \
	Vysyx_22051013_rvcpu__Trace__2 \
	Vysyx_22051013_rvcpu__Trace__3 \
	Vysyx_22051013_rvcpu__Trace__4 \
	Vysyx_22051013_rvcpu__Trace__5 \
	Vysyx_22051013_rvcpu__Trace__6 \
	Vysyx_22051013_rvcpu__Trace__7 \
	Vysyx_22051013_rvcpu__Trace__8 \
	Vysyx_22051013_rvcpu__Trace__9 \
	Vysyx_22051013_rvcpu__Trace__10 \
	Vysyx_22051013_rvcpu__Trace__11 \
	Vysyx_22051013_rvcpu__Trace__12 \
	Vysyx_22051013_rvcpu__Trace__13 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vysyx_22051013_rvcpu__Syms \
	Vysyx_22051013_rvcpu__Trace__Slow \
	Vysyx_22051013_rvcpu__Trace__1__Slow \
	Vysyx_22051013_rvcpu__Trace__2__Slow \
	Vysyx_22051013_rvcpu__Trace__3__Slow \
	Vysyx_22051013_rvcpu__Trace__4__Slow \
	Vysyx_22051013_rvcpu__Trace__5__Slow \
	Vysyx_22051013_rvcpu__Trace__6__Slow \
	Vysyx_22051013_rvcpu__Trace__7__Slow \
	Vysyx_22051013_rvcpu__Trace__8__Slow \
	Vysyx_22051013_rvcpu__Trace__9__Slow \
	Vysyx_22051013_rvcpu__Trace__10__Slow \
	Vysyx_22051013_rvcpu__Trace__11__Slow \
	Vysyx_22051013_rvcpu__Trace__12__Slow \
	Vysyx_22051013_rvcpu__Trace__13__Slow \
	Vysyx_22051013_rvcpu__Trace__14__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
