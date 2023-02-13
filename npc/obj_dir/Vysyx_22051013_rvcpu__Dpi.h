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
    // DPI import at vsrc//idu_decode.v:74:31
    extern void ebreak(svBit ebreak_ena);
    // DPI import at vsrc//idu.v:88:30
    extern void if_id_thepc(long long thepc_data, const svBitVecVal* the_inst);
    // DPI import at vsrc//regfile.v:26:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
