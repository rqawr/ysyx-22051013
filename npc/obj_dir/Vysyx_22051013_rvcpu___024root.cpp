// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22051013_rvcpu.h for the primary calling header

#include "Vysyx_22051013_rvcpu___024root.h"
#include "Vysyx_22051013_rvcpu__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata, char rlen);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__ifu0__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__ifu0__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char rlen__Vcvt;
    for (size_t rlen__Vidx = 0; rlen__Vidx < 1; ++rlen__Vidx) rlen__Vcvt = rlen;
    pmem_read(raddr__Vcvt, &rdata__Vcvt, rlen__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void if_id_thepc(long long thepc_data, const svBitVecVal* the_inst);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__ifu0__DOT__if_id_thepc_TOP(QData/*63:0*/ thepc_data, IData/*31:0*/ the_inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__ifu0__DOT__if_id_thepc_TOP\n"); );
    // Body
    long long thepc_data__Vcvt;
    for (size_t thepc_data__Vidx = 0; thepc_data__Vidx < 1; ++thepc_data__Vidx) thepc_data__Vcvt = thepc_data;
    svBitVecVal the_inst__Vcvt[1];
    for (size_t the_inst__Vidx = 0; the_inst__Vidx < 1; ++the_inst__Vidx) VL_SET_SVBV_I(32, the_inst__Vcvt + 1 * the_inst__Vidx, the_inst);
    if_id_thepc(thepc_data__Vcvt, the_inst__Vcvt);
}

extern "C" void ebreak(svBit ebreak_ena);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__ebreak_TOP(CData/*0:0*/ ebreak_ena) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__ebreak_TOP\n"); );
    // Body
    svBit ebreak_ena__Vcvt;
    for (size_t ebreak_ena__Vidx = 0; ebreak_ena__Vidx < 1; ++ebreak_ena__Vidx) ebreak_ena__Vcvt = ebreak_ena;
    ebreak(ebreak_ena__Vcvt);
}

extern "C" void pmem_write(long long waddr, long long wdata, char wlen);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__lsu3__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__lsu3__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wlen__Vcvt;
    for (size_t wlen__Vidx = 0; wlen__Vidx < 1; ++wlen__Vidx) wlen__Vcvt = wlen;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wlen__Vcvt);
}

