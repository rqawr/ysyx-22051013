// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22051013_rvcpu.h for the primary calling header

#include "Vysyx_22051013_rvcpu___024root.h"
#include "Vysyx_22051013_rvcpu__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata, char rlen);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char rlen__Vcvt;
    for (size_t rlen__Vidx = 0; rlen__Vidx < 1; ++rlen__Vidx) rlen__Vcvt = rlen;
    pmem_read(raddr__Vcvt, &rdata__Vcvt, rlen__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wlen);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wlen__Vcvt;
    for (size_t wlen__Vidx = 0; wlen__Vidx < 1; ++wlen__Vidx) wlen__Vcvt = wlen;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wlen__Vcvt);
}

extern "C" void difftest_dut_csr(long long csr_mstatus, long long csr_mtvec, long long csr_mepc, long long csr_mcause);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__difftest_dut_csr_TOP(QData/*63:0*/ csr_mstatus, QData/*63:0*/ csr_mtvec, QData/*63:0*/ csr_mepc, QData/*63:0*/ csr_mcause) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__difftest_dut_csr_TOP\n"); );
    // Body
    long long csr_mstatus__Vcvt;
    for (size_t csr_mstatus__Vidx = 0; csr_mstatus__Vidx < 1; ++csr_mstatus__Vidx) csr_mstatus__Vcvt = csr_mstatus;
    long long csr_mtvec__Vcvt;
    for (size_t csr_mtvec__Vidx = 0; csr_mtvec__Vidx < 1; ++csr_mtvec__Vidx) csr_mtvec__Vcvt = csr_mtvec;
    long long csr_mepc__Vcvt;
    for (size_t csr_mepc__Vidx = 0; csr_mepc__Vidx < 1; ++csr_mepc__Vidx) csr_mepc__Vcvt = csr_mepc;
    long long csr_mcause__Vcvt;
    for (size_t csr_mcause__Vidx = 0; csr_mcause__Vidx < 1; ++csr_mcause__Vidx) csr_mcause__Vcvt = csr_mcause;
    difftest_dut_csr(csr_mstatus__Vcvt, csr_mtvec__Vcvt, csr_mepc__Vcvt, csr_mcause__Vcvt);
}

extern "C" void pc_inst_end(long long thepc_data, const svBitVecVal* the_inst);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_inst_end_TOP(QData/*63:0*/ thepc_data, IData/*31:0*/ the_inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_inst_end_TOP\n"); );
    // Body
    long long thepc_data__Vcvt;
    for (size_t thepc_data__Vidx = 0; thepc_data__Vidx < 1; ++thepc_data__Vidx) thepc_data__Vcvt = thepc_data;
    svBitVecVal the_inst__Vcvt[1];
    for (size_t the_inst__Vidx = 0; the_inst__Vidx < 1; ++the_inst__Vidx) VL_SET_SVBV_I(32, the_inst__Vcvt + 1 * the_inst__Vidx, the_inst);
    pc_inst_end(thepc_data__Vcvt, the_inst__Vcvt);
}

extern "C" void ebreak(svBit ebreak_ena);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__ebreak_TOP(CData/*0:0*/ ebreak_ena) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__ebreak_TOP\n"); );
    // Body
    svBit ebreak_ena__Vcvt;
    for (size_t ebreak_ena__Vidx = 0; ebreak_ena__Vidx < 1; ++ebreak_ena__Vidx) ebreak_ena__Vcvt = ebreak_ena;
    ebreak(ebreak_ena__Vcvt);
}

