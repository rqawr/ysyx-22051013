// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/pip_cpu/csr.v:19:30
    extern void difftest_dut_csr(long long csr_mstatus, long long csr_mtvec, long long csr_mepc, long long csr_mcause);
    // DPI import at vsrc/pip_cpu/regfile.v:31:31
    extern void difftest_dut_regs(long long Z0, long long ra, long long sp, long long gp, long long tp, long long t0, long long t1, long long t2, long long fp, long long s1, long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long s2, long long s3, long long s4, long long s5, long long s6, long long s7, long long s8, long long s9, long long s10, long long a11, long long t3, long long t4, long long t5, long long t6);
    // DPI import at vsrc/pip_cpu/wbu.v:58:30
    extern void ebreak(svBit ebreak_ena);
    // DPI import at vsrc/pip_cpu/wbu.v:57:30
    extern void pc_inst_end(long long thepc_data, const svBitVecVal* the_inst);
    // DPI import at vsrc/pip_cpu/axi_slave.v:141:30
    extern void pmem_read(long long raddr, long long* rdata, char rlen);
    // DPI import at vsrc/pip_cpu/axi_slave.v:142:30
    extern void pmem_write(long long waddr, long long wdata, char wlen);

#ifdef __cplusplus
}
#endif