extern "C" void difftest_dut_regs(long long Z0, long long ra, long long sp, long long gp, long long tp, long long t0, long long t1, long long t2, long long fp, long long s1, long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long s2, long long s3, long long s4, long long s5, long long s6, long long s7, long long s8, long long s9, long long s10, long long a11, long long t3, long long t4, long long t5, long long t6);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__reg3__DOT__difftest_dut_regs_TOP(QData/*63:0*/ Z0, QData/*63:0*/ ra, QData/*63:0*/ sp, QData/*63:0*/ gp, QData/*63:0*/ tp, QData/*63:0*/ t0, QData/*63:0*/ t1, QData/*63:0*/ t2, QData/*63:0*/ fp, QData/*63:0*/ s1, QData/*63:0*/ a0, QData/*63:0*/ a1, QData/*63:0*/ a2, QData/*63:0*/ a3, QData/*63:0*/ a4, QData/*63:0*/ a5, QData/*63:0*/ a6, QData/*63:0*/ a7, QData/*63:0*/ s2, QData/*63:0*/ s3, QData/*63:0*/ s4, QData/*63:0*/ s5, QData/*63:0*/ s6, QData/*63:0*/ s7, QData/*63:0*/ s8, QData/*63:0*/ s9, QData/*63:0*/ s10, QData/*63:0*/ a11, QData/*63:0*/ t3, QData/*63:0*/ t4, QData/*63:0*/ t5, QData/*63:0*/ t6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__reg3__DOT__difftest_dut_regs_TOP\n"); );
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

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__1(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32;
    QData/*63:0*/ __Vtask_ysyx_22051013_rvcpu__DOT__ifu0__DOT__pmem_read__0__rdata;
    QData/*63:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32;
    // Body
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__i = 0x20U;
    }
    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__reg3__DOT__difftest_dut_regs_TOP(
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [1U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [2U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [3U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [4U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [5U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [6U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [7U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [8U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [9U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                                                [0x1fU]);
    if (vlSelf->rst) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__ifu0__DOT__if_id_thepc_TOP(0x80000000ULL, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst));
    } else {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__ifu0__DOT__if_id_thepc_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__if_id_pc, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst));
    }
    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__ifu0__DOT__pmem_read_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next, __Vtask_ysyx_22051013_rvcpu__DOT__ifu0__DOT__pmem_read__0__rdata, 8U);
    vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
        = __Vtask_ysyx_22051013_rvcpu__DOT__ifu0__DOT__pmem_read__0__rdata;
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v0 = 1U;
    } else if (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_ena) 
                & (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr)))) {
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32 
            = ((IData)(vlSelf->rst) ? 0ULL : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl))
                                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re)
                                                   ? 
                                                  ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                        ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word))
                                                        : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                        ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte))
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word)))
                                                        : 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half) 
                                                                                >> 0xfU))))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte) 
                                                                                >> 7U))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte)))
                                                        : 0ULL)))
                                                     : 0ULL))
                                                   : 0ULL)
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl))
                                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata
                                                   : 0ULL)));
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32 
            = vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm 
        = ((0x80000U & ((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                 >> 0x1fU)) << 0x13U)) 
           | ((0x7f800U & ((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                    >> 0xcU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                     >> 0x14U)) << 0xaU)) 
                 | (0x3ffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                      >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__s_imm 
        = ((0xfe0U & ((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                               >> 0x19U)) << 5U)) | 
           (0x1fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                             >> 7U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__b_imm 
        = ((0x800U & ((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                               >> 0x1fU)) << 0xbU)) 
           | ((0x400U & ((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                  >> 7U)) << 0xaU)) 
              | ((0x3f0U & ((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                     >> 0x19U)) << 4U)) 
                 | (0xfU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                    >> 8U))))));
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[1U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[2U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[3U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[4U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[5U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[6U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[7U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[8U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[9U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0xaU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0xbU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0xcU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0xdU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0xeU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0xfU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x10U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x11U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x12U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x13U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x14U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x15U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x16U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x17U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x18U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x19U] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x1aU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x1bU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x1cU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x1dU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x1eU] = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32] 
            = __Vdlyvval__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__if_id_pc = ((IData)(vlSelf->rst)
                                                   ? 0x80000000ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next);
}

extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_3685cfcf_0;

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___combo__TOP__3(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___combo__TOP__3\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    VlWide<4>/*127:0*/ __Vtemp4;
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal 
            = (IData)((0x1bU == (0x1fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                  >> 2U)))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                 >> 2U)))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                               >> 2U)))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr 
            = (IData)((0x19U == (0x1fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                  >> 2U)))));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type 
        = ((((IData)(vlSelf->rst) ? 0U : (IData)((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                              >> 2U)))))) 
            << 7U) | ((((IData)(vlSelf->rst) ? 0U : (IData)(
                                                            (0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                         >> 2U)))))) 
                       << 6U) | ((((IData)(vlSelf->rst)
                                    ? 0U : (IData)(
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                >> 2U)))))) 
                                  << 5U) | ((((IData)(vlSelf->rst)
                                               ? 0U
                                               : (IData)(
                                                         (4U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                      >> 2U)))))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                         >> 2U)))))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : (IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                            >> 2U)))))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->rst)
                                                        ? 0U
                                                        : (IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                               >> 2U)))))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->rst)
                                                         ? 0U
                                                         : (IData)(
                                                                   (8U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                                >> 2U)))))))))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc = ((IData)(vlSelf->rst)
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__if_id_pc);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl = (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (((((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x78U 
                                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type)))) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr)))
                                                     ? 2U
                                                     : 0U));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena 
        = (1U & ((IData)((0U != (0x7fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type)))) 
                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena 
        = (IData)((0U != (0x4dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm = (
                                                   (1U 
                                                    & ((IData)(
                                                               (0U 
                                                                != 
                                                                (0xb2U 
                                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type)))) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                                >> 0x14U))))))
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                                >> 0xcU)) 
                                                                        << 0xcU))))
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm 
                                                                              >> 0x13U))))) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        (0xfffffU 
                                                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm 
                                                                            << 1U)))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__b_imm) 
                                                                               >> 0xbU))))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (0xfffU 
                                                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__b_imm) 
                                                                             << 1U)))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__s_imm) 
                                                                                >> 0xbU))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__s_imm)))
                                                        : 0ULL)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sb 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0ULL == (0x7000ULL & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sh 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x1000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sw 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sd 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x3000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lb 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0ULL == (0x7000ULL & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lh 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x1000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lw 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ld 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x3000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lbu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x4000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lhu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x5000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lwu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x6000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_beq 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0ULL == (0x7000ULL & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bne 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x1000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_blt 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x4000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bge 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x5000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bltu 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x6000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bgeu 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x7000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_add 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0ULL == (0x42007000ULL 
                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sub 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x40000000ULL == (0x42007000ULL 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sll 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x1000ULL == (0x2007000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slt 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2000ULL == (0x2007000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sltu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x3000ULL == (0x2007000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_xor 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x4000ULL == (0x2007000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srl 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x5000ULL == (0x42007000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sra 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x40005000ULL == (0x42007000ULL 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_or 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x6000ULL == (0x2007000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_and 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x7000ULL == (0x2007000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_div 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2004000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2005000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mul 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2000000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulh 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2001000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhsu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2002000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2003000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_rem 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2006000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2007000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srai 
        = (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x40005000ULL == (0x40007000ULL 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0ULL == (0x7000ULL & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x1000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x5000ULL == (0x40007000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x40005000ULL == (0x40007000ULL 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0ULL == (0x42007000ULL 
                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_subw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x40000000ULL == (0x42007000ULL 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sllw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x1000ULL == (0x7000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srlw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x5000ULL == (0x42007000ULL 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x40005000ULL == (0x42007000ULL 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2005000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2004000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2000000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2007000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                         & (0x2006000ULL == (0x2007000ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ebreak 
        = (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                   & (0x100000ULL == (0xfff07000ULL 
                                      & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst))));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_ena 
        = ((0U != (0x1fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                    >> 7U)))) & (0U 
                                                 != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl)));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2 = ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                                     ? 
                                                    (((~ (IData)(vlSelf->rst)) 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                                      ? 
                                                     vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                     [
                                                     ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                                       ? 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                  >> 0x14U)))
                                                       : 0U)]
                                                      : 0ULL)
                                                     : 
                                                    ((1U 
                                                      & (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xb7U 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type)))) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc)))
                                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm
                                                      : 0ULL)));
    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__ebreak_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ebreak);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel 
        = ((((IData)(vlSelf->rst) ? 0U : (1U & ((((
                                                   (((((((((((1U 
                                                              & (IData)(
                                                                        ((0x10U 
                                                                          == 
                                                                          (0x10U 
                                                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                                         & (0x5000ULL 
                                                                            == 
                                                                            (0x40007000ULL 
                                                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst))))) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_xor)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addw)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraw)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ebreak)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sh)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sw)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bltu)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ld)) 
                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulh)) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_div)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divw)) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remu)) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remuw)))) 
            << 7U) | ((((IData)(vlSelf->rst) ? 0U : 
                        (1U & ((((((((((((((((1U & (IData)(
                                                           ((0x10U 
                                                             == 
                                                             (0x10U 
                                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                            & (0x1000ULL 
                                                               == 
                                                               (0x7000ULL 
                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst))))) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sltu)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_xor)) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui)) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraiw)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srlw)) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr)) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sb)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bge)) 
                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bltu)) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lw)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ld)) 
                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mul)) 
                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulw)) 
                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divuw)) 
                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_rem)))) 
                       << 6U) | ((((IData)(vlSelf->rst)
                                    ? 0U : (1U & ((
                                                   (((((((((((((((1U 
                                                                  & (IData)(
                                                                            ((0x10U 
                                                                              == 
                                                                              (0x10U 
                                                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                                             & (0x7000ULL 
                                                                                == 
                                                                                (0x7000ULL 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst))))) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slt)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sltu)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_and)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srliw)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sllw)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_blt)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bge)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bltu)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lh)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lw)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lwu)) 
                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulh)) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhu)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divu)))) 
                                  << 5U) | ((((IData)(vlSelf->rst)
                                               ? 0U
                                               : (1U 
                                                  & ((((((((((((((((((((1U 
                                                                        & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                                                & (0x6000ULL 
                                                                                == 
                                                                                (0x7000ULL 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst))))) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sll)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slt)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_or)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slliw)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addw)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_subw)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bne)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_blt)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bge)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lb)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lh)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ld)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lhu)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mul)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulh)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhu)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_div)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remw)))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  & ((((((((((((((((((((1U 
                                                                        & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                                                & (0x4000ULL 
                                                                                == 
                                                                                (0x7000ULL 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst))))) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sub)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sll)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sra)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_and)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addiw)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraiw)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraw)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_beq)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bne)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_blt)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bgeu)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lb)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lw)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lbu)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lwu)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mul)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulw)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_div)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divw)))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    (1U 
                                                     & (((((((((((((((((((((1U 
                                                                            & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                                                & (0x3000ULL 
                                                                                == 
                                                                                (0x7000ULL 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst))))) 
                                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_add)) 
                                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sub)) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srl)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_or)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srliw)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srlw)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ebreak)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sd)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_beq)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bne)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bgeu)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lh)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lhu)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lwu)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhu)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulw)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divuw)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divw)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remu)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remw)))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->rst)
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((((((((((((((((((((1U 
                                                                              & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                                                & (0x2000ULL 
                                                                                == 
                                                                                (0x7000ULL 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst))))) 
                                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srai)) 
                                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_add)) 
                                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sra)) 
                                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slliw)) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sllw)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sh)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sd)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_beq)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lb)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lbu)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lhu)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhsu)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhu)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divu)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divuw)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_rem)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remu)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remuw)))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->rst)
                                                         ? 0U
                                                         : 
                                                        (1U 
                                                         & ((((((((((((((((1U 
                                                                           & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0x7000ULL 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst))))) 
                                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srai)) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srl)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addiw)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_subw)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sb)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sw)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sd)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bgeu)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lbu)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhsu)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divu)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_rem)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remuw)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remw)))))))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_ena)
            ? (0x1fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                >> 7U))) : 0U);
    __Vtableidx1 = vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel;
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl = Vysyx_22051013_rvcpu__ConstPool__TABLE_3685cfcf_0
        [__Vtableidx1];
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 = ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                                     ? 
                                                    (((~ (IData)(vlSelf->rst)) 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                                      ? 
                                                     vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                                     [
                                                     ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                                       ? 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                                  >> 0xfU)))
                                                       : 0U)]
                                                      : 0ULL)
                                                     : 
                                                    (((0xa0U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)) 
                                                      | (0x21U 
                                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)))
                                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__if_id_pc
                                                      : 0ULL)));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re 
        = (1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl)))) 
                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl) 
                    >> 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sra_op2 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1, 
                         (0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)));
    VL_EXTEND_WQ(128,64, __Vtemp4, vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1);
    VL_EXTEND_WQ(128,64, __Vtemp5, vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2);
    VL_MUL_W(4, __Vtemp6, __Vtemp4, __Vtemp5);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U] 
        = __Vtemp6[0U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[1U] 
        = __Vtemp6[1U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[2U] 
        = __Vtemp6[2U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[3U] 
        = __Vtemp6[3U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div 
        = VL_DIV_QQQ(64, vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1, vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw 
        = VL_DIVS_III(32, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1), (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem 
        = VL_MODDIV_QQQ(64, vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1, vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw 
        = VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1), (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sllw 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1) 
           << (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__srlw 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1) 
           >> (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sraw 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1), 
                         (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
           + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
           - vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sllw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sllw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sllw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_srlw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__srlw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__srlw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sraw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sraw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sraw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next = 0x80000000ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__wlen = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_o = 0ULL;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next 
            = ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal) 
                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr)) 
                | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
                    >> 2U) & ((0xeU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                               ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                  == vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                               : ((0x1cU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                   ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                      != vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                   : ((0xe0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                       ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                          < vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                       : ((0xdU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                           ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                              >= vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                           : ((0x38U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                               ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2)
                                               : ((0x70U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)) 
                                                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2))))))))))
                ? ((1U & ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)) 
                          | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
                             >> 2U))) ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc 
                                         + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                    : ((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                        ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                           + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                        : 0ULL)) : ((IData)(vlSelf->rst)
                                     ? 0x80000000ULL
                                     : (4ULL + vlSelf->ysyx_22051013_rvcpu__DOT__if_id_pc)));
        vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
            = ((0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                ? ((0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                    ? ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                        ? 0ULL : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                   ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                    + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)))))
                                   : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                    ^ vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                             ? 0ULL
                                             : (((QData)((IData)(
                                                                 vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[2U])))))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2)))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div)))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_addw_op2))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw)))))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sraw_op2)))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem)))
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm))
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))))))))
                : ((0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                    ? ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                            ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                       ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                             ? 0ULL
                                             : (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm))))
                                       : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                             ? 0ULL
                                             : (QData)((IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                                < vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U]))))))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U])))))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sraw_op2)))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0ULL : 
                                           (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div))))
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_srlw_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem
                                            : (4ULL 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc))
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               << (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                           ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                   + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)))
                                           : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2))))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                   + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_srlw_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div
                                            : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sllw_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? (4ULL 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc)
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                   + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm))
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                   << 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0ULL : 
                                           (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                            + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm))
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw)))
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               | vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sllw_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2)))
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               | vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                                            : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sra_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_addw_op2
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               ^ vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                                            : vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))
                                            : (QData)((IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                               < vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sra_op2
                                            : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2)))
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2
                                            : 0ULL))))))));
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__wlen 
            = ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                ? 0U : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                         ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                             ? 0U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                      ? 0xffU : ((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                              >> 2U)))
                                                   ? 0xf0U
                                                   : 0xfU))))
                         : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                             ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                 ? 0U : ((IData)(vlSelf->rst)
                                          ? 0U : ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                               >> 1U))))
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                                >> 1U))))
                                                    ? 0xcU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                                 >> 1U))))
                                                     ? 0x30U
                                                     : 0xc0U)))))
                             : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                 ? ((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                            >> 2U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                   ? 0x80U
                                                   : 0x40U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                   ? 0x20U
                                                   : 0x10U))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                   ? 8U
                                                   : 4U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                   ? 2U
                                                   : 1U))))
                                 : 0U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_o 
            = ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                           ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                               ? 0ULL : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2
                                          : ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                             >> 2U)))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)) 
                                                  << 0x20U)
                                                  : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))))
                           : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                               ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                   ? 0ULL : ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                              >> 1U))))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                   << 0x10U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                    << 0x20U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                    << 0x30U))))))
                               : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                   ? ((IData)(vlSelf->rst)
                                       ? 0ULL : ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                             >> 2U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                    << 0x38U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                    << 0x30U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                    << 0x28U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                    << 0x20U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                    << 0x18U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                    << 0x10U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                    << 8U)
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))))))
                                   : 0ULL))));
    }
    if (vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__ifu0__DOT__pmem_read_TOP(
                                                                                ((IData)(vlSelf->rst)
                                                                                 ? 0ULL
                                                                                 : 
                                                                                (0xfffffffffffffff8ULL 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata)), vlSelf->__Vtask_ysyx_22051013_rvcpu__DOT__lsu3__DOT__pmem_read__4__rdata, 8U);
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
            = vlSelf->__Vtask_ysyx_22051013_rvcpu__DOT__lsu3__DOT__pmem_read__4__rdata;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i = 0ULL;
    }
    if ((1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl)))) 
               & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl) 
                     >> 3U))))) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__lsu3__DOT__pmem_write_TOP(
                                                                                ((IData)(vlSelf->rst)
                                                                                 ? 0ULL
                                                                                 : 
                                                                                (0xfffffffffffffff8ULL 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata)), vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_o, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__wlen));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word 
        = ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                          >> 2U))) ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                              >> 0x20U))
            : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                       >> 2U))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                     ? (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                                                >> 0x38U))
                                                     : (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                                                >> 0x30U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                     ? (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                                                >> 0x28U))
                                                     : (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                                                >> 0x20U))))
                         : ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                           >> 1U)))
                             ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                 ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                            >> 0x18U))
                                 : (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                            >> 0x10U)))
                             : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                 ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                            >> 8U))
                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i)))));
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half 
            = (0xffffU & ((0U == (3U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                >> 1U))))
                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i)
                           : ((1U == (3U & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                    >> 1U))))
                               ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                          >> 0x10U))
                               : ((2U == (3U & (IData)(
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                        >> 1U))))
                                   ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                              >> 0x20U))
                                   : (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                              >> 0x30U))))));
    }
}

void Vysyx_22051013_rvcpu___024root___eval(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22051013_rvcpu___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_22051013_rvcpu___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