extern "C" void difftest_dut_regs(long long Z0, long long ra, long long sp, long long gp, long long tp, long long t0, long long t1, long long t2, long long fp, long long s1, long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long s2, long long s3, long long s4, long long s5, long long s6, long long s7, long long s8, long long s9, long long s10, long long a11, long long t3, long long t4, long long t5, long long t6);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__reg9__DOT__difftest_dut_regs_TOP(QData/*63:0*/ Z0, QData/*63:0*/ ra, QData/*63:0*/ sp, QData/*63:0*/ gp, QData/*63:0*/ tp, QData/*63:0*/ t0, QData/*63:0*/ t1, QData/*63:0*/ t2, QData/*63:0*/ fp, QData/*63:0*/ s1, QData/*63:0*/ a0, QData/*63:0*/ a1, QData/*63:0*/ a2, QData/*63:0*/ a3, QData/*63:0*/ a4, QData/*63:0*/ a5, QData/*63:0*/ a6, QData/*63:0*/ a7, QData/*63:0*/ s2, QData/*63:0*/ s3, QData/*63:0*/ s4, QData/*63:0*/ s5, QData/*63:0*/ s6, QData/*63:0*/ s7, QData/*63:0*/ s8, QData/*63:0*/ s9, QData/*63:0*/ s10, QData/*63:0*/ a11, QData/*63:0*/ t3, QData/*63:0*/ t4, QData/*63:0*/ t5, QData/*63:0*/ t6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__reg9__DOT__difftest_dut_regs_TOP\n"); );
    // Body
    long long Z0__Vcvt;
    for (size_t Z0__Vidx = 0; Z0__Vidx < 1; ++Z0__Vidx) Z0__Vcvt = Z0;
    long long ra__Vcvt;
    for (size_t ra__Vidx = 0; ra__Vidx < 1; ++ra__Vidx) ra__Vcvt = ra;
    long long sp__Vcvt;
    for (size_t sp__Vidx = 0; sp__Vidx < 1; ++sp__Vidx) sp__Vcvt = sp;
    long long gp__Vcvt;
    for (size_t gp__Vidx = 0; gp__Vidx < 1; ++gp__Vidx) gp__Vcvt = gp;
    long long tp__Vcvt;
    for (size_t tp__Vidx = 0; tp__Vidx < 1; ++tp__Vidx) tp__Vcvt = tp;
    long long t0__Vcvt;
    for (size_t t0__Vidx = 0; t0__Vidx < 1; ++t0__Vidx) t0__Vcvt = t0;
    long long t1__Vcvt;
    for (size_t t1__Vidx = 0; t1__Vidx < 1; ++t1__Vidx) t1__Vcvt = t1;
    long long t2__Vcvt;
    for (size_t t2__Vidx = 0; t2__Vidx < 1; ++t2__Vidx) t2__Vcvt = t2;
    long long fp__Vcvt;
    for (size_t fp__Vidx = 0; fp__Vidx < 1; ++fp__Vidx) fp__Vcvt = fp;
    long long s1__Vcvt;
    for (size_t s1__Vidx = 0; s1__Vidx < 1; ++s1__Vidx) s1__Vcvt = s1;
    long long a0__Vcvt;
    for (size_t a0__Vidx = 0; a0__Vidx < 1; ++a0__Vidx) a0__Vcvt = a0;
    long long a1__Vcvt;
    for (size_t a1__Vidx = 0; a1__Vidx < 1; ++a1__Vidx) a1__Vcvt = a1;
    long long a2__Vcvt;
    for (size_t a2__Vidx = 0; a2__Vidx < 1; ++a2__Vidx) a2__Vcvt = a2;
    long long a3__Vcvt;
    for (size_t a3__Vidx = 0; a3__Vidx < 1; ++a3__Vidx) a3__Vcvt = a3;
    long long a4__Vcvt;
    for (size_t a4__Vidx = 0; a4__Vidx < 1; ++a4__Vidx) a4__Vcvt = a4;
    long long a5__Vcvt;
    for (size_t a5__Vidx = 0; a5__Vidx < 1; ++a5__Vidx) a5__Vcvt = a5;
    long long a6__Vcvt;
    for (size_t a6__Vidx = 0; a6__Vidx < 1; ++a6__Vidx) a6__Vcvt = a6;
    long long a7__Vcvt;
    for (size_t a7__Vidx = 0; a7__Vidx < 1; ++a7__Vidx) a7__Vcvt = a7;
    long long s2__Vcvt;
    for (size_t s2__Vidx = 0; s2__Vidx < 1; ++s2__Vidx) s2__Vcvt = s2;
    long long s3__Vcvt;
    for (size_t s3__Vidx = 0; s3__Vidx < 1; ++s3__Vidx) s3__Vcvt = s3;
    long long s4__Vcvt;
    for (size_t s4__Vidx = 0; s4__Vidx < 1; ++s4__Vidx) s4__Vcvt = s4;
    long long s5__Vcvt;
    for (size_t s5__Vidx = 0; s5__Vidx < 1; ++s5__Vidx) s5__Vcvt = s5;
    long long s6__Vcvt;
    for (size_t s6__Vidx = 0; s6__Vidx < 1; ++s6__Vidx) s6__Vcvt = s6;
    long long s7__Vcvt;
    for (size_t s7__Vidx = 0; s7__Vidx < 1; ++s7__Vidx) s7__Vcvt = s7;
    long long s8__Vcvt;
    for (size_t s8__Vidx = 0; s8__Vidx < 1; ++s8__Vidx) s8__Vcvt = s8;
    long long s9__Vcvt;
    for (size_t s9__Vidx = 0; s9__Vidx < 1; ++s9__Vidx) s9__Vcvt = s9;
    long long s10__Vcvt;
    for (size_t s10__Vidx = 0; s10__Vidx < 1; ++s10__Vidx) s10__Vcvt = s10;
    long long a11__Vcvt;
    for (size_t a11__Vidx = 0; a11__Vidx < 1; ++a11__Vidx) a11__Vcvt = a11;
    long long t3__Vcvt;
    for (size_t t3__Vidx = 0; t3__Vidx < 1; ++t3__Vidx) t3__Vcvt = t3;
    long long t4__Vcvt;
    for (size_t t4__Vidx = 0; t4__Vidx < 1; ++t4__Vidx) t4__Vcvt = t4;
    long long t5__Vcvt;
    for (size_t t5__Vidx = 0; t5__Vidx < 1; ++t5__Vidx) t5__Vcvt = t5;
    long long t6__Vcvt;
    for (size_t t6__Vidx = 0; t6__Vidx < 1; ++t6__Vidx) t6__Vcvt = t6;
    difftest_dut_regs(Z0__Vcvt, ra__Vcvt, sp__Vcvt, gp__Vcvt, tp__Vcvt, t0__Vcvt, t1__Vcvt, t2__Vcvt, fp__Vcvt, s1__Vcvt, a0__Vcvt, a1__Vcvt, a2__Vcvt, a3__Vcvt, a4__Vcvt, a5__Vcvt, a6__Vcvt, a7__Vcvt, s2__Vcvt, s3__Vcvt, s4__Vcvt, s5__Vcvt, s6__Vcvt, s7__Vcvt, s8__Vcvt, s9__Vcvt, s10__Vcvt, a11__Vcvt, t3__Vcvt, t4__Vcvt, t5__Vcvt, t6__Vcvt);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__94__PROF__ls_wb_reg__l44(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__94__PROF__ls_wb_reg__l44\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena 
        = vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__97__PROF__id_ex_reg__l58(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__97__PROF__id_ex_reg__l58\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena 
        = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__98__PROF__id_ex_reg__l61(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__98__PROF__id_ex_reg__l61\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl 
        = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__99__PROF__id_ex_reg__l62(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__99__PROF__id_ex_reg__l62\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_wbctl 
        = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__100__PROF__if_id_reg__l30(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__100__PROF__if_id_reg__l30\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_jump 
        = vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__103__PROF__ex_ls_reg__l46(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__103__PROF__ex_ls_reg__l46\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__105__PROF__ls_wb_reg__l45(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__105__PROF__ls_wb_reg__l45\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr 
        = vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__108__PROF__cache_tag_ram__l18(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__108__PROF__cache_tag_ram__l18\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__109__PROF__cache_tag_ram__l18(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__109__PROF__cache_tag_ram__l18\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__111__PROF__if_id_reg__l29(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__111__PROF__if_id_reg__l29\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc 
        = vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__121__PROF__lsu__l53(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__121__PROF__lsu__l53\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok 
        = vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__122__PROF__regfile__l108(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__122__PROF__regfile__l108\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__123__PROF__regfile__l113(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__123__PROF__regfile__l113\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__126__PROF__csr__l62(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__126__PROF__csr__l62\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__127__PROF__ifu__l47(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__127__PROF__ifu__l47\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__ifid_if_pc 
        = vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__131__PROF__cache_data_ram__l25(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__131__PROF__cache_data_ram__l25\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__133__PROF__divide__l76(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__133__PROF__divide__l76\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__134__PROF__divide__l75(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__134__PROF__divide__l75\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U];
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U];
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U];
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U];
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__135__PROF__divide__l77(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__135__PROF__divide__l77\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__136__PROF__cache_tag_ram__l18(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__136__PROF__cache_tag_ram__l18\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__137__PROF__cache_tag_ram__l18(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__137__PROF__cache_tag_ram__l18\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__142__PROF__cache_data_ram__l25(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__142__PROF__cache_data_ram__l25\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__146__PROF__d_cache__l544(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__146__PROF__d_cache__l544\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__147__PROF__d_cache__l548(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__147__PROF__d_cache__l548\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__148__PROF__d_cache__l545(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__148__PROF__d_cache__l545\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__149__PROF__d_cache__l549(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__149__PROF__d_cache__l549\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__150__PROF__d_cache__l560(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__150__PROF__d_cache__l560\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__151__PROF__d_cache__l563(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__151__PROF__d_cache__l563\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__153__PROF__i_cache__l264(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__153__PROF__i_cache__l264\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__154__PROF__i_cache__l268(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__154__PROF__i_cache__l268\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__155__PROF__i_cache__l263(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__155__PROF__i_cache__l263\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__156__PROF__i_cache__l267(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__156__PROF__i_cache__l267\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__157__PROF__d_cache__l567(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__157__PROF__d_cache__l567\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__158__PROF__d_cache__l570(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__158__PROF__d_cache__l570\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1 = 0U;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__164__PROF__multiply__l56(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__164__PROF__multiply__l56\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__173__PROF__wbu__l66(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__173__PROF__wbu__l66\n"); );
    // Body
    if (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_inst_end_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc, vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst);
    }
    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__ebreak_TOP(
                                                                                (0x100073U 
                                                                                == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__174__PROF__regfile__l105(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__174__PROF__regfile__l105\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i = 0x20U;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__175__PROF__regfile__l66(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__175__PROF__regfile__l66\n"); );
    // Body
    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__reg9__DOT__difftest_dut_regs_TOP(
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [1U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [2U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [3U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [4U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [5U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [6U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [7U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [8U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [9U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                                                [0x1fU]);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__176__PROF__axi_slave__l144(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__176__PROF__axi_slave__l144\n"); );
    // Variables
    QData/*63:0*/ __Vtask_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_read__0__rdata;
    // Body
    if (vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_read_TOP(
                                                                                ((3U 
                                                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                                                                 ? 
                                                                                (((8U 
                                                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                                                                & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))
                                                                                 ? 
                                                                                (0xfffffffffffffff8ULL 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc)
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc
                                                                                 : 0ULL)), __Vtask_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_read__0__rdata, 8U);
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data 
            = __Vtask_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_read__0__rdata;
    }
    if ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_write_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc, 
                                                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
                                                                                 : 
                                                                                ((0x10U 
                                                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data
                                                                                 : 
                                                                                ((0x21U 
                                                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data
                                                                                 : 0ULL))), 
                                                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                                                 ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                                                 ? 0U
                                                                                 : 0xffU)));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__177__PROF__ls_wb_reg__l37(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__177__PROF__ls_wb_reg__l37\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena)
                                        : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__178__PROF__ls_wb_reg__l37(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__178__PROF__ls_wb_reg__l37\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc = 
        ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__179__PROF__ls_wb_reg__l37(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__179__PROF__ls_wb_reg__l37\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__180__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__180__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena)
                                        : ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__181__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__181__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl 
        = ((IData)(vlSelf->rst) ? 0U : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl)
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                                             ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__182__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__182__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_wbctl 
        = ((IData)(vlSelf->rst) ? 0U : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl)
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                                             ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__183__PROF__if_id_reg__l26(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__183__PROF__if_id_reg__l26\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_jump 
        = ((~ (IData)(vlSelf->rst)) & ((1U & (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena)))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                        : ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel))) 
                                           & ((~ (IData)(vlSelf->rst)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                    >> 0xbU))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__184__PROF__i_cache__l97(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__184__PROF__i_cache__l97\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_update 
        = ((~ (IData)(vlSelf->rst)) & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__185__PROF__ex_ls_reg__l39(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__185__PROF__ex_ls_reg__l39\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena)
                                        : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__186__PROF__ex_ls_reg__l39(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__186__PROF__ex_ls_reg__l39\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl 
        = ((IData)(vlSelf->rst) ? 0U : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl)
                                         : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__187__PROF__ex_ls_reg__l39(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__187__PROF__ex_ls_reg__l39\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst 
        = ((IData)(vlSelf->rst) ? 0U : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__188__PROF__ls_wb_reg__l37(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__188__PROF__ls_wb_reg__l37\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr)
                                         : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__189__PROF__d_cache__l367(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__189__PROF__d_cache__l367\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update 
        = ((~ (IData)(vlSelf->rst)) & ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__190__PROF__d_cache__l119(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__190__PROF__d_cache__l119\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update 
        = ((~ (IData)(vlSelf->rst)) & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__191__PROF__cache_tag_ram__l16(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__191__PROF__cache_tag_ram__l16\n"); );
    // Body
    if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
         & (0U == (((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
                     | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]) 
                    | (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U])) 
                   | (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]))))) {
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 
            = (0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                    >> 9U)));
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 = 0U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
        vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1 = 0x17U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__192__PROF__cache_tag_ram__l16(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__192__PROF__cache_tag_ram__l16\n"); );
    // Body
    if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
         & (0U == ((((~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]) 
                     | (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U])) 
                    | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]) 
                   | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U])))) {
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 
            = (0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                    >> 9U)));
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 = 0U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
        vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1 = 0x17U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__193__PROF__ex_ls_reg__l39(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__193__PROF__ex_ls_reg__l39\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc = 
        ((IData)(vlSelf->rst) ? 0ULL : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__194__PROF__if_id_reg__l26(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__194__PROF__if_id_reg__l26\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc 
        = ((IData)(vlSelf->rst) ? 0ULL : ((1U & (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena)))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc
                                           : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel))
                                               ? 0ULL
                                               : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__195__PROF__ex_ls_reg__l39(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__195__PROF__ex_ls_reg__l39\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr 
        = ((IData)(vlSelf->rst) ? 0U : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr)
                                         : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__196__PROF__ls_wb_reg__l37(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__196__PROF__ls_wb_reg__l37\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl)
                                         : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__197__PROF__d_cache__l525(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__197__PROF__d_cache__l525\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw 
        = ((~ (IData)(vlSelf->rst)) & ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__198__PROF__d_cache__l271(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__198__PROF__d_cache__l271\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr 
        = ((~ (IData)(vlSelf->rst)) & ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__199__PROF__multiply__l94(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__199__PROF__multiply__l94\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_sign 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                        ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__op1_sign) 
                                           ^ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__op2_sign))
                                        : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_sign)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__200__PROF__csr__l61(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__200__PROF__csr__l61\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp 
                = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mpp_set;
        }
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__201__PROF__csr__l61(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__201__PROF__csr__l61\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie 
                = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mpie_set;
        }
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__202__PROF__csr__l61(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__202__PROF__csr__l61\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie 
                = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mie_set;
        }
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__203__PROF__exu__l371(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__203__PROF__exu__l371\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall 
        = ((~ (IData)(vlSelf->rst)) & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid))) 
                                       & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1))) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__204__PROF__lsu__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__204__PROF__lsu__l51\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__205__PROF__regfile__l105(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__205__PROF__regfile__l105\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v0 = 1U;
    } else if (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena) 
                & (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr)))) {
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 
            = vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data;
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 
            = vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__206__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__206__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc = 
        ((IData)(vlSelf->rst) ? 0ULL : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                                             ? 0ULL
                                             : ((IData)(vlSelf->rst)
                                                 ? 0ULL
                                                 : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__207__PROF__multiply__l77(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__207__PROF__multiply__l77\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp13;
    VlWide<4>/*127:0*/ __Vtemp15;
    // Body
    VL_ADD_W(4, __Vtemp15, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand);
    if (vlSelf->rst) {
        __Vtemp13[1U] = 0U;
        __Vtemp13[2U] = 0U;
        __Vtemp13[3U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[0U] = 0U;
    } else {
        __Vtemp13[1U] = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing) 
                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier))
                          ? __Vtemp15[1U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                              ? 0U : 
                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[1U]));
        __Vtemp13[2U] = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing) 
                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier))
                          ? __Vtemp15[2U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                              ? 0U : 
                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[2U]));
        __Vtemp13[3U] = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing) 
                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier))
                          ? __Vtemp15[3U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                              ? 0U : 
                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[3U]));
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[0U] 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier))
                ? __Vtemp15[0U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                    ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[0U]));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[1U] 
        = __Vtemp13[1U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[2U] 
        = __Vtemp13[2U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[3U] 
        = __Vtemp13[3U];
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__208__PROF__csr__l61(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__208__PROF__csr__l61\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena)))) {
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__209__PROF__ifu__l45(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__209__PROF__ifu__l45\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__ifid_if_pc 
        = ((IData)(vlSelf->rst) ? 0x80000000ULL : (
                                                   (1U 
                                                    & (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena)))
                                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel)
                                                     ? 
                                                    ((IData)(vlSelf->rst)
                                                      ? 0ULL
                                                      : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data)
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                                      ? 
                                                     ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                                       ? 
                                                      ((0x42U 
                                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                                        ? 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)
                                                        : 
                                                       ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                                         ? 
                                                        (4ULL 
                                                         + vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)
                                                         : 
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc 
                                                         + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)))
                                                       : 0ULL)
                                                      : 
                                                     ((IData)(vlSelf->rst)
                                                       ? 0ULL
                                                       : vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__pr_pc)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__210__PROF__exu__l388(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__210__PROF__exu__l388\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall 
        = ((~ (IData)(vlSelf->rst)) & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid))) 
                                       & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2))) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__211__PROF__exu__l232(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__211__PROF__exu__l232\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp 
        = ((IData)(vlSelf->rst) ? 0ULL : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready))
                                           ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                                   ? 
                                                  ((0x58U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo
                                                    : 
                                                   ((((0xb0U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                                      | (0x26U 
                                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                                     | (0x13U 
                                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                                     ? 
                                                    ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[2U])))
                                                      : 0ULL)
                                                     : 
                                                    ((0x4cU 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo)))
                                                      : 0ULL)))
                                                   : 0ULL)
                                               : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp)
                                           : 0ULL));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__212__PROF__exu__l350(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__212__PROF__exu__l350\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp 
        = ((IData)(vlSelf->rst) ? 0ULL : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready))
                                           ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                                   ? 
                                                  (((((0x98U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                                      | (0x23U 
                                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                                     | (0x8cU 
                                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                                    | (0x46U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo
                                                     : 0ULL)
                                                    : 
                                                   (((((0x43U 
                                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                                       | (0x86U 
                                                          == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                                      | (0x15U 
                                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                                     | (0x83U 
                                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                                     ? 
                                                    ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem
                                                      : 0ULL)
                                                     : 0ULL))
                                                   : 0ULL)
                                               : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp)
                                           : 0ULL));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__213__PROF__cache_data_ram__l23(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__213__PROF__cache_data_ram__l23\n"); );
    // Body
    if (((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
             & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))) 
         & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)) 
            & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)) 
               | ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)) 
                  | (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                     [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                        >> 3U)))] | 
                     vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use
                     [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                        >> 3U)))])))))) {
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[0U] 
            = (((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))
                  ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_inst)
                           : 0U)) & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                     >> 3U)))][0U] 
                  & (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U])));
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[1U] 
            = (((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))
                  ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                           ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_inst 
                                      >> 0x20U)) : 0U)) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                     >> 3U)))][1U] 
                  & (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U])));
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[2U] 
            = (((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))
                  ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_inst)
                           : 0U)) & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                     >> 3U)))][2U] 
                  & (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U])));
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[3U] 
            = (((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))
                  ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                           ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_inst 
                                      >> 0x20U)) : 0U)) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                     >> 3U)))][3U] 
                  & (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U])));
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
    }
    if (((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
             & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))) 
         & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)) 
            & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)) 
               | ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)) 
                  | (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                     [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                        >> 3U)))] | 
                     vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use
                     [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                        >> 3U)))])))))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[0U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                               >> 3U)))][0U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[1U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                               >> 3U)))][1U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[2U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                               >> 3U)))][2U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[3U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                               >> 3U)))][3U];
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__214__PROF__divide__l73(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__214__PROF__divide__l73\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp45;
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] = 0U;
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] = 0U;
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] = 0U;
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] = 0U;
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q = 0ULL;
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt = 0U;
    } else if (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing) 
                & (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt)))) {
        if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign) {
            vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
                = (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
                   << 1U);
            vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
                = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
                    >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
                                 << 1U));
            vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
                    >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                                 << 1U));
            vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                    >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                                 << 1U));
        } else {
            vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
                = (IData)(((0xfffffffffffffffeULL & 
                            (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                              << 0x21U) | ((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U])) 
                                           << 1U))) 
                           | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign))));
            vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
                = (IData)((((0xfffffffffffffffeULL 
                             & (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                 << 0x21U) | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U])) 
                                              << 1U))) 
                            | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign))) 
                           >> 0x20U));
            vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_dividend);
            vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_dividend 
                           >> 0x20U));
        }
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q 
            = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q 
                << 1U) | (QData)((IData)((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign))))));
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt 
            = (0x7fU & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt) 
                        - (IData)(1U)));
    } else if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid) {
        VL_EXTEND_WQ(128,64, __Vtemp45, ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)
                                          ? (1ULL + 
                                             (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp))
                                          : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp));
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
            = __Vtemp45[0U];
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
            = __Vtemp45[1U];
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
            = __Vtemp45[2U];
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
            = __Vtemp45[3U];
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q = 0ULL;
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt = 0x40U;
    } else {
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U];
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U];
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U];
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U];
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q;
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__215__PROF__cache_tag_ram__l16(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__215__PROF__cache_tag_ram__l16\n"); );
    // Body
    if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
          ? ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
             & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                & ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                       | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                       [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                          >> 3U)))])) 
                   & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                      | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                      [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                         >> 3U)))]))))
          : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
             & ((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                & (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild) 
                      & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                         | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                         [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                            >> 3U)))]))))))) {
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 
            = (0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                    >> 9U)));
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 = 0U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
        vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1 = 0x17U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__216__PROF__cache_tag_ram__l16(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__216__PROF__cache_tag_ram__l16\n"); );
    // Body
    if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
          ? ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
             & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                   [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                      >> 3U)))]))) : 
         ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
          & ((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
             & (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                   | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild) 
                      & ((~ vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                          [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                             >> 3U)))]) 
                         & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                         [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                            >> 3U)))])))))))) {
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 
            = (0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                    >> 9U)));
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 = 0U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
        vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1 = 0x17U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__217__PROF__csr__l90(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__217__PROF__csr__l90\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc 
        = ((IData)(vlSelf->rst) ? 0ULL : ((1U & (((0x341U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                     >> 3U)) 
                                                 | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                    >> 1U)))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data
                                           : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__218__PROF__csr__l75(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__218__PROF__csr__l75\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
        = ((IData)(vlSelf->rst) ? 0ULL : (0x3fffffffffffffffULL 
                                          & (((0x305U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                 >> 3U))
                                              ? (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                 >> 2U)
                                              : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__219__PROF__csr__l101(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__219__PROF__csr__l101\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause 
        = ((IData)(vlSelf->rst) ? 0ULL : (((0x342U 
                                            == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                              >> 3U))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data
                                           : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                               ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value
                                               : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__220__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__220__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm = 
        ((IData)(vlSelf->rst) ? 0ULL : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__221__PROF__cache_data_ram__l23(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__221__PROF__cache_data_ram__l23\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp97;
    VlWide<4>/*127:0*/ __Vtemp136;
    // Body
    if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
          : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
              ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
              : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))) {
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp97[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                              ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                       ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                 | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                           ? 0xffffffffU
                                           : 0U) : 0U));
            __Vtemp97[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                              ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                       ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                 | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                           ? 0xffffffffU
                                           : 0U) : 0U));
            __Vtemp97[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                              ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                       ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                 | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                       | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                       [
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                   >> 3U)))]))
                                                    ? 0xffffffffU
                                                    : 0U))
                                       : 0U));
            __Vtemp97[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                              ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                       ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                 | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                           ? 0U : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                       | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                       [
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                   >> 3U)))]))
                                                    ? 0xffffffffU
                                                    : 0U))
                                       : 0U));
            __Vtemp136[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0xffffffffU
                                            : 0U) : 0U));
            __Vtemp136[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0xffffffffU
                                            : 0U) : 0U));
            __Vtemp136[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                             ? 0xffffffffU
                                             : 0U))
                                        : 0U));
            __Vtemp136[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                             ? 0xffffffffU
                                             : 0U))
                                        : 0U));
        } else {
            __Vtemp97[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                  ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                           ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                   ? 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0U
                                                    : 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0xffffffffU
                                                     : 0U))
                                                   : 0U)
                                               : 0xffffffffU)
                                           : 0U)) : 
                             ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U]
                               : 0U));
            __Vtemp97[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                  ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                           ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                   ? 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0U
                                                    : 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0xffffffffU
                                                     : 0U))
                                                   : 0U)
                                               : 0xffffffffU)
                                           : 0U)) : 
                             ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U]
                               : 0U));
            __Vtemp97[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                  ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                           ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                   ? 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U)
                                                   : 0xffffffffU)
                                               : 0U)
                                           : 0U)) : 
                             ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U]
                               : 0U));
            __Vtemp97[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                  ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                           ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                   ? 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U)
                                                   : 0xffffffffU)
                                               : 0U)
                                           : 0U)) : 
                             ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U]
                               : 0U));
            __Vtemp136[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]
                                                      ? 0xffffffffU
                                                      : 0U))
                                                    : 0U)
                                                : 0xffffffffU)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U]
                                : 0U));
            __Vtemp136[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]
                                                      ? 0xffffffffU
                                                      : 0U))
                                                    : 0U)
                                                : 0xffffffffU)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U]
                                : 0U));
            __Vtemp136[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0xffffffffU
                                                     : 0U)
                                                    : 0xffffffffU)
                                                : 0U)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U]
                                : 0U));
            __Vtemp136[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0xffffffffU
                                                     : 0U)
                                                    : 0xffffffffU)
                                                : 0U)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U]
                                : 0U));
        }
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[0U] 
            = ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U]
                  : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[0U]
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                          ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                              : 0U) : 0U))) & __Vtemp97[0U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][0U] 
                  & (~ __Vtemp136[0U])));
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[1U] 
            = ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U]
                  : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[1U]
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                         >> 0x20U))
                              : 0U) : 0U))) & __Vtemp97[1U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][1U] 
                  & (~ __Vtemp136[1U])));
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[2U] 
            = ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U]
                  : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U]
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                          ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                              : 0U) : 0U))) & __Vtemp97[2U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][2U] 
                  & (~ __Vtemp136[2U])));
        vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[3U] 
            = ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U]
                  : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[3U]
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                         >> 0x20U))
                              : 0U) : 0U))) & __Vtemp97[3U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][3U] 
                  & (~ __Vtemp136[3U])));
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
    if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
          : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
              ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
              : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))][0U];
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))][1U];
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))][2U];
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))][3U];
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__222__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__222__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl 
        = ((IData)(vlSelf->rst) ? 0U : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl)
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                                             ? 0U : 
                                            (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena) 
                                              << 3U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena)))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__223__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__223__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel 
        = ((IData)(vlSelf->rst) ? 0U : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                                             ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__224__PROF__d_cache__l542(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__224__PROF__d_cache__l542\n"); );
    // Body
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
         | ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
         | ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__225__PROF__d_cache__l542(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__225__PROF__d_cache__l542\n"); );
    // Body
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
         | ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
         | ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__226__PROF__d_cache__l558(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__226__PROF__d_cache__l558\n"); );
    // Body
    if (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
         & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    } else if (((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                   & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                      | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                      [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                         >> 3U)))])))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__227__PROF__ls_wb_reg__l37(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__227__PROF__ls_wb_reg__l37\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata
                                           : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__228__PROF__i_cache__l261(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__228__PROF__i_cache__l261\n"); );
    // Body
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
    }
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__229__PROF__i_cache__l261(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__229__PROF__i_cache__l261\n"); );
    // Body
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
    }
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__230__PROF__d_cache__l558(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__230__PROF__d_cache__l558\n"); );
    // Body
    if (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
         & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    } else if (((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                   & ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                          | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                          [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                             >> 3U)))])) 
                      & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                         | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                         [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                            >> 3U)))]))))) {
        vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__231__PROF__axi_slave__l99(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__231__PROF__axi_slave__l99\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state_next));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__232__PROF__ls_wb_reg__l37(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__232__PROF__ls_wb_reg__l37\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata
                                           : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re) 
                                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))
                                               ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                               : 0ULL)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__233__PROF__ex_ls_reg__l39(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__233__PROF__ex_ls_reg__l39\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data 
        = ((IData)(vlSelf->rst) ? 0ULL : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
                                           : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__234__PROF__lsu__l68(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__234__PROF__lsu__l68\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
        = ((IData)(vlSelf->rst) ? 0ULL : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                           ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid)
                                               ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i
                                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data))
                                           : 0ULL));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__235__PROF__multiply__l53(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__235__PROF__multiply__l53\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp150;
    VlWide<4>/*127:0*/ __Vtemp156;
    // Body
    VL_EXTEND_WQ(128,64, __Vtemp156, ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__op1_sign)
                                       ? (1ULL + (~ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1))
                                       : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1));
    if (vlSelf->rst) {
        __Vtemp150[1U] = 0U;
        __Vtemp150[2U] = 0U;
        __Vtemp150[3U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[0U] = 0U;
    } else {
        __Vtemp150[1U] = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing)
                           ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[0U] 
                               >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[1U] 
                                            << 1U))
                           : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                               ? __Vtemp156[1U] : 0U));
        __Vtemp150[2U] = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing)
                           ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[1U] 
                               >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[2U] 
                                            << 1U))
                           : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                               ? __Vtemp156[2U] : 0U));
        __Vtemp150[3U] = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing)
                           ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[2U] 
                               >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[3U] 
                                            << 1U))
                           : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                               ? __Vtemp156[3U] : 0U));
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[0U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing)
                ? (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[0U] 
                   << 1U) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                              ? __Vtemp156[0U] : 0U));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[1U] 
        = __Vtemp150[1U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[2U] 
        = __Vtemp150[2U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand[3U] 
        = __Vtemp150[3U];
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__236__PROF__multiply__l53(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__236__PROF__multiply__l53\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing)
                                           ? (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier 
                                              >> 1U)
                                           : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__op2_sign)
                                                   ? 
                                                  (1ULL 
                                                   + 
                                                   (~ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)
                                               : 0ULL)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__237__PROF__ex_ls_reg__l39(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__237__PROF__ex_ls_reg__l39\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
        = ((IData)(vlSelf->rst) ? 0ULL : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata
                                           : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__238__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__238__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena = 
        (1U & ((~ (IData)(vlSelf->rst)) & ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)
                                            : ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                                  >> 1U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__239__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__239__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 = 
        ((IData)(vlSelf->rst) ? 0ULL : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__240__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__240__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2 = 
        ((IData)(vlSelf->rst) ? 0ULL : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__241__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__241__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst 
        = ((IData)(vlSelf->rst) ? 0U : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                                             ? 0U : 
                                            ((IData)(vlSelf->rst)
                                              ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__242__PROF__id_ex_reg__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__242__PROF__id_ex_reg__l51\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr 
        = ((IData)(vlSelf->rst) ? 0U : (0x1fU & ((1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                                  ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                    >> 7U)
                                                    : 0U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__243__PROF__ex_ls_reg__l39(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__243__PROF__ex_ls_reg__l39\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl 
        = ((IData)(vlSelf->rst) ? 0U : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)
                                         : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__244__PROF__if_id_reg__l26(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__244__PROF__if_id_reg__l26\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
        = ((IData)(vlSelf->rst) ? 0U : ((1U & (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena)))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel))
                                             ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__251__PROF__id_ex_reg__l58(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__251__PROF__id_ex_reg__l58\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__253__PROF__id_ex_reg__l62(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__253__PROF__id_ex_reg__l62\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_wbctl;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__259__PROF__ex_ls_reg__l46(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__259__PROF__ex_ls_reg__l46\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__268__PROF__ls_wb_reg__l44(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__268__PROF__ls_wb_reg__l44\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__269__PROF__ls_wb_reg__l45(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__269__PROF__ls_wb_reg__l45\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__270__PROF__regfile__l108(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__270__PROF__regfile__l108\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0xaU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0xbU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0xcU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0xdU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0xeU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0xfU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x10U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x11U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x12U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x13U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x14U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x15U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x16U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x17U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x18U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x19U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x1aU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x1bU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x1cU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x1dU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x1eU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0x1fU] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32] 
            = vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__273__PROF__csr__l62(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__273__PROF__csr__l62\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__274__PROF__if_id_reg__l30(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__274__PROF__if_id_reg__l30\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_jump;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__275__PROF__if_id_reg__l29(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__275__PROF__if_id_reg__l29\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__279__PROF__cache_data_ram__l25(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__279__PROF__cache_data_ram__l25\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[0U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[1U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[2U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__281__PROF__divide__l76(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__281__PROF__divide__l76\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__282__PROF__divide__l75(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__282__PROF__divide__l75\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U];
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__288__PROF__cache_data_ram__l25(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__288__PROF__cache_data_ram__l25\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[0U];
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[1U];
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[2U];
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__292__PROF__d_cache__l560(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__292__PROF__d_cache__l560\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1] = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__295__PROF__i_cache__l264(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__295__PROF__i_cache__l264\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1] = 1U;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__296__PROF__i_cache__l263(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__296__PROF__i_cache__l263\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1] = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__302__PROF__d_cache__l567(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__302__PROF__d_cache__l567\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1] = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__303__PROF__d_cache__l544(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__303__PROF__d_cache__l544\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1] = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__304__PROF__d_cache__l545(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__304__PROF__d_cache__l545\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1] = 1U;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__312__PROF__lsu__l53(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__312__PROF__lsu__l53\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__323__PROF__id_ex_reg__l61(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__323__PROF__id_ex_reg__l61\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__326__PROF__wbu__l66(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__326__PROF__wbu__l66\n"); );
    // Body
    if (vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid) {
        if (vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid) {
            vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag = 0U;
        }
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag = 1U;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__327__PROF__axi_slave__l52(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__327__PROF__axi_slave__l52\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state_next));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__328__PROF__axi_master_arbitrator__l74(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__328__PROF__axi_master_arbitrator__l74\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state_next));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__329__PROF__multiply__l106(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__329__PROF__multiply__l106\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp168;
    VlWide<4>/*127:0*/ __Vtemp169;
    VlWide<4>/*127:0*/ __Vtemp170;
    // Body
    __Vtemp168[0U] = 1U;
    __Vtemp168[1U] = 0U;
    __Vtemp168[2U] = 0U;
    __Vtemp168[3U] = 0U;
    __Vtemp169[0U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[0U]);
    __Vtemp169[1U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[1U]);
    __Vtemp169[2U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[2U]);
    __Vtemp169[3U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[3U]);
    VL_ADD_W(4, __Vtemp170, __Vtemp168, __Vtemp169);
    if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_sign) {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[0U] 
            = __Vtemp170[0U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[1U] 
            = __Vtemp170[1U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[2U] 
            = __Vtemp170[2U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[3U] 
            = __Vtemp170[3U];
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[0U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[0U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[1U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[1U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[2U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[2U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[3U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp[3U];
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__330__PROF__divide__l26(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__330__PROF__divide__l26\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid) 
                                       | (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__331__PROF__exu__l408(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__331__PROF__exu__l408\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr 
        = ((0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
            ? (0xfffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
            : 0U);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__332__PROF__csr__l25(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__332__PROF__csr__l25\n"); );
    // Body
    if ((0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__difftest_dut_csr_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus, 
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
                                                                                << 2U), vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause);
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__333__PROF__exu__l416(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__333__PROF__exu__l416\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value = 0ULL;
    if ((0x2aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value = 0xbULL;
    } else if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                         | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
        if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                      | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
            if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                          | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value = 0ULL;
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__334__PROF__i_cache__l37(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__334__PROF__i_cache__l37\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__335__PROF__cache_tag_ram__l16(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__335__PROF__cache_tag_ram__l16\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data 
        = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram
           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                              >> 3U)))]);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild 
        = (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram
                 [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                    >> 3U)))] >> 0x17U));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__336__PROF__cache_tag_ram__l16(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__336__PROF__cache_tag_ram__l16\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data 
        = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram
           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                              >> 3U)))]);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild 
        = (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram
                 [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                    >> 3U)))] >> 0x17U));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__337__PROF__d_cache__l295(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__337__PROF__d_cache__l295\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__338__PROF__d_cache__l47(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__338__PROF__d_cache__l47\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__339__PROF__cache_tag_ram__l16(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__339__PROF__cache_tag_ram__l16\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data 
        = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram
           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                              >> 3U)))]);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild 
        = (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram
                 [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                    >> 3U)))] >> 0x17U));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__340__PROF__cache_tag_ram__l16(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__340__PROF__cache_tag_ram__l16\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data 
        = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram
           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                              >> 3U)))]);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild 
        = (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram
                 [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                    >> 3U)))] >> 0x17U));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__341__PROF__axi_slave__l134(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__341__PROF__axi_slave__l134\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data = 
        ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
          ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data
          : 0ULL);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__342__PROF__multiply__l25(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__342__PROF__multiply__l25\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid) 
                                       | (0U != vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__343__PROF__lsu__l133(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__343__PROF__lsu__l133\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word 
        = ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                          >> 2U))) ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                              >> 0x20U))
            : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__344__PROF__exu__l50(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__344__PROF__exu__l50\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1, 
                         (0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__345__PROF__exu__l53(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__345__PROF__exu__l53\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1) 
           << (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__346__PROF__exu__l57(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__346__PROF__exu__l57\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1) 
           >> (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__347__PROF__exu__l61(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__347__PROF__exu__l61\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1), 
                         (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__348__PROF__exu__l39(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__348__PROF__exu__l39\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
           + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__349__PROF__exu__l43(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__349__PROF__exu__l43\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
           - vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__350__PROF__idu_decode__l40(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__350__PROF__idu_decode__l40\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm 
        = ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                            >> 0x15U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__351__PROF__idu_decode__l42(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__351__PROF__idu_decode__l42\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm 
        = ((0xfe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 7U)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__352__PROF__idu_decode__l43(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__352__PROF__idu_decode__l43\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm 
        = ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 8U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__356__PROF__divide__l77(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__356__PROF__divide__l77\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__359__PROF__csr__l38(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__359__PROF__csr__l38\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr 
        = ((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
              >> 3U));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__360__PROF__csr__l109(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__360__PROF__csr__l109\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
        = (((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
               >> 2U)) ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus
            : ((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                          >> 2U)) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc
                : ((1U & (((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                              >> 2U)) | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 1U))) ? 
                   (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
                    << 2U) : (((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                  >> 2U)) ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause
                               : 0ULL))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__362__PROF__cache_tag_ram__l18(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__362__PROF__cache_tag_ram__l18\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0] 
            = (((~ ((IData)(0x7fffffU) << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0))) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0]) 
               | (0xffffffU & (vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 
                               << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0))));
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1] 
            = (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram
               [vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1] 
               | (0xffffffU & ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1))));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__365__PROF__cache_tag_ram__l18(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__365__PROF__cache_tag_ram__l18\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0] 
            = (((~ ((IData)(0x7fffffU) << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0))) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0]) 
               | (0xffffffU & (vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 
                               << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0))));
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1] 
            = (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram
               [vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1] 
               | (0xffffffU & ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1))));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__368__PROF__ifu__l47(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__368__PROF__ifu__l47\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__ifid_if_pc;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__371__PROF__cache_tag_ram__l18(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__371__PROF__cache_tag_ram__l18\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0] 
            = (((~ ((IData)(0x7fffffU) << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0))) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0]) 
               | (0xffffffU & (vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 
                               << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0))));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1] 
            = (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram
               [vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1] 
               | (0xffffffU & ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1))));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__374__PROF__cache_tag_ram__l18(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__374__PROF__cache_tag_ram__l18\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0] 
            = (((~ ((IData)(0x7fffffU) << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0))) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0]) 
               | (0xffffffU & (vlSelf->__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 
                               << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0))));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1] 
            = (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram
               [vlSelf->__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1] 
               | (0xffffffU & ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1))));
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__378__PROF__multiply__l56(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__378__PROF__multiply__l56\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier 
        = vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier;
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__380__PROF__exu__l54(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__380__PROF__exu__l54\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__381__PROF__exu__l58(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__381__PROF__exu__l58\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__382__PROF__exu__l62(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__382__PROF__exu__l62\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__383__PROF__exu__l40(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__383__PROF__exu__l40\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__384__PROF__exu__l47(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__384__PROF__exu__l47\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__385__PROF__axi_slave__l62(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__385__PROF__axi_slave__l62\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state_next 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
            ? ((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                 & ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                    & (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)))) 
                & ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                   & ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                      & (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)))))
                ? 3U : 1U) : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                               ? ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                   ? 1U : 3U) : 1U));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__386__PROF__axi_slave__l132(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__386__PROF__axi_slave__l132\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_id = ((2U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                                   ? 
                                                  ((3U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                                     ? 2U
                                                     : 0U))
                                                   : 0U);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__387__PROF__divide__l22(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__387__PROF__divide__l22\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing) 
           & (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__388__PROF__exu__l292(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__388__PROF__exu__l292\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__389__PROF__csr__l44(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__389__PROF__csr__l44\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena 
        = (1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr) 
                  | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                     >> 1U)) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__390__PROF__exu__l416(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__390__PROF__exu__l416\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
        = ((0x2aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
            ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc
            : (((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1
                : (((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                    | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                    ? (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                       | vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1)
                    : (((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                        | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                        ? (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                           & (~ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1))
                        : 0ULL))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__391__PROF__i_cache__l34(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__391__PROF__i_cache__l34\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__392__PROF__i_cache__l35(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__392__PROF__i_cache__l35\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__393__PROF__d_cache__l496(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__393__PROF__d_cache__l496\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid 
        = ((~ ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))) 
           & ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__394__PROF__d_cache__l496(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__394__PROF__d_cache__l496\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena 
        = ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__395__PROF__d_cache__l241(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__395__PROF__d_cache__l241\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid 
        = ((~ ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))) 
           & ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__396__PROF__d_cache__l241(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__396__PROF__d_cache__l241\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena 
        = ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__397__PROF__multiply__l21(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__397__PROF__multiply__l21\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing) 
           & (~ (IData)((0U != vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__398__PROF__exu__l172(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__398__PROF__exu__l172\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__399__PROF__axi_master_arbitrator__l148(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__399__PROF__axi_master_arbitrator__l148\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand 
        = ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)) 
           & (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_id)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__400__PROF__axi_master_arbitrator__l147(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__400__PROF__axi_master_arbitrator__l147\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__dread_shakehand 
        = ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)) 
           & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_id)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__403__PROF__csr__l56(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__403__PROF__csr__l56\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mpp_set 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
            ? 3U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                     ? 0U : (3U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                    ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                               >> 0xdU))
                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__404__PROF__csr__l46(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__404__PROF__csr__l46\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mie_set 
        = (1U & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                     >> 1U)) & ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                 ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)
                                 : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                     ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                >> 3U))
                                     : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__405__PROF__csr__l51(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__405__PROF__csr__l51\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mpie_set 
        = (1U & ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                  ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)
                  : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                     | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                         ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                    >> 7U)) : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__406__PROF__multiply__l108(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__406__PROF__multiply__l108\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
            ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result[0U])))
            : 0ULL);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__409__PROF__axi_master_arbitrator__l166(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__409__PROF__axi_master_arbitrator__l166\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_inst 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)
            ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
            : 0ULL);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__410__PROF__i_cache__l160(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__410__PROF__i_cache__l160\n"); );
    // Body
    if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U] = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                        ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                              >> 3U)))]
                            ? 0U : (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                       >> 3U)))]
                                     ? 0xffffffffU : 0U))
                        : 0U) : 0xffffffffU) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                        ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                              >> 3U)))]
                            ? 0U : (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                       >> 3U)))]
                                     ? 0xffffffffU : 0U))
                        : 0U) : 0xffffffffU) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                        ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                              >> 3U)))]
                            ? 0xffffffffU : 0U) : 0xffffffffU)
                    : 0U) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                        ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                              >> 3U)))]
                            ? 0xffffffffU : 0U) : 0xffffffffU)
                    : 0U) : 0U);
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__411__PROF__axi_master_arbitrator__l166(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__411__PROF__axi_master_arbitrator__l166\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)
            ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__dread_shakehand)
                       ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                       : 0ULL));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__412__PROF__axi_master_arbitrator__l198(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__412__PROF__axi_master_arbitrator__l198\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid 
        = ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__dread_shakehand)
            : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
               & (3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__413__PROF__exu__l276(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__413__PROF__exu__l276\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__414__PROF__exu__l156(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__414__PROF__exu__l156\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)));
}

extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_8c6fee76_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_f638cf1c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_8f16a4f5_0;

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__416__PROF__exu__l253(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__416__PROF__exu__l253\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx5;
    // Body
    __Vtableidx5 = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel;
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_8c6fee76_0
        [__Vtableidx5];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_f638cf1c_0
        [__Vtableidx5];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_8f16a4f5_0
        [__Vtableidx5];
}

extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_a4acb236_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_17e5fd70_0;

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__418__PROF__exu__l139(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__418__PROF__exu__l139\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx4;
    // Body
    __Vtableidx4 = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel;
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_a4acb236_0
        [__Vtableidx4];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_17e5fd70_0
        [__Vtableidx4];
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__419__PROF__divide__l41(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__419__PROF__divide__l41\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed)))
            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1))
            : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1)))
                : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__420__PROF__divide__l45(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__420__PROF__divide__l45\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed)))
            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))
            : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))
                : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__421__PROF__multiply__l42(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__421__PROF__multiply__l42\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__op1_sign 
        = (1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed) 
                 & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                            >> 0x3fU))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__422__PROF__multiply__l44(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__422__PROF__multiply__l44\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__op2_sign 
        = (1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed) 
                  >> 1U) & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2 
                                    >> 0x3fU))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__423__PROF__divide__l52(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__423__PROF__divide__l52\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed) 
           & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp 
                      >> 0x3fU)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__424__PROF__divide__l53(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__424__PROF__divide__l53\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed) 
           & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp 
                      >> 0x3fU)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__425__PROF__divide__l59(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__425__PROF__divide__l59\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign)
            ? (1ULL + (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp))
            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__426__PROF__divide__l71(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__426__PROF__divide__l71\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp190;
    VlWide<3>/*95:0*/ __Vtemp191;
    VlWide<3>/*95:0*/ __Vtemp192;
    // Body
    __Vtemp190[0U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                       << 1U) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
                                 >> 0x1fU));
    __Vtemp190[1U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                       << 1U) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                                 >> 0x1fU));
    __Vtemp190[2U] = (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                      >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp191, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
    VL_SUB_W(3, __Vtemp192, __Vtemp190, __Vtemp191);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign 
        = (1U & __Vtemp192[2U]);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__427__PROF__divide__l71(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__427__PROF__divide__l71\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_dividend 
        = ((((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
             << 0x21U) | (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])) 
                           << 1U) | ((QData)((IData)(
                                                     vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                     >> 0x1fU))) - vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__429__PROF__exu__l444(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__429__PROF__exu__l444\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel 
        = (1U & ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                              >> 1U) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__430__PROF__lsu__l253(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__430__PROF__lsu__l253\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data 
        = ((IData)(vlSelf->rst) ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                           ? 0ULL : 
                                          ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                            ? ((2U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                ? 0ULL
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
                                                    : 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                 >> 2U)))
                                                      ? 
                                                     ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)) 
                                                      << 0x20U)
                                                      : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))))
                                            : ((2U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                  >> 1U))))
                                                      ? (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                   >> 1U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                       << 0x10U)
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                    >> 1U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                        << 0x20U)
                                                        : 
                                                       ((QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                        << 0x30U))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                        << 0x38U)
                                                        : 
                                                       ((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                        << 0x30U))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                        << 0x28U)
                                                        : 
                                                       ((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                        << 0x20U)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                        << 0x18U)
                                                        : 
                                                       ((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                        << 0x10U))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                        << 8U)
                                                        : (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))))))
                                                    : 0ULL)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__432__PROF__lsu__l253(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__432__PROF__lsu__l253\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask 
        = ((IData)(vlSelf->rst) ? 0U : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? 0xffU
                                                    : 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                 >> 2U)))
                                                      ? 0xf0U
                                                      : 0xfU))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                  >> 1U))))
                                                      ? 3U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                   >> 1U))))
                                                       ? 0xcU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                    >> 1U))))
                                                        ? 0x30U
                                                        : 0xc0U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                        ? 0x80U
                                                        : 0x40U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                        ? 0x20U
                                                        : 0x10U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                        ? 8U
                                                        : 4U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                        ? 2U
                                                        : 1U))))
                                                    : 0U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__434__PROF__wbu__l33(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__434__PROF__wbu__l33\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data 
        = ((IData)(vlSelf->rst) ? 0ULL : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata
                                           : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl))
                                               ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata
                                               : 0ULL)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__438__PROF__idu_decode__l60(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__438__PROF__idu_decode__l60\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0x1bU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                    >> 2U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__439__PROF__idu_decode__l58(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__439__PROF__idu_decode__l58\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0xdU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                    >> 2U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__440__PROF__idu_decode__l59(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__440__PROF__idu_decode__l59\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((5U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                    >> 2U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__442__PROF__lsu__l101(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__442__PROF__lsu__l101\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte 
        = ((IData)(vlSelf->rst) ? 0U : (0xffU & ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                               >> 0x38U))
                                                    : (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                               >> 0x30U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                               >> 0x28U))
                                                    : (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                               >> 0x20U))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                               >> 0x10U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                               >> 8U))
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__443__PROF__lsu__l119(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__443__PROF__lsu__l119\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half 
        = ((IData)(vlSelf->rst) ? 0U : (0xffffU & (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                >> 1U))))
                                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                 >> 1U))))
                                                     ? (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                                >> 0x10U))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                  >> 1U))))
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                                 >> 0x20U))
                                                      : (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                                 >> 0x30U)))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__446__PROF__idu_decode__l61(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__446__PROF__idu_decode__l61\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0x19U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                    >> 2U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__452__PROF__lsu__l85(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__452__PROF__lsu__l85\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we 
        = (1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                 & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                       >> 3U))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__453__PROF__lsu__l84(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__453__PROF__lsu__l84\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re 
        = (1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                    >> 3U)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__454__PROF__idu_decode__l49(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__454__PROF__idu_decode__l49\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type 
        = ((((IData)(vlSelf->rst) ? 0U : (IData)((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                      >> 2U))))) 
            << 7U) | ((((IData)(vlSelf->rst) ? 0U : (IData)(
                                                            (0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                 >> 2U))))) 
                       << 6U) | ((((IData)(vlSelf->rst)
                                    ? 0U : (IData)(
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                        >> 2U))))) 
                                  << 5U) | ((((IData)(vlSelf->rst)
                                               ? 0U
                                               : (IData)(
                                                         (4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                              >> 2U))))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                 >> 2U))))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : (IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                    >> 2U))))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->rst)
                                                        ? 0U
                                                        : (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->rst)
                                                         ? 0U
                                                         : (IData)(
                                                                   (8U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                        >> 2U))))))))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__467__PROF__lsu__l135(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__467__PROF__lsu__l135\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data 
        = ((IData)(vlSelf->rst) ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                           ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                               ? ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word))
                                                    : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte))
                                                    : vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i))
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word)))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half) 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte) 
                                                                            >> 7U))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte)))
                                                    : 0ULL)))
                                           : 0ULL));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__474__PROF__lsu__l37(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__474__PROF__lsu__l37\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok) 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__475__PROF__lsu__l90(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__475__PROF__lsu__l90\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
            ? ((IData)(vlSelf->rst) ? 0ULL : (0xfffffffffffffff8ULL 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
            : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we)
                ? ((IData)(vlSelf->rst) ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)
                : 0ULL));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__476__PROF__idu_decode__l205(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__476__PROF__idu_decode__l205\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))
            ? 1U : ((1U & ((((IData)((0U != (0xf8U 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                           | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal) 
                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr))))
                     ? 2U : 0U));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__477__PROF__idu_decode__l174(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__477__PROF__idu_decode__l174\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm = 
        ((1U & ((IData)((0U != (0xb2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr)))
          ? (((- (QData)((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                  >> 0x1fU)))) << 0xcU) 
             | (QData)((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                >> 0x14U)))) : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))
                                                 : 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal)
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm 
                                                                          >> 0x13U))))) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    (0xfffffU 
                                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm 
                                                                        << 1U)))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm) 
                                                                           >> 0xbU))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm) 
                                                                         << 1U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm) 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm)))
                                                    : 0ULL)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__478__PROF__idu_decode__l64(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__478__PROF__idu_decode__l64\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__479__PROF__idu_decode__l65(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__479__PROF__idu_decode__l65\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__480__PROF__idu_decode__l66(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__480__PROF__idu_decode__l66\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__481__PROF__idu_decode__l67(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__481__PROF__idu_decode__l67\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__482__PROF__idu_decode__l69(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__482__PROF__idu_decode__l69\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__483__PROF__idu_decode__l70(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__483__PROF__idu_decode__l70\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__484__PROF__idu_decode__l71(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__484__PROF__idu_decode__l71\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__485__PROF__idu_decode__l72(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__485__PROF__idu_decode__l72\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__486__PROF__idu_decode__l73(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__486__PROF__idu_decode__l73\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x4000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__487__PROF__idu_decode__l74(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__487__PROF__idu_decode__l74\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__488__PROF__idu_decode__l75(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__488__PROF__idu_decode__l75\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__489__PROF__idu_decode__l77(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__489__PROF__idu_decode__l77\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__490__PROF__idu_decode__l78(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__490__PROF__idu_decode__l78\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__491__PROF__idu_decode__l79(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__491__PROF__idu_decode__l79\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x4000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__492__PROF__idu_decode__l80(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__492__PROF__idu_decode__l80\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__493__PROF__idu_decode__l81(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__493__PROF__idu_decode__l81\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__494__PROF__idu_decode__l82(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__494__PROF__idu_decode__l82\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x7000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__495__PROF__idu_decode__l84(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__495__PROF__idu_decode__l84\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__496__PROF__idu_decode__l85(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__496__PROF__idu_decode__l85\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__497__PROF__idu_decode__l86(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__497__PROF__idu_decode__l86\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__498__PROF__idu_decode__l87(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__498__PROF__idu_decode__l87\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__499__PROF__idu_decode__l88(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__499__PROF__idu_decode__l88\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__500__PROF__idu_decode__l89(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__500__PROF__idu_decode__l89\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x4000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__501__PROF__idu_decode__l90(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__501__PROF__idu_decode__l90\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__502__PROF__idu_decode__l91(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__502__PROF__idu_decode__l91\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__503__PROF__idu_decode__l92(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__503__PROF__idu_decode__l92\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__504__PROF__idu_decode__l93(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__504__PROF__idu_decode__l93\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x7000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__505__PROF__idu_decode__l94(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__505__PROF__idu_decode__l94\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__506__PROF__idu_decode__l95(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__506__PROF__idu_decode__l95\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__507__PROF__idu_decode__l96(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__507__PROF__idu_decode__l96\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__508__PROF__idu_decode__l97(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__508__PROF__idu_decode__l97\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2001000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__509__PROF__idu_decode__l98(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__509__PROF__idu_decode__l98\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2002000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__510__PROF__idu_decode__l99(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__510__PROF__idu_decode__l99\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2003000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__511__PROF__idu_decode__l100(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__511__PROF__idu_decode__l100\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__512__PROF__idu_decode__l101(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__512__PROF__idu_decode__l101\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__513__PROF__idu_decode__l111(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__513__PROF__idu_decode__l111\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai 
        = (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__514__PROF__idu_decode__l113(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__514__PROF__idu_decode__l113\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__515__PROF__idu_decode__l114(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__515__PROF__idu_decode__l114\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__516__PROF__idu_decode__l115(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__516__PROF__idu_decode__l115\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__517__PROF__idu_decode__l116(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__517__PROF__idu_decode__l116\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__518__PROF__idu_decode__l118(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__518__PROF__idu_decode__l118\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__519__PROF__idu_decode__l119(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__519__PROF__idu_decode__l119\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__520__PROF__idu_decode__l120(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__520__PROF__idu_decode__l120\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__521__PROF__idu_decode__l121(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__521__PROF__idu_decode__l121\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__522__PROF__idu_decode__l122(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__522__PROF__idu_decode__l122\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__523__PROF__idu_decode__l123(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__523__PROF__idu_decode__l123\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__524__PROF__idu_decode__l124(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__524__PROF__idu_decode__l124\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__525__PROF__idu_decode__l125(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__525__PROF__idu_decode__l125\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__526__PROF__idu_decode__l126(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__526__PROF__idu_decode__l126\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__527__PROF__idu_decode__l127(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__527__PROF__idu_decode__l127\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__528__PROF__idu_decode__l131(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__528__PROF__idu_decode__l131\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x30000000U == (0x30007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__529__PROF__idu_decode__l135(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__529__PROF__idu_decode__l135\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__530__PROF__idu_decode__l136(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__530__PROF__idu_decode__l136\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__531__PROF__idu_decode__l137(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__531__PROF__idu_decode__l137\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x7000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__532__PROF__idu_decode__l138(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__532__PROF__idu_decode__l138\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
           & (1U == (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                     >> 0x14U)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__533__PROF__idu_decode__l163(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__533__PROF__idu_decode__l163\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena 
        = (IData)((0U != (0x4dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__534__PROF__idu_decode__l130(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__534__PROF__idu_decode__l130\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
           & (0U == (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                     >> 0x14U)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__535__PROF__idu_decode__l132(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__535__PROF__idu_decode__l132\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__536__PROF__idu_decode__l133(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__536__PROF__idu_decode__l133\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__537__PROF__idu_decode__l134(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__537__PROF__idu_decode__l134\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__545__PROF__lsu__l304(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__545__PROF__lsu__l304\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
            ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
            : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__547__PROF__exu__l85(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__547__PROF__exu__l85\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res 
        = ((IData)(vlSelf->rst) ? 0ULL : ((0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? ((0x40U 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        ^ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : (QData)((IData)(
                                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                                           < vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (4ULL 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        << 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 
                                                       (4ULL 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc)
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        << 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        | vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        | vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        ^ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))
                                                        : (QData)((IData)(
                                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                                           < vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2
                                                        : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                                        : 0ULL)))))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__548__PROF__exu__l35(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__548__PROF__exu__l35\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__549__PROF__dcache_device_sel__l46(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__549__PROF__dcache_device_sel__l46\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena 
        = ((((((0xa00003f8ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
               & (0xa00003ffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc)) 
              | ((0xa0000048ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                 & (0xa000004fULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
             | ((0xa0000100ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                & (0xa0000107ULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
            | ((0xa1000000ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
               & (0xa10752ffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
           | ((0xa0000060ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
              & (0xa0000063ULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__550__PROF__idu__l110(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__550__PROF__idu__l110\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena 
        = ((0U != (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                            >> 7U))) & (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__551__PROF__idu__l109(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__551__PROF__idu__l109\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
            ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                        >> 0x14U)) : 0U);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__552__PROF__idu_decode__l140(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__552__PROF__idu_decode__l140\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel 
        = ((((IData)(vlSelf->rst) ? 0U : (1U & ((((
                                                   (((((((((((((((1U 
                                                                  & (IData)(
                                                                            ((0x10U 
                                                                              == 
                                                                              (0x10U 
                                                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                             & (0x5000U 
                                                                                == 
                                                                                (0x40007000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu)) 
                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw)) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi)) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi)) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci)))) 
            << 7U) | ((((IData)(vlSelf->rst) ? 0U : 
                        (1U & (((((((((((((((((((1U 
                                                 & (IData)(
                                                           ((0x10U 
                                                             == 
                                                             (0x10U 
                                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                            & (0x1000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor)) 
                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw)) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr)) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge)) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu)) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld)) 
                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul)) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw)) 
                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem)) 
                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret)) 
                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc)) 
                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi)))) 
                       << 6U) | ((((IData)(vlSelf->rst)
                                    ? 0U : (1U & ((
                                                   (((((((((((((((((((1U 
                                                                      & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall)) 
                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw)) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci)))) 
                                  << 5U) | ((((IData)(vlSelf->rst)
                                               ? 0U
                                               : (1U 
                                                  & ((((((((((((((((((((((1U 
                                                                          & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi)))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  & ((((((((((((((((((((((((1U 
                                                                            & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
                                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub)) 
                                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll)) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi)))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    (1U 
                                                     & (((((((((((((((((((((((((1U 
                                                                                & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
                                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add)) 
                                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub)) 
                                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl)) 
                                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or)) 
                                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw)) 
                                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw)) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci)))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->rst)
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((((((((((((((((((((((1U 
                                                                                & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
                                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai)) 
                                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add)) 
                                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra)) 
                                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw)) 
                                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw)) 
                                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr)) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc)))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->rst)
                                                         ? 0U
                                                         : 
                                                        (1U 
                                                         & (((((((((((((((((1U 
                                                                            & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
                                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai)) 
                                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl)) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)))))))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__553__PROF__idu_decode__l162(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__553__PROF__idu_decode__l162\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena 
        = (1U & ((((IData)((0U != (0x7fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr)) 
                  | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))) 
                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__560__PROF__i_cache__l119(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__560__PROF__i_cache__l119\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid 
        = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
           & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
              & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit) 
                  & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                             >> 2U))) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit) 
                                          & (~ (IData)(
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                        >> 2U)))) 
                                         | ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)) 
                                             & (IData)(
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                        >> 2U))) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit) 
                                               & (~ (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                             >> 2U)))))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__561__PROF__i_cache__l119(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__561__PROF__i_cache__l119\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
        = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)
                ? 0U : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit) 
                         & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                    >> 2U))) ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[1U]
                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit) 
                             & (~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                           >> 2U))))
                             ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[0U]
                             : ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit) 
                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)) 
                                 & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                            >> 2U)))
                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[3U]
                                 : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit) 
                                     & (~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                   >> 2U))))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[2U]
                                     : 0U))))) : 0U);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__562__PROF__dcache_device_sel__l65(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__562__PROF__dcache_device_sel__l65\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we)
            : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena)
                : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__563__PROF__dcache_device_sel__l55(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__563__PROF__dcache_device_sel__l55\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__564__PROF__dcache_device_sel__l53(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__564__PROF__dcache_device_sel__l53\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__565__PROF__dcache_device_sel__l54(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__565__PROF__dcache_device_sel__l54\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__566__PROF__dcache_device_sel__l58(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__566__PROF__dcache_device_sel__l58\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__567__PROF__dcache_device_sel__l56(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__567__PROF__dcache_device_sel__l56\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__568__PROF__idu__l213(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__568__PROF__idu__l213\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
        if ((0x54U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena = 1U;
        } else if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                             | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                          | (0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
                if ((1U & (~ ((0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                              | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena = 0U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__569__PROF__idu__l213(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__569__PROF__idu__l213\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena = 0U;
    if ((0x2aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena = 1U;
    } else if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
        if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                      | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                          | (0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
                if ((1U & (~ ((0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                              | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena = 0U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__570__PROF__idu__l213(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__570__PROF__idu__l213\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
        if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena 
                = (((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                    | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))
                    ? (0U != (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 7U))) : (
                                                   ((0x25U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                                                    | (0x4aU 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) 
                                                   | ((0xc8U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                                                      | (0xa4U 
                                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))));
        }
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__571__PROF__idu__l213(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__571__PROF__idu__l213\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
        if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena 
                = (((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                    | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) 
                   | (((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                       | (0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))
                       ? (0U != (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                          >> 0xfU)))
                       : (((0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                           | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) 
                          & (0ULL != vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm))));
        }
    }
}

extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_3685cfcf_0;

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__572__PROF__idu_decode__l186(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__572__PROF__idu_decode__l186\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx3;
    // Body
    __Vtableidx3 = vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel;
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_3685cfcf_0
        [__Vtableidx3];
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__573__PROF__idu__l108(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__573__PROF__idu__l108\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
            ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                        >> 0xfU)) : 0U);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__574__PROF__dcache_device_sel__l60(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__574__PROF__dcache_device_sel__l60\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__575__PROF__dcache_device_sel__l61(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__575__PROF__dcache_device_sel__l61\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__576__PROF__divide__l104(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__576__PROF__divide__l104\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                           ? (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                                               ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q
                                               : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign)))
                                                   ? 
                                                  (1ULL 
                                                   + 
                                                   (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q))
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)) 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q))
                                                    : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q)))
                                           : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__577__PROF__divide__l104(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__577__PROF__divide__l104\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                           ? (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                                               ? (1ULL 
                                                  + 
                                                  (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])))))
                                               : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign)))
                                                   ? 
                                                  (1ULL 
                                                   + 
                                                   (~ 
                                                    (((QData)((IData)(
                                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])))))
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)) 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U]))))))
                                           : (((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])))));
}

extern const VlUnpacked<CData/*3:0*/, 2048> Vysyx_22051013_rvcpu__ConstPool__TABLE_401647e8_0;

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__579__PROF__i_cache__l46(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__579__PROF__i_cache__l46\n"); );
    // Variables
    SData/*10:0*/ __Vtableidx2;
    // Body
    __Vtableidx2 = (((IData)(vlSelf->rst) << 0xaU) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit) 
                        << 9U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit) 
                                   << 8U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_update) 
                                              << 7U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid) 
                                                    << 5U) 
                                                   | ((((~ 
                                                         ((8U 
                                                           == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))) 
                                                        & ((8U 
                                                            == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))) 
                                                       << 4U) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_401647e8_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__580__PROF__exu__l34(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__580__PROF__exu__l34\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid = (1U 
                                                  & (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__581__PROF__bpu_static__l25(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__581__PROF__bpu_static__l25\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
        = ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                            >> 0x15U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__582__PROF__bpu_static__l26(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__582__PROF__bpu_static__l26\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm 
        = ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                  >> 8U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__583__PROF__bpu_static__l34(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__583__PROF__bpu_static__l34\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0x18U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                    >> 2U)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__584__PROF__d_cache__l394(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__584__PROF__d_cache__l394\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64 
        = (((QData)((IData)((((- (IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                >> 7U)))) 
                              << 0x18U) | ((0xff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                              >> 6U)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                                 >> 5U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                                  >> 4U)))))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                         >> 3U)))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                               >> 2U)))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask)))))))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__585__PROF__d_cache__l44(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__585__PROF__d_cache__l44\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__586__PROF__d_cache__l292(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__586__PROF__d_cache__l292\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__587__PROF__d_cache__l42(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__587__PROF__d_cache__l42\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty 
        = ((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))] & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))]) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__588__PROF__d_cache__l290(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__588__PROF__d_cache__l290\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty 
        = ((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))] & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))]) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__589__PROF__d_cache__l40(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__589__PROF__d_cache__l40\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__590__PROF__d_cache__l41(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__590__PROF__d_cache__l41\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__591__PROF__d_cache__l288(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__591__PROF__d_cache__l288\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__592__PROF__d_cache__l289(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__592__PROF__d_cache__l289\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__593__PROF__idu__l119(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__593__PROF__idu__l119\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena 
        = ((~ (IData)(vlSelf->rst)) & (((~ (IData)(vlSelf->rst)) 
                                        & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr)))) 
                                       | ((~ (IData)(vlSelf->rst)) 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__594__PROF__d_cache__l181(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__594__PROF__d_cache__l181\n"); );
    // Body
    if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U] = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data)
                : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
                           >> 0x20U)) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data)
                : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
                           >> 0x20U)) : 0U);
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__595__PROF__d_cache__l433(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__595__PROF__d_cache__l433\n"); );
    // Body
    if (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[0U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[1U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[3U] = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[0U] 
            = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data)
                : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[1U] 
            = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
                           >> 0x20U)) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U] 
            = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data)
                : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[3U] 
            = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
                           >> 0x20U)) : 0U);
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__596__PROF__d_cache__l181(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__596__PROF__d_cache__l181\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc 
        = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
            ? (0xfffffffffffffff8ULL & vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc)
            : 0ULL);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__597__PROF__d_cache__l433(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__597__PROF__d_cache__l433\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc 
        = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
            ? (0xfffffffffffffff8ULL & vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc)
            : 0ULL);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__598__PROF__d_cache__l181(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__598__PROF__d_cache__l181\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid 
        = ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
           & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__599__PROF__d_cache__l433(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__599__PROF__d_cache__l433\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid 
        = ((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
           & ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__600__PROF__d_cache__l181(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__600__PROF__d_cache__l181\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena 
        = ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__601__PROF__d_cache__l433(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__601__PROF__d_cache__l433\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena 
        = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__604__PROF__lsu__l38(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__604__PROF__lsu__l38\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                                  | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok) 
                                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__605__PROF__bpu_static__l52(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__605__PROF__bpu_static__l52\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__pr_pc 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
           + (((IData)(vlSelf->rst) ? 0U : (IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst))))
               ? (((- (QData)((IData)((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                             >> 0x13U))))) 
                   << 0x14U) | (QData)((IData)((0xfffffU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                                   << 1U)))))
               : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                      >> 0xbU)) ? (((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                           >> 0xbU))))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (0xfffU 
                                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                                   << 1U)))))
                   : ((IData)(vlSelf->rst) ? 0ULL : 4ULL))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__606__PROF__d_cache__l241(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__606__PROF__d_cache__l241\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data 
        = (((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty)
                ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U]))))
            : 0ULL);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__607__PROF__d_cache__l496(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__607__PROF__d_cache__l496\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data 
        = (((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty)
                ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U]))))
            : 0ULL);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__608__PROF__d_cache__l144(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__608__PROF__d_cache__l144\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data 
        = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit)
                ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit)
                    ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U])))
                    : 0ULL)) : 0ULL);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__609__PROF__d_cache__l144(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__609__PROF__d_cache__l144\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid 
        = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit) 
              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__610__PROF__d_cache__l397(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__610__PROF__d_cache__l397\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp208;
    // Body
    VL_EXTEND_WQ(128,64, __Vtemp208, vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64);
    if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp208[0U] : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp208[1U] : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp208[2U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)
                                     ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64)
                                     : 0U));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp208[3U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)
                                     ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64 
                                                >> 0x20U))
                                     : 0U));
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U] = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__611__PROF__d_cache__l397(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__611__PROF__d_cache__l397\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid 
        = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit) 
              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__612__PROF__dcache_device_sel__l66(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__612__PROF__dcache_device_sel__l66\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc
            : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc
                : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                    ? (((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))
                        ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty)
                            ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                << 9U) | (QData)((IData)(
                                                         (0x1f8U 
                                                          & ((IData)(
                                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                      >> 3U)) 
                                                             << 3U)))))
                            : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                << 9U) | (QData)((IData)(
                                                         (0x1f8U 
                                                          & ((IData)(
                                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                      >> 3U)) 
                                                             << 3U))))))
                        : 0ULL) : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc
                                    : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? (((0x21U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty)
                                                ? (
                                                   ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                                    << 9U) 
                                                   | (QData)((IData)(
                                                                     (0x1f8U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                         << 3U)))))
                                                : (
                                                   ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                                    << 9U) 
                                                   | (QData)((IData)(
                                                                     (0x1f8U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                         << 3U))))))
                                            : 0ULL)
                                        : 0ULL)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__613__PROF__dcache_device_sel__l64(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__613__PROF__dcache_device_sel__l64\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
            : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__614__PROF__d_cache__l56(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__614__PROF__d_cache__l56\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next 
        = ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
            ? 1U : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                     ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                         ? 1U : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                  ? 1U : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                           ? 1U : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid)
                                                     ? 8U
                                                     : 0x10U)))))
                     : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                         ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                             ? 1U : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                      ? 1U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                               ? 1U
                                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                                   ? 4U
                                                   : 8U))))
                         : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                             ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                 ? 1U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                          ? 1U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid)
                                                   ? 2U
                                                   : 4U)))
                             : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                 ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                     ? 1U : ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit)))
                                              ? 4U : 
                                             ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update)) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty) 
                                                  | ((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))] 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))]) 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild))))
                                               ? 0x10U
                                               : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready) 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update))
                                                   ? 8U
                                                   : 2U))))
                                 : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                     ? ((IData)(vlSelf->rst)
                                         ? 1U : 2U)
                                     : 1U))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__615__PROF__dcache_device_sel__l71(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__615__PROF__dcache_device_sel__l71\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid 
        = (1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                  ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid))
                  : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                      ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid))
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))
                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re) 
                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we))))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__616__PROF__d_cache__l304(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__616__PROF__d_cache__l304\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next 
        = ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
            ? ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                ? 1U : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                         ? 1U : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                  ? 1U : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                           ? 1U : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid)
                                                     ? 0x20U
                                                     : 0x21U)
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                                     ? 4U
                                                     : 0x20U))))))
            : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                ? 1U : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                         ? 1U : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                  ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                      ? 1U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                               ? 1U
                                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid)
                                                   ? 3U
                                                   : 4U)))
                                  : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                      ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                          ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)))
                                              ? 4U : 
                                             ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update)) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty) 
                                                  | ((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))] 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))]) 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild))))
                                               ? 0x21U
                                               : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready) 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update))
                                                   ? 0x20U
                                                   : 3U)))
                                          : 1U) : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                    ? 
                                                   ((IData)(vlSelf->rst)
                                                     ? 1U
                                                     : 3U)
                                                    : 1U))))));
}

extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_22051013_rvcpu__ConstPool__TABLE_86ae1b77_0;

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__617__PROF__axi_master_arbitrator__l83(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__617__PROF__axi_master_arbitrator__l83\n"); );
    // Variables
    SData/*8:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re) 
                     << 8U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we) 
                                << 7U) | ((((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))) 
                                            & ((8U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))) 
                                           << 6U) | 
                                          (((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state)) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__dread_shakehand) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state_next 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_86ae1b77_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__618__PROF__axi_slave__l93(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__618__PROF__axi_slave__l93\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)) 
           & ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
              | ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___settle__TOP__619__PROF__axi_slave__l108(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__619__PROF__axi_slave__l108\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state_next 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand)
                ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                               ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                   ? 1U : 2U) : 1U));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___combo__TOP__702__PROF__exu__l448(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___combo__TOP__702__PROF__exu__l448\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata 
        = ((0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data
            : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)
                ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp
                    : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___combo__TOP__720__PROF__idu__l155(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___combo__TOP__720__PROF__idu__l155\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2 = 
        ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                         ? (((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                                  | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))) 
                                                 | (0U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                             : (((~ 
                                                  ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                                   | (0U 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                                 : 
                                                (((~ 
                                                   ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                                    | (0U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                                  : 
                                                 (((~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                                   ? 
                                                  vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                  [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                                   : 0ULL))))
                                         : ((1U & (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0xb3U 
                                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm
                                             : 0ULL)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___combo__TOP__750__PROF__idu__l140(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___combo__TOP__750__PROF__idu__l140\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 = 
        ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                         ? (((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                                  | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))) 
                                                 | (0U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                             : (((~ 
                                                  ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                                   | (0U 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                                 : 
                                                (((~ 
                                                   ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                                    | (0U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                                  : 
                                                 (((~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                                   ? 
                                                  vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                  [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                                   : 0ULL))))
                                         : (((0xa0U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                                             | (0x21U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc
                                             : ((((0x94U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                                                  | (0xc8U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) 
                                                 | (0xa4U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))
                                                 ? (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                       >> 0xfU))))
                                                 : 0ULL))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___combo__TOP__761__PROF__idu__l174(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___combo__TOP__761__PROF__idu__l174\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
           - vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___combo__TOP__767__PROF__idu__l176(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___combo__TOP__767__PROF__idu__l176\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___combo__TOP__769__PROF__idu__l199(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___combo__TOP__769__PROF__idu__l199\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel 
        = ((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
           | ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                >> 2U) & ((0xeU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                           ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                              == vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                           : ((0x1cU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                               ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                  != vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                               : ((0xe0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                   ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                      < vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                                   : ((0xdU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                       ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                          >= vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                                       : ((0x38U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2)
                                           : ((0x70U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                                              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2))))))))) 
              ^ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)));
}

void Vysyx_22051013_rvcpu___024root___eval(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vysyx_22051013_rvcpu___024root___sequent__TOP__94__PROF__ls_wb_reg__l44(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__97__PROF__id_ex_reg__l58(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__98__PROF__id_ex_reg__l61(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__99__PROF__id_ex_reg__l62(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__100__PROF__if_id_reg__l30(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__103__PROF__ex_ls_reg__l46(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__105__PROF__ls_wb_reg__l45(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__108__PROF__cache_tag_ram__l18(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__109__PROF__cache_tag_ram__l18(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__111__PROF__if_id_reg__l29(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__121__PROF__lsu__l53(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__122__PROF__regfile__l108(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__123__PROF__regfile__l113(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__126__PROF__csr__l62(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__127__PROF__ifu__l47(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__131__PROF__cache_data_ram__l25(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__133__PROF__divide__l76(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__134__PROF__divide__l75(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__135__PROF__divide__l77(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__136__PROF__cache_tag_ram__l18(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__137__PROF__cache_tag_ram__l18(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__142__PROF__cache_data_ram__l25(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__146__PROF__d_cache__l544(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__147__PROF__d_cache__l548(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__148__PROF__d_cache__l545(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__149__PROF__d_cache__l549(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__150__PROF__d_cache__l560(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__151__PROF__d_cache__l563(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__153__PROF__i_cache__l264(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__154__PROF__i_cache__l268(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__155__PROF__i_cache__l263(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__156__PROF__i_cache__l267(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__157__PROF__d_cache__l567(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__158__PROF__d_cache__l570(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__164__PROF__multiply__l56(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__173__PROF__wbu__l66(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__174__PROF__regfile__l105(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__175__PROF__regfile__l66(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__176__PROF__axi_slave__l144(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__177__PROF__ls_wb_reg__l37(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__178__PROF__ls_wb_reg__l37(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__179__PROF__ls_wb_reg__l37(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__180__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__181__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__182__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__183__PROF__if_id_reg__l26(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__184__PROF__i_cache__l97(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__185__PROF__ex_ls_reg__l39(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__186__PROF__ex_ls_reg__l39(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__187__PROF__ex_ls_reg__l39(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__188__PROF__ls_wb_reg__l37(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__189__PROF__d_cache__l367(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__190__PROF__d_cache__l119(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__191__PROF__cache_tag_ram__l16(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__192__PROF__cache_tag_ram__l16(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__193__PROF__ex_ls_reg__l39(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__194__PROF__if_id_reg__l26(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__195__PROF__ex_ls_reg__l39(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__196__PROF__ls_wb_reg__l37(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__197__PROF__d_cache__l525(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__198__PROF__d_cache__l271(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__199__PROF__multiply__l94(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__200__PROF__csr__l61(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__201__PROF__csr__l61(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__202__PROF__csr__l61(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__203__PROF__exu__l371(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__204__PROF__lsu__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__205__PROF__regfile__l105(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__206__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__207__PROF__multiply__l77(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__208__PROF__csr__l61(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__209__PROF__ifu__l45(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__210__PROF__exu__l388(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__211__PROF__exu__l232(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__212__PROF__exu__l350(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__213__PROF__cache_data_ram__l23(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__214__PROF__divide__l73(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__215__PROF__cache_tag_ram__l16(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__216__PROF__cache_tag_ram__l16(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__217__PROF__csr__l90(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__218__PROF__csr__l75(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__219__PROF__csr__l101(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__220__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__221__PROF__cache_data_ram__l23(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__222__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__223__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__224__PROF__d_cache__l542(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__225__PROF__d_cache__l542(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__226__PROF__d_cache__l558(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__227__PROF__ls_wb_reg__l37(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__228__PROF__i_cache__l261(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__229__PROF__i_cache__l261(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__230__PROF__d_cache__l558(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__231__PROF__axi_slave__l99(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__232__PROF__ls_wb_reg__l37(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__233__PROF__ex_ls_reg__l39(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__234__PROF__lsu__l68(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__235__PROF__multiply__l53(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__236__PROF__multiply__l53(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__237__PROF__ex_ls_reg__l39(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__238__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__239__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__240__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__241__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__242__PROF__id_ex_reg__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__243__PROF__ex_ls_reg__l39(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__244__PROF__if_id_reg__l26(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__251__PROF__id_ex_reg__l58(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__253__PROF__id_ex_reg__l62(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__259__PROF__ex_ls_reg__l46(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__268__PROF__ls_wb_reg__l44(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__269__PROF__ls_wb_reg__l45(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__270__PROF__regfile__l108(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__273__PROF__csr__l62(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__274__PROF__if_id_reg__l30(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__275__PROF__if_id_reg__l29(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__279__PROF__cache_data_ram__l25(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__281__PROF__divide__l76(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__282__PROF__divide__l75(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__288__PROF__cache_data_ram__l25(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__292__PROF__d_cache__l560(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__295__PROF__i_cache__l264(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__296__PROF__i_cache__l263(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__302__PROF__d_cache__l567(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__303__PROF__d_cache__l544(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__304__PROF__d_cache__l545(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__312__PROF__lsu__l53(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__323__PROF__id_ex_reg__l61(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__326__PROF__wbu__l66(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__327__PROF__axi_slave__l52(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__328__PROF__axi_master_arbitrator__l74(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__329__PROF__multiply__l106(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__330__PROF__divide__l26(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__331__PROF__exu__l408(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__332__PROF__csr__l25(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__333__PROF__exu__l416(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__334__PROF__i_cache__l37(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__335__PROF__cache_tag_ram__l16(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__336__PROF__cache_tag_ram__l16(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__337__PROF__d_cache__l295(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__338__PROF__d_cache__l47(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__339__PROF__cache_tag_ram__l16(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__340__PROF__cache_tag_ram__l16(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__341__PROF__axi_slave__l134(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__342__PROF__multiply__l25(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__343__PROF__lsu__l133(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__344__PROF__exu__l50(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__345__PROF__exu__l53(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__346__PROF__exu__l57(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__347__PROF__exu__l61(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__348__PROF__exu__l39(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__349__PROF__exu__l43(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__350__PROF__idu_decode__l40(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__351__PROF__idu_decode__l42(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__352__PROF__idu_decode__l43(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__356__PROF__divide__l77(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__359__PROF__csr__l38(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__360__PROF__csr__l109(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__362__PROF__cache_tag_ram__l18(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__365__PROF__cache_tag_ram__l18(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__368__PROF__ifu__l47(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__371__PROF__cache_tag_ram__l18(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__374__PROF__cache_tag_ram__l18(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__378__PROF__multiply__l56(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__380__PROF__exu__l54(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__381__PROF__exu__l58(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__382__PROF__exu__l62(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__383__PROF__exu__l40(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__384__PROF__exu__l47(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__385__PROF__axi_slave__l62(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__386__PROF__axi_slave__l132(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__387__PROF__divide__l22(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__388__PROF__exu__l292(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__389__PROF__csr__l44(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__390__PROF__exu__l416(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__391__PROF__i_cache__l34(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__392__PROF__i_cache__l35(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__393__PROF__d_cache__l496(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__394__PROF__d_cache__l496(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__395__PROF__d_cache__l241(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__396__PROF__d_cache__l241(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__397__PROF__multiply__l21(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__398__PROF__exu__l172(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__399__PROF__axi_master_arbitrator__l148(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__400__PROF__axi_master_arbitrator__l147(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__403__PROF__csr__l56(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__404__PROF__csr__l46(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__405__PROF__csr__l51(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__406__PROF__multiply__l108(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__409__PROF__axi_master_arbitrator__l166(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__410__PROF__i_cache__l160(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__411__PROF__axi_master_arbitrator__l166(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__412__PROF__axi_master_arbitrator__l198(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__413__PROF__exu__l276(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__414__PROF__exu__l156(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__416__PROF__exu__l253(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__418__PROF__exu__l139(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__419__PROF__divide__l41(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__420__PROF__divide__l45(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__421__PROF__multiply__l42(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__422__PROF__multiply__l44(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__423__PROF__divide__l52(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__424__PROF__divide__l53(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__425__PROF__divide__l59(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__426__PROF__divide__l71(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__427__PROF__divide__l71(vlSelf);
    }
    Vysyx_22051013_rvcpu___024root___settle__TOP__429__PROF__exu__l444(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vysyx_22051013_rvcpu___024root___settle__TOP__434__PROF__wbu__l33(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__442__PROF__lsu__l101(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__443__PROF__lsu__l119(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__430__PROF__lsu__l253(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__432__PROF__lsu__l253(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__452__PROF__lsu__l85(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__453__PROF__lsu__l84(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__438__PROF__idu_decode__l60(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__439__PROF__idu_decode__l58(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__440__PROF__idu_decode__l59(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__446__PROF__idu_decode__l61(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__454__PROF__idu_decode__l49(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__547__PROF__exu__l85(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__576__PROF__divide__l104(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__577__PROF__divide__l104(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__467__PROF__lsu__l135(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__474__PROF__lsu__l37(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__475__PROF__lsu__l90(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__476__PROF__idu_decode__l205(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__477__PROF__idu_decode__l174(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__478__PROF__idu_decode__l64(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__479__PROF__idu_decode__l65(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__480__PROF__idu_decode__l66(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__481__PROF__idu_decode__l67(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__482__PROF__idu_decode__l69(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__483__PROF__idu_decode__l70(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__484__PROF__idu_decode__l71(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__485__PROF__idu_decode__l72(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__486__PROF__idu_decode__l73(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__487__PROF__idu_decode__l74(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__488__PROF__idu_decode__l75(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__489__PROF__idu_decode__l77(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__490__PROF__idu_decode__l78(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__491__PROF__idu_decode__l79(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__492__PROF__idu_decode__l80(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__493__PROF__idu_decode__l81(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__494__PROF__idu_decode__l82(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__495__PROF__idu_decode__l84(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__496__PROF__idu_decode__l85(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__497__PROF__idu_decode__l86(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__498__PROF__idu_decode__l87(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__499__PROF__idu_decode__l88(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__500__PROF__idu_decode__l89(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__501__PROF__idu_decode__l90(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__502__PROF__idu_decode__l91(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__503__PROF__idu_decode__l92(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__504__PROF__idu_decode__l93(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__505__PROF__idu_decode__l94(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__506__PROF__idu_decode__l95(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__507__PROF__idu_decode__l96(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__508__PROF__idu_decode__l97(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__509__PROF__idu_decode__l98(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__510__PROF__idu_decode__l99(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__511__PROF__idu_decode__l100(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__512__PROF__idu_decode__l101(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__513__PROF__idu_decode__l111(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__514__PROF__idu_decode__l113(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__515__PROF__idu_decode__l114(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__516__PROF__idu_decode__l115(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__517__PROF__idu_decode__l116(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__518__PROF__idu_decode__l118(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__519__PROF__idu_decode__l119(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__520__PROF__idu_decode__l120(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__521__PROF__idu_decode__l121(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__522__PROF__idu_decode__l122(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__523__PROF__idu_decode__l123(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__524__PROF__idu_decode__l124(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__525__PROF__idu_decode__l125(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__526__PROF__idu_decode__l126(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__527__PROF__idu_decode__l127(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__528__PROF__idu_decode__l131(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__529__PROF__idu_decode__l135(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__530__PROF__idu_decode__l136(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__531__PROF__idu_decode__l137(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__532__PROF__idu_decode__l138(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__533__PROF__idu_decode__l163(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__534__PROF__idu_decode__l130(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__535__PROF__idu_decode__l132(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__536__PROF__idu_decode__l133(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__537__PROF__idu_decode__l134(vlSelf);
    Vysyx_22051013_rvcpu___024root___combo__TOP__702__PROF__exu__l448(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__545__PROF__lsu__l304(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__548__PROF__exu__l35(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__549__PROF__dcache_device_sel__l46(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__550__PROF__idu__l110(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__551__PROF__idu__l109(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__552__PROF__idu_decode__l140(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__553__PROF__idu_decode__l162(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__560__PROF__i_cache__l119(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__561__PROF__i_cache__l119(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__562__PROF__dcache_device_sel__l65(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__563__PROF__dcache_device_sel__l55(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__564__PROF__dcache_device_sel__l53(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__565__PROF__dcache_device_sel__l54(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__566__PROF__dcache_device_sel__l58(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__567__PROF__dcache_device_sel__l56(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__574__PROF__dcache_device_sel__l60(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__575__PROF__dcache_device_sel__l61(vlSelf);
    Vysyx_22051013_rvcpu___024root___combo__TOP__720__PROF__idu__l155(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__568__PROF__idu__l213(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__569__PROF__idu__l213(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__570__PROF__idu__l213(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__571__PROF__idu__l213(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__572__PROF__idu_decode__l186(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__573__PROF__idu__l108(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__579__PROF__i_cache__l46(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__580__PROF__exu__l34(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__581__PROF__bpu_static__l25(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__582__PROF__bpu_static__l26(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__583__PROF__bpu_static__l34(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__584__PROF__d_cache__l394(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__585__PROF__d_cache__l44(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__586__PROF__d_cache__l292(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__587__PROF__d_cache__l42(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__588__PROF__d_cache__l290(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__589__PROF__d_cache__l40(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__590__PROF__d_cache__l41(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__591__PROF__d_cache__l288(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__592__PROF__d_cache__l289(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__594__PROF__d_cache__l181(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__595__PROF__d_cache__l433(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__596__PROF__d_cache__l181(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__597__PROF__d_cache__l433(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__598__PROF__d_cache__l181(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__599__PROF__d_cache__l433(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__600__PROF__d_cache__l181(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__601__PROF__d_cache__l433(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__593__PROF__idu__l119(vlSelf);
    Vysyx_22051013_rvcpu___024root___combo__TOP__750__PROF__idu__l140(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__604__PROF__lsu__l38(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__605__PROF__bpu_static__l52(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__606__PROF__d_cache__l241(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__607__PROF__d_cache__l496(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__608__PROF__d_cache__l144(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__609__PROF__d_cache__l144(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__610__PROF__d_cache__l397(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__611__PROF__d_cache__l397(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__612__PROF__dcache_device_sel__l66(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__613__PROF__dcache_device_sel__l64(vlSelf);
    Vysyx_22051013_rvcpu___024root___combo__TOP__761__PROF__idu__l174(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__614__PROF__d_cache__l56(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__615__PROF__dcache_device_sel__l71(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__616__PROF__d_cache__l304(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__617__PROF__axi_master_arbitrator__l83(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__618__PROF__axi_slave__l93(vlSelf);
    Vysyx_22051013_rvcpu___024root___combo__TOP__767__PROF__idu__l176(vlSelf);
    Vysyx_22051013_rvcpu___024root___settle__TOP__619__PROF__axi_slave__l108(vlSelf);
    Vysyx_22051013_rvcpu___024root___combo__TOP__769__PROF__idu__l199(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22051013_rvcpu___024root___change_request_1(Vysyx_22051013_rvcpu___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22051013_rvcpu___024root___change_request(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___change_request\n"); );
    // Body
    return (Vysyx_22051013_rvcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22051013_rvcpu___024root___change_request_1(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22051013_rvcpu___024root___eval_debug_assertions(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
