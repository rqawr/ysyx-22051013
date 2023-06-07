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

extern const VlWide<137>/*4383:0*/ Vysyx_22051013_rvcpu__ConstPool__CONST_ffd29b11_0;

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__1(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0;
    CData/*0:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_jump;
    CData/*1:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_wbctl;
    CData/*0:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena;
    CData/*3:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl;
    CData/*1:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt;
    CData/*1:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl;
    CData/*0:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok;
    CData/*0:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena;
    CData/*4:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend;
    VlWide<4>/*127:0*/ __Vtemp10;
    VlWide<4>/*127:0*/ __Vtemp87;
    VlWide<4>/*127:0*/ __Vtemp126;
    VlWide<137>/*4383:0*/ __Vtemp155;
    VlWide<5>/*159:0*/ __Vtemp160;
    VlWide<5>/*159:0*/ __Vtemp161;
    VlWide<5>/*159:0*/ __Vtemp162;
    VlWide<5>/*159:0*/ __Vtemp163;
    QData/*63:0*/ __Vtask_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_read__0__rdata;
    QData/*63:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc;
    QData/*63:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q;
    QData/*63:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus;
    QData/*63:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32;
    // Body
    __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena 
        = vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena;
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt;
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q;
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U];
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U];
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U];
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U];
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt;
    __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena 
        = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena;
    __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl 
        = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl;
    __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_wbctl 
        = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl;
    __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_jump 
        = vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump;
    __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl;
    __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr 
        = vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr;
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 = 0U;
    __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc = vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc;
    __Vdly__ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok 
        = vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 = 0U;
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus;
    vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__ifid_if_pc 
        = vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1 = 0U;
    if (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_inst_end_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc, vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst);
    }
    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__ebreak_TOP(
                                                                                (0x100073U 
                                                                                == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i = 0x20U;
    }
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
    __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena)
                                        : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena)));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc
                : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc);
        vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst
                : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst);
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                ? 1U : (3U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__mul_doing)
                               ? ((IData)(1U) + (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt))
                               : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt))));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__mul_doing 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid) 
                                       | ((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__mul_doing))));
    if (vlSelf->rst) {
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q = 0ULL;
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt = 0U;
    } else if (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing) 
                & (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt)))) {
        if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign) {
            __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
                = (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
                   << 1U);
            __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
                = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
                    >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
                                 << 1U));
            __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
                    >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                                 << 1U));
            __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                    >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                                 << 1U));
        } else {
            __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
                = (IData)(((0xfffffffffffffffeULL & 
                            (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                              << 0x21U) | ((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U])) 
                                           << 1U))) 
                           | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign))));
            __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
                = (IData)((((0xfffffffffffffffeULL 
                             & (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                 << 0x21U) | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U])) 
                                              << 1U))) 
                            | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign))) 
                           >> 0x20U));
            __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_dividend);
            __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_dividend 
                           >> 0x20U));
        }
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q 
            = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q 
                << 1U) | (QData)((IData)((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign))))));
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt 
            = (0x7fU & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt) 
                        - (IData)(1U)));
    } else if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid) {
        VL_EXTEND_WQ(128,64, __Vtemp10, ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)
                                          ? (1ULL + 
                                             (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp))
                                          : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp));
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
            = __Vtemp10[0U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
            = __Vtemp10[1U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
            = __Vtemp10[2U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
            = __Vtemp10[3U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q = 0ULL;
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt = 0x40U;
    } else {
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q;
        vlSelf->__Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt = 0U;
    }
    __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena)
                                        : ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena))));
    if (vlSelf->rst) {
        __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_wbctl = 0U;
    } else {
        __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl)
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl)));
        __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_wbctl 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl)
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl)));
    }
    __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_jump 
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
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_update 
        = ((~ (IData)(vlSelf->rst)) & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena)
                                        : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena)));
    if (vlSelf->rst) {
        __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr = 0U;
    } else {
        __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl)
                : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl));
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst
                : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst);
        __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr)
                : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update 
        = ((~ (IData)(vlSelf->rst)) & ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update 
        = ((~ (IData)(vlSelf->rst)) & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready)));
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc = 0ULL;
        __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc
                : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc);
        __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc 
            = ((1U & (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel))
                    ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc));
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr)
                : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr));
        vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl)
                : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw 
        = ((~ (IData)(vlSelf->rst)) & ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr 
        = ((~ (IData)(vlSelf->rst)) & ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp 
                = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mpp_set;
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie 
                = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mpie_set;
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie 
                = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mie_set;
        }
    }
    __Vdly__ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))));
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v0 = 1U;
    } else if (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena) 
                & (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr)))) {
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 
            = vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data;
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 
            = vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr;
    }
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
    if (vlSelf->rst) {
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena)))) {
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus;
    }
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
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall 
        = ((~ (IData)(vlSelf->rst)) & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid))) 
                                       & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2))) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall))));
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
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[0U] 
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
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[1U] 
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
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[2U] 
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
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[3U] 
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
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0 
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm = 0ULL;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc 
            = ((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                          >> 3U)) | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                     >> 1U))) ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data
                : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc);
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
            = (0x3fffffffffffffffULL & (((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                         & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                            >> 3U))
                                         ? (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                            >> 2U) : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base));
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause 
            = (((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                   >> 3U)) ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data
                : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value
                    : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm));
    }
    if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
          : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
              ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
              : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))) {
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp87[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp87[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp87[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp87[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp126[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp126[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp126[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp126[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp87[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp87[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp87[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp87[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp126[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp126[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp126[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp126[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[0U] 
            = ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U]
                  : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[0U]
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                          ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                              : 0U) : 0U))) & __Vtemp87[0U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][0U] 
                  & (~ __Vtemp126[0U])));
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[1U] 
            = ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U]
                  : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[1U]
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                         >> 0x20U))
                              : 0U) : 0U))) & __Vtemp87[1U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][1U] 
                  & (~ __Vtemp126[1U])));
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[2U] 
            = ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U]
                  : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U]
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                          ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                              : 0U) : 0U))) & __Vtemp87[2U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][2U] 
                  & (~ __Vtemp126[2U])));
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[3U] 
            = ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U]
                  : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[3U]
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                         >> 0x20U))
                              : 0U) : 0U))) & __Vtemp87[3U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][3U] 
                  & (~ __Vtemp126[3U])));
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0 
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
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
         | ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
         | ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
         | ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
         | ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
    if (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
         & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0 
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
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata
                                           : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata));
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
    }
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
    }
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
    }
    if ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
          & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                   >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                >> 3U)));
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[0U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[1U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[2U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[3U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[4U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1[0U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1[1U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1[2U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1[3U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1[4U] = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[0U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[0U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[1U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[1U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[2U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[2U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[3U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[4U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[4U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1[0U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[0U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1[1U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[1U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1[2U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[2U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1[3U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U];
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1[4U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[4U];
    }
    if (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
         & ((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0 
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
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state = 1U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata = 0ULL;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state 
            = vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state_next;
        vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re) 
                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                    : 0ULL));
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid)
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i
                    : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                        ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i
                        : vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data))
                : 0ULL);
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata
                : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena = 
        (1U & ((~ (IData)(vlSelf->rst)) & ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)
                                            : ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                                  >> 1U)))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2 = 0ULL;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0U : ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr 
            = (0x1fU & ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr)
                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                             ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                      ? (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                         >> 7U) : 0U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)
                : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl));
        vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
            = ((1U & (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel))
                    ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1));
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
                : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2);
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready))
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                        ? ((0x58U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo
                            : ((((0xb0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                 | (0x26U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                | (0x13U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                    ? (((QData)((IData)(
                                                        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[2U])))
                                    : 0ULL) : ((0x4cU 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo)))
                                                : 0ULL)))
                        : 0ULL) : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp)
                : 0ULL);
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready))
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                        ? (((((0x98U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                              | (0x23U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                             | (0x8cU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                            | (0x46U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo
                                : 0ULL) : (((((0x43U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                              | (0x86U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                             | (0x15U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                            | (0x83U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                                ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem
                                                : 0ULL)
                                            : 0ULL))
                        : 0ULL) : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp)
                : 0ULL);
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall 
        = ((~ (IData)(vlSelf->rst)) & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid))) 
                                       & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1))) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel 
        = ((IData)(vlSelf->rst) ? 0U : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                                             ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2_1 
        = (1U & ((~ (IData)(vlSelf->rst)) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_c 
                                             >> 0x1eU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_cin 
        = (1U & ((~ (IData)(vlSelf->rst)) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_c 
                                             >> 0x1fU)));
    VL_COND_WIWW(4356,1,4356,4356, __Vtemp155, (IData)(vlSelf->rst), Vysyx_22051013_rvcpu__ConstPool__CONST_ffd29b11_0, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i);
    VL_ASSIGN_W(4356,vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add, __Vtemp155);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt;
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q;
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U];
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena 
        = __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena;
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl 
        = __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_wbctl;
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl;
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena 
        = __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena;
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr 
        = __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr;
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v0) {
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
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32] 
            = __Vdlyvval__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus;
    vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump 
        = __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_jump;
    vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc = __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc;
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[0U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[1U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[2U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[0U];
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[1U];
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[2U];
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0] = 1U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1] = 0U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0] = 0U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1] = 1U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0] = 1U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1] = 0U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0] = 1U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1] = 0U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0] = 1U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1] = 0U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0] = 0U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1] = 1U;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok 
        = __Vdly__ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok;
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl 
        = __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl;
    if (vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid) {
        if (vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid) {
            vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag = 0U;
        }
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state = 1U;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state 
            = vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state_next;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state 
            = vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state_next;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__mul_doing) 
           & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid) 
                                       | (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr 
        = ((0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
            ? (0xfffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
            : 0U);
    if ((0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__difftest_dut_csr_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus, 
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
                                                                                << 2U), vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data 
        = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram
           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                              >> 3U)))]);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild 
        = (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram
                 [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                    >> 3U)))] >> 0x17U));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data 
        = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram
           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                              >> 3U)))]);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild 
        = (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram
                 [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                    >> 3U)))] >> 0x17U));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state = 1U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state = 1U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state 
            = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state 
            = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data 
        = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram
           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                              >> 3U)))]);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild 
        = (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram
                 [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                    >> 3U)))] >> 0x17U));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data 
        = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram
           [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                              >> 3U)))]);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild 
        = (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram
                 [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                    >> 3U)))] >> 0x17U));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data = 
        ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
          ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data
          : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word 
        = ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                          >> 2U))) ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                              >> 0x20U))
            : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm 
        = ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                            >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm 
        = ((0xfe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 7U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm 
        = ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1, 
                         (0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1) 
           << (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1) 
           >> (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1), 
                         (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
           + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
           - vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)));
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
    __Vtemp160[0U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[0U] 
                       << 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2_1));
    __Vtemp160[1U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[0U] 
                       >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[1U] 
                                    << 1U));
    __Vtemp160[2U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[1U] 
                       >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[2U] 
                                    << 1U));
    __Vtemp160[3U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[2U] 
                       >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[3U] 
                                    << 1U));
    __Vtemp160[4U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[3U] 
                       >> 0x1fU) | (0xeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[4U] 
                                            << 1U)));
    VL_ADD_W(5, __Vtemp161, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1, __Vtemp160);
    VL_EXTEND_WI(132,1, __Vtemp162, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_cin));
    VL_ADD_W(5, __Vtemp163, __Vtemp161, __Vtemp162);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[0U] 
        = __Vtemp163[0U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[1U] 
        = __Vtemp163[1U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[2U] 
        = __Vtemp163[2U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[3U] 
        = __Vtemp163[3U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[4U] 
        = (0xfU & __Vtemp163[4U]);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_c 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_carry));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                       >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                 >> 4U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 4U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 3U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                        >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                  >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 6U))) 
                     | (0x3fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 5U)))) 
                    | (0x1fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                    >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                              >> 8U))) 
                     | (0xfffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 7U)))) 
                    | (0x7ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x1ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                    >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0xaU))) 
                     | (0x3ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 9U)))) 
                    | (0x1ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x7fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0xcU))) 
                        | (0xffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                        >> 0xbU)))) 
                       | (0x7fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x1ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0xeU))) 
                        | (0x3ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                        >> 0xdU)))) 
                       | (0x1ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x10U))) 
                        | (0xffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0xfU)))) 
                       | (0x7fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x1f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x12U))) 
                        | (0x3f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0x11U)))) 
                       | (0x1f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x700U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x14U))) 
                         | (0xf00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0x14U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0x13U)))) 
                        | (0x700U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & ((0x200U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                     << 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0x16U)) 
                                   | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0x16U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0x15U)))) 
                        | (0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                      << 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                           << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                     << 8U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                 << 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                   << 9U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                            << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                      << 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                      >> 5U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                >> 4U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                           >> 3U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                    >> 7U)) ^ (0x3fffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 6U))) 
                    ^ (0x7fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7ffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                   >> 9U)) ^ (0xfffffcU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 8U))) 
                    ^ (0x1fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x1ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                   >> 0xbU)) ^ (0x3ffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0xaU))) 
                    ^ (0x7ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                    >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x7fff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 0xdU)) ^ (0xffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                     >> 0xcU))) 
                       ^ (0x1ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x1ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 0xfU)) ^ (0x3ffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                     >> 0xeU))) 
                       ^ (0x7ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7fc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                    >> 0x11U)) ^ (0xffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                     >> 0x10U))) 
                       ^ (0x1ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x1f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                    >> 0x13U)) ^ (0x3f80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                     >> 0x12U))) 
                       ^ (0x7f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x700U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                    >> 0x15U)) ^ (0xf00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                     >> 0x14U))) 
                        ^ (0x1f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                          << 9U) ^ (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                              >> 0x16U))) 
                        ^ (0x600U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                         << 7U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                         << 8U))) ^ 
                        (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                        << 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                       >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                 >> 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 3U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 2U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                        >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                  >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 5U))) 
                     | (0x7fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                       >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 4U)))) 
                    | (0x3fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xfffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                    >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                              >> 7U))) 
                     | (0x1fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                       >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 6U)))) 
                    | (0xfffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x3ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                    >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 9U))) 
                     | (0x7ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 8U)))) 
                    | (0x3ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0xbU))) 
                        | (0x1ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                         >> 0xaU)))) 
                       | (0xffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x3ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0xdU))) 
                        | (0x7ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                        >> 0xcU)))) 
                       | (0x3ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0xfU))) 
                        | (0x1ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                        >> 0xeU)))) 
                       | (0xffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x3f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x11U))) 
                        | (0x7f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                       >> 0x10U)))) 
                       | (0x3f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xf00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x13U))) 
                         | (0x1f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                        >> 0x13U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                        >> 0x12U)))) 
                        | (0xf00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x200U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x15U))) 
                         | (0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                       >> 0x15U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                       >> 0x14U)))) 
                        | (0x200U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      >> 0x16U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                           << 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                     << 9U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 << 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   << 0xaU))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                            << 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                      << 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                      >> 4U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                >> 3U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                           >> 2U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                    >> 6U)) ^ (0x7fffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 5U))) 
                    ^ (0xffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xfffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                   >> 8U)) ^ (0x1fffffcU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 7U))) 
                    ^ (0x3fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x3ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                   >> 0xaU)) ^ (0x7ffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 9U))) 
                    ^ (0xfffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                    >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 0xcU)) ^ (0x1ffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                     >> 0xbU))) 
                       ^ (0x3ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                       >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x3ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 0xeU)) ^ (0x7ffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                     >> 0xdU))) 
                       ^ (0xfffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                    >> 0x10U)) ^ (0x1ffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                     >> 0xfU))) 
                       ^ (0x3ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x3f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                    >> 0x12U)) ^ (0x7f80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                     >> 0x11U))) 
                       ^ (0xff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xf00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                    >> 0x14U)) ^ (0x1f00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                     >> 0x13U))) 
                        ^ (0x3f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                    >> 0x16U)) ^ (0x600U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                     >> 0x15U))) 
                        ^ (0xe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                         << 8U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                         << 9U))) ^ 
                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                         << 0xaU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                       >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                 >> 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                             >> 2U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 1U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                        >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                  >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                     >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 4U))) 
                     | (0xffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 3U)))) 
                    | (0x7fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                     >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 6U))) 
                     | (0x3fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 5U)))) 
                    | (0x1fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x7ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                    >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 8U))) 
                     | (0xfffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 7U)))) 
                    | (0x7ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                     >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x1ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 0xbU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0xaU))) 
                        | (0x3ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                         >> 9U)))) 
                       | (0x1ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0xcU))) 
                        | (0xfffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                        >> 0xbU)))) 
                       | (0x7ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0xeU))) 
                        | (0x3ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                        >> 0xdU)))) 
                       | (0x1ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x7f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                     >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0x10U))) 
                        | (0xff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 0xfU)))) 
                       | (0x7f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x1f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0x12U))) 
                         | (0x3f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                        >> 0x12U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                        >> 0x11U)))) 
                        | (0x1f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0x14U))) 
                         | (0xe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 0x14U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 0x13U)))) 
                        | (0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xfffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                          << 9U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                          << 0xaU))) 
                         | (0x400U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                       << 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0x15U)))) 
                        | (0x400U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                      << 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                      >> 3U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                >> 2U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                           >> 1U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                    >> 5U)) ^ (0xffffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 4U))) 
                    ^ (0x1ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                    >> 7U)) ^ (0x3fffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 6U))) 
                    ^ (0x7fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                     >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x7ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                   >> 9U)) ^ (0xfffff8U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 8U))) 
                    ^ (0x1fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                     >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x1ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 0xbU)) ^ (0x3ffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                      >> 0xaU))) 
                       ^ (0x7ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                     >> 0xdU)) ^ (0xfffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                     >> 0xcU))) 
                       ^ (0x1fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                       >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                     >> 0xfU)) ^ (0x3ffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                     >> 0xeU))) 
                       ^ (0x7ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x7f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                    >> 0x11U)) ^ (0xff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                     >> 0x10U))) 
                       ^ (0x1ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x1f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                     >> 0x13U)) ^ (0x3f00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                      >> 0x12U))) 
                        ^ (0x7f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x600U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                    >> 0x15U)) ^ (0xe00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                     >> 0x14U))) 
                        ^ (0x1e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                         << 9U)) ^ 
                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                          << 0xaU)) ^ (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                       >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                 >> 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                             >> 1U) 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U])) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                     >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 3U))) 
                     | (0x1ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                        >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 2U)))) 
                    | (0xffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                     >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 5U))) 
                     | (0x7fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                       >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 4U)))) 
                    | (0x3fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xfffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                    >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 7U))) 
                     | (0x1fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                       >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 6U)))) 
                    | (0xfffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                     >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x3ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                       >> 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 9U))) 
                        | (0x7ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 8U)))) 
                       | (0x3ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xfffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0xbU))) 
                        | (0x1fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                         >> 0xaU)))) 
                       | (0xfffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x3ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0xdU))) 
                        | (0x7ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                        >> 0xcU)))) 
                       | (0x3ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0xff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                     >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0xfU))) 
                        | (0x1ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                        >> 0xeU)))) 
                       | (0xff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x3f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0x11U))) 
                         | (0x7f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                        >> 0x11U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                        >> 0x10U)))) 
                        | (0x3f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                       >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0x13U))) 
                         | (0x1e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                        >> 0x13U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                        >> 0x12U)))) 
                        | (0xe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((0x400U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                     << 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x15U)) 
                                   | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                       >> 0x15U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                       >> 0x14U)))) 
                        | (0xc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      << 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                      >> 2U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                >> 1U)) ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U])));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                    >> 4U)) ^ (0x1ffffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 3U))) 
                    ^ (0x3ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x3fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                    >> 6U)) ^ (0x7fffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 5U))) 
                    ^ (0xffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                     >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xfffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                   >> 8U)) ^ (0x1fffff8U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 7U))) 
                    ^ (0x3fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                     >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x3ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 0xaU)) ^ (0x7ffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                      >> 9U))) 
                       ^ (0xfffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                       >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xfffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                     >> 0xcU)) ^ (0x1fffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                     >> 0xbU))) 
                       ^ (0x3fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                       >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x3ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                     >> 0xeU)) ^ (0x7ffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                     >> 0xdU))) 
                       ^ (0xfffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                    >> 0x10U)) ^ (0x1ff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                     >> 0xfU))) 
                       ^ (0x3ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x3f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                     >> 0x12U)) ^ (0x7f00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                      >> 0x11U))) 
                        ^ (0xff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                    >> 0x14U)) ^ (0x1e00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                     >> 0x13U))) 
                        ^ (0x3e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                          << 0xaU) ^ (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x15U))) 
                        ^ (0xc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                       >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U]) 
                     | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                        & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                           >> 0x1fU))) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                           >> 1U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                           >> 0x1fU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 2U))) 
                     | (0x3ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 1U)))) 
                    | (0x1ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                     >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 4U))) 
                     | (0xffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 3U)))) 
                    | (0x7fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x1fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                     >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 6U))) 
                     | (0x3fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 5U)))) 
                    | (0x1fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x7ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 8U))) 
                        | (0xfffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 7U)))) 
                       | (0x7ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x1fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 0xbU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0xaU))) 
                        | (0x3fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                         >> 9U)))) 
                       | (0x1fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 0xcU))) 
                        | (0xfffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 0xbU)))) 
                       | (0x7ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x1ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 0xeU))) 
                        | (0x3ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 0xdU)))) 
                       | (0x1ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x7f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0x10U))) 
                         | (0xff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 0x10U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 0xfU)))) 
                        | (0x7f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x1e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0x12U))) 
                         | (0x3e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 0x12U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 0x11U)))) 
                        | (0x1e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x400U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 0x14U))) 
                         | (0xc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 0x14U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 0x13U)))) 
                        | (0x400U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                      >> 1U) ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U]) 
                    ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                       >> 0x1fU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                     >> 3U)) ^ (0x3ffffffeU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 2U))) 
                    ^ (0x7ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                    >> 5U)) ^ (0xffffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 4U))) 
                    ^ (0x1ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x1fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                    >> 7U)) ^ (0x3fffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 6U))) 
                    ^ (0x7fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                     >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x7ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 9U)) ^ (0xfffff0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                    >> 8U))) 
                       ^ (0x1fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x1fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 0xbU)) ^ (0x3fffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                      >> 0xaU))) 
                       ^ (0x7fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                     >> 0xdU)) ^ (0xfffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                     >> 0xcU))) 
                       ^ (0x1fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x1ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                     >> 0xfU)) ^ (0x3ff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                     >> 0xeU))) 
                       ^ (0x7ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x7f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                     >> 0x11U)) ^ (0xff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                      >> 0x10U))) 
                        ^ (0x1ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                       >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x1e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                     >> 0x13U)) ^ (0x3e00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                      >> 0x12U))) 
                        ^ (0x7e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                    >> 0x15U)) ^ (0xc00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                     >> 0x14U))) 
                        ^ (0x1c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                         >> 0x1fU)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 0x1fU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 0x1eU))) 
                    | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                          >> 0x1eU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 1U))) 
                     | (0x7ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U]))) 
                    | (0x3ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                     >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 3U))) 
                     | (0x1ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 2U)))) 
                    | (0xffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x3fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                     >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 5U))) 
                     | (0x7fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 4U)))) 
                    | (0x3fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xfffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 7U))) 
                        | (0x1fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                          >> 6U)))) 
                       | (0xfffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x3fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 9U))) 
                        | (0x7fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 8U)))) 
                       | (0x3fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xfffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 0xbU))) 
                        | (0x1fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                         >> 0xaU)))) 
                       | (0xfffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x3ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 0xdU))) 
                        | (0x7ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 0xcU)))) 
                       | (0x3ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0xfU))) 
                         | (0x1ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                         >> 0xfU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                         >> 0xeU)))) 
                        | (0xff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x3e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0x11U))) 
                         | (0x7e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 0x11U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 0x10U)))) 
                        | (0x3e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 0x13U))) 
                         | (0x1c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 0x13U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 0x12U)))) 
                        | (0xc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s)) 
           | (1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                     ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                        >> 0x1fU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 0x1eU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                     >> 2U)) ^ (0x7ffffffeU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 1U))) 
                    ^ (0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                    >> 4U)) ^ (0x1ffffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 3U))) 
                    ^ (0x3ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x3fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                    >> 6U)) ^ (0x7fffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 5U))) 
                    ^ (0xffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                     >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xfffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 8U)) ^ (0x1fffff0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                    >> 7U))) 
                       ^ (0x3fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                        >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x3fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 0xaU)) ^ (0x7fffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                      >> 9U))) 
                       ^ (0xffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xfffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                     >> 0xcU)) ^ (0x1fffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                     >> 0xbU))) 
                       ^ (0x3fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x3ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                     >> 0xeU)) ^ (0x7ff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                     >> 0xdU))) 
                       ^ (0xfff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                     >> 0x10U)) ^ (0x1ff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                      >> 0xfU))) 
                        ^ (0x3ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                       >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x3e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                     >> 0x12U)) ^ (0x7e00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                      >> 0x11U))) 
                        ^ (0xfe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                    >> 0x14U)) ^ (0x1c00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                     >> 0x13U))) 
                        ^ (0x3c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                       >> 0x1fU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                    >> 0x1eU)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                   >> 0x1eU) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                     >> 0x1dU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                        >> 0x1fU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                     >> 0x1dU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U])) 
                     | (0xfffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                          << 1U)))) 
                    | (0x7ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 2U))) 
                     | (0x3ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 1U)))) 
                    | (0x1ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x7fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                     >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 4U))) 
                     | (0xffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 3U)))) 
                    | (0x7fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x1fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 6U))) 
                        | (0x3fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                          >> 5U)))) 
                       | (0x1fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 8U))) 
                        | (0xffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 7U)))) 
                       | (0x7fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 0xbU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0xaU))) 
                        | (0x3fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                         >> 9U)))) 
                       | (0x1fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x7ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 0xcU))) 
                        | (0xfff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 0xbU)))) 
                       | (0x7ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x1ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0xeU))) 
                         | (0x3ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                         >> 0xeU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                         >> 0xdU)))) 
                        | (0x1ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x7e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0x10U))) 
                         | (0xfe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 0x10U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 0xfU)))) 
                        | (0x7e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x1c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0x12U))) 
                         | (0x3c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 0x12U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 0x11U)))) 
                        | (0x1c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                      >> 0x1fU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                   >> 0x1eU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                 >> 0x1dU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                     >> 1U)) ^ (0xfffffffeU 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U])) 
                    ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                       << 1U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                     >> 3U)) ^ (0x3ffffffcU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 2U))) 
                    ^ (0x7ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x7fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                    >> 5U)) ^ (0xffffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 4U))) 
                    ^ (0x1ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x1fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 7U)) ^ (0x3fffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                     >> 6U))) 
                       ^ (0x7fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 9U)) ^ (0xffffe0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                    >> 8U))) 
                       ^ (0x1ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                        >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 0xbU)) ^ (0x3fffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                      >> 0xaU))) 
                       ^ (0x7fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x7ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                     >> 0xdU)) ^ (0xfff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                     >> 0xcU))) 
                       ^ (0x1fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x1ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 0xfU)) ^ (0x3ff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                      >> 0xeU))) 
                        ^ (0x7ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x7e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                     >> 0x11U)) ^ (0xfe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                      >> 0x10U))) 
                        ^ (0x1fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                       >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x1c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                     >> 0x13U)) ^ (0x3c00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                      >> 0x12U))) 
                        ^ (0x7c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                       >> 0x1eU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                    >> 0x1dU)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                   >> 0x1dU) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                     >> 0x1cU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                        >> 0x1eU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                     >> 0x1cU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xfffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        << 1U))) | 
                     (2U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                             << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 0x1eU)))) 
                    | (2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                >> 0x1eU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                      >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                >> 1U))) 
                     | (0x7ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U]))) 
                    | (0x3ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                     >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                               >> 3U))) 
                     | (0x1ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                  >> 2U)))) 
                    | (0xffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                      >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x3fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                  >> 5U))) 
                        | (0x7fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                          >> 4U)))) 
                       | (0x3fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                   >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                 >> 7U))) 
                        | (0x1ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                          >> 6U)))) 
                       | (0xffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                  >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x3fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                   >> 9U))) 
                        | (0x7fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                   >> 8U)))) 
                       | (0x3fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0xfff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                      >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                  >> 0xbU))) 
                        | (0x1fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                         >> 0xaU)))) 
                       | (0xfff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                   >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x3ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                   >> 0xdU))) 
                         | (0x7ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                         >> 0xdU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                         >> 0xcU)))) 
                        | (0x3ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xfe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                   >> 0xfU))) 
                         | (0x1fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                         >> 0xfU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                         >> 0xeU)))) 
                        | (0xfe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x3c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                   >> 0x11U))) 
                         | (0x7c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 0x11U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 0x10U)))) 
                        | (0x3c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                      >> 0x1eU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                   >> 0x1dU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                 >> 0x1cU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U]) 
                     ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                        << 1U)) ^ (2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                         >> 0x1eU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x3ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                     >> 2U)) ^ (0x7ffffffcU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                   >> 1U))) 
                    ^ (0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                    >> 4U)) ^ (0x1ffffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                  >> 3U))) 
                    ^ (0x3ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                      >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x3fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 6U)) ^ (0x7fffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                     >> 5U))) 
                       ^ (0xffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                      >> 8U)) ^ (0x1ffffe0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                    >> 7U))) 
                       ^ (0x3ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x3fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                      >> 0xaU)) ^ (0x7fffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                      >> 9U))) 
                       ^ (0xffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xfff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                     >> 0xcU)) ^ (0x1fff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                     >> 0xbU))) 
                       ^ (0x3fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x3ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                      >> 0xeU)) ^ (0x7ff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                      >> 0xdU))) 
                        ^ (0xfff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                     >> 0x10U)) ^ (0x1fe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                      >> 0xfU))) 
                        ^ (0x3fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                       >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x3c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                     >> 0x12U)) ^ (0x7c00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                      >> 0x11U))) 
                        ^ (0xfc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                      >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                       >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                    >> 0x1cU)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                   >> 0x1cU) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                     >> 0x1bU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                        >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                     >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)) 
           | (2U & ((2U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                             << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 0x1eU)) | 
                           ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                             >> 0x1eU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                          >> 0x1dU)))) 
                    | (6U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                              << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 0x1dU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                      >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU])) 
                     | (0xfffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                          << 1U)))) 
                    | (0x7ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x1ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                      >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                >> 2U))) 
                     | (0x3ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                  >> 1U)))) 
                    | (0x1ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                 >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x7fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                  >> 4U))) 
                        | (0xffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                          >> 3U)))) 
                       | (0x7fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                   >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x1ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                  >> 6U))) 
                        | (0x3ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                          >> 5U)))) 
                       | (0x1ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                   >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                 >> 8U))) 
                        | (0xffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                   >> 7U)))) 
                       | (0x7fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                  >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x1fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 0xbU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                   >> 0xaU))) 
                        | (0x3fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                         >> 9U)))) 
                       | (0x1fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x7ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                   >> 0xcU))) 
                         | (0xfff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                         >> 0xcU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                         >> 0xbU)))) 
                        | (0x7ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x1fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                   >> 0xeU))) 
                         | (0x3fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                         >> 0xeU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                         >> 0xdU)))) 
                        | (0x1fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x7c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                   >> 0x10U))) 
                         | (0xfc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 0x10U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 0xfU)))) 
                        | (0x7c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                      >> 0x1dU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                   >> 0x1cU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                 >> 0x1bU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                      << 1U) ^ (2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                      >> 0x1eU))) ^ 
                    (6U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                           >> 0x1dU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                     >> 1U)) ^ (0xfffffffcU 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU])) 
                    ^ (0xfffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                      << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x1ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                     >> 3U)) ^ (0x3ffffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                   >> 2U))) 
                    ^ (0x7ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                      >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x7fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 5U)) ^ (0xffffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                     >> 4U))) 
                       ^ (0x1ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                         >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x1ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 7U)) ^ (0x3ffffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                     >> 6U))) 
                       ^ (0x7ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                      >> 9U)) ^ (0xffffc0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                    >> 8U))) 
                       ^ (0x1ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x1fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                      >> 0xbU)) ^ (0x3fff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                      >> 0xaU))) 
                       ^ (0x7fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x7ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                      >> 0xdU)) ^ (0xfff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                      >> 0xcU))) 
                        ^ (0x1fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                        >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x1fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                      >> 0xfU)) ^ (0x3fe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                      >> 0xeU))) 
                        ^ (0x7fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x7c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                     >> 0x11U)) ^ (0xfc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                                      >> 0x10U))) 
                        ^ (0x1fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7fU] 
                                       >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                       >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                    >> 0x1bU)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                     >> 0x1aU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                        >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                     >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((2U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                             >> 0x1eU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                          >> 0x1dU))) 
                     | (6U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                               >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                            >> 0x1cU)))) 
                    | (2U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                              >> 0x1eU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                           >> 0x1cU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                         << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                     << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                               << 2U))) 
                    | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                          << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x3ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                      >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                >> 1U))) 
                     | (0x7ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU]))) 
                    | (0x3ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                  >> 3U))) 
                        | (0x1ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                           >> 2U)))) 
                       | (0xffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                   >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x3ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                  >> 5U))) 
                        | (0x7ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                          >> 4U)))) 
                       | (0x3ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                   >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                 >> 7U))) 
                        | (0x1ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                          >> 6U)))) 
                       | (0xffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                  >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x3fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                   >> 9U))) 
                        | (0x7fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                   >> 8U)))) 
                       | (0x3fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xfff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                   >> 0xbU))) 
                         | (0x1fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                          >> 0xbU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                            >> 0xaU)))) 
                        | (0xfff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x3fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                   >> 0xdU))) 
                         | (0x7fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                         >> 0xdU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                         >> 0xcU)))) 
                        | (0x3fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xfc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                   >> 0xfU))) 
                         | (0x1fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                         >> 0xfU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                         >> 0xeU)))) 
                        | (0xfc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                      >> 0x1cU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                   >> 0x1bU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                 >> 0x1aU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                            >> 0x1eU)) ^ (6U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                >> 0x1dU))) 
                    ^ (0xeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                               >> 0x1cU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU]) 
                     ^ (0xfffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       << 1U))) ^ (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                   << 2U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x3ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                     >> 2U)) ^ (0x7ffffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                   >> 1U))) 
                    ^ (0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 4U)) ^ (0x1ffffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                     >> 3U))) 
                       ^ (0x3ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                         >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x3ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 6U)) ^ (0x7ffffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                     >> 5U))) 
                       ^ (0xfffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                      >> 8U)) ^ (0x1ffffc0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                    >> 7U))) 
                       ^ (0x3ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x3fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                      >> 0xaU)) ^ (0x7fff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                      >> 9U))) 
                       ^ (0xffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xfff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                      >> 0xcU)) ^ (0x1fff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                      >> 0xbU))) 
                        ^ (0x3fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                        >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x3fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                      >> 0xeU)) ^ (0x7fe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                      >> 0xdU))) 
                        ^ (0xffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                     >> 0x10U)) ^ (0x1fc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                                      >> 0xfU))) 
                        ^ (0x3fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7eU] 
                                       >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                       >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                    >> 0x1aU)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                   >> 0x1aU) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                     >> 0x19U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                        >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                     >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((6U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                             >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                          >> 0x1cU))) 
                     | (0xeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                 >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                              >> 0x1bU)))) 
                    | (6U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                              >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                           >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xfffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                      << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                << 2U))) 
                     | (4U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                               << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                         >> 0x1dU)))) 
                    | (4U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                              << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 0x1dU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x7ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                      >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU])) 
                     | (0xfffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                          << 1U)))) 
                    | (0x7ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                       >> 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x1ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 3U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                   >> 2U))) 
                        | (0x3ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                           >> 2U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                           >> 1U)))) 
                       | (0x1ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                          >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                  >> 4U))) 
                        | (0xfffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                          >> 3U)))) 
                       | (0x7ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                   >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                  >> 6U))) 
                        | (0x3ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                          >> 5U)))) 
                       | (0x1ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                   >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x7fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                       >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                 >> 8U))) 
                        | (0xffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                   >> 7U)))) 
                       | (0x7fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                  >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x1fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 0xaU))) 
                         | (0x3fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                          >> 0xaU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                            >> 9U)))) 
                        | (0x1fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x7fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                   >> 0xcU))) 
                         | (0xffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 0xcU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 0xbU)))) 
                        | (0x7fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x1fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                   >> 0xeU))) 
                         | (0x3fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 0xeU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 0xdU)))) 
                        | (0x1fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                      >> 0x1bU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                   >> 0x1aU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                 >> 0x19U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((6U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                            >> 0x1dU)) ^ (0xeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                  >> 0x1cU))) 
                    ^ (0x1eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xfffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                     << 1U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                << 2U)) 
                    ^ (4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                             >> 0x1dU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x7ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                     >> 1U)) ^ (0xfffffff8U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU])) 
                    ^ (0xfffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                      << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x1ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 3U)) ^ (0x3ffffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                      >> 2U))) 
                       ^ (0x7ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                       >> 5U)) ^ (0xfffffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                     >> 4U))) 
                       ^ (0x1fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                         >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                       >> 7U)) ^ (0x3ffffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                     >> 6U))) 
                       ^ (0x7ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x7fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                      >> 9U)) ^ (0xffff80U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                    >> 8U))) 
                       ^ (0x1ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x1fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                       >> 0xbU)) ^ 
                         (0x3fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                       >> 0xaU))) ^ 
                        (0x7fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                      >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x7fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                      >> 0xdU)) ^ (0xffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                      >> 0xcU))) 
                        ^ (0x1ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                        >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x1fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                      >> 0xfU)) ^ (0x3fc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                                      >> 0xeU))) 
                        ^ (0x7fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7dU] 
                                       >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                       >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                    >> 0x19U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                   >> 0x19U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                     >> 0x18U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                        >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                     >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                               >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                            >> 0x1bU))) 
                     | (0x1eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                  >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                               >> 0x1aU)))) 
                    | (0xeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                             >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)) 
           | (4U & ((4U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                             << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                       >> 0x1dU)) | 
                           ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                             >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 0x1cU)))) 
                    | (0xcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 0x1cU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                         << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                     << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                               << 2U))) 
                    | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                          << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x3ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                         >> 2U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                   >> 1U))) 
                        | (0x7ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                           >> 1U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU]))) 
                       | (0x3ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                          >> 2U) & 
                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xfffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                  >> 3U))) 
                        | (0x1fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                           >> 2U)))) 
                       | (0xfffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                   >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x3ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                  >> 5U))) 
                        | (0x7ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                          >> 4U)))) 
                       | (0x3ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                   >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0xffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                       >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                 >> 7U))) 
                        | (0x1ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                          >> 6U)))) 
                       | (0xffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                  >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x3fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 9U))) | 
                         (0x7fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                  >> 8U)))) 
                        | (0x3fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                         >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                   >> 0xbU))) 
                         | (0x1ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                          >> 0xbU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                            >> 0xaU)))) 
                        | (0xffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x3fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                   >> 0xdU))) 
                         | (0x7fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                         >> 0xdU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                         >> 0xcU)))) 
                        | (0x3fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                      >> 0x1aU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                   >> 0x19U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                 >> 0x18U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                              >> 0x1cU)) ^ (0x1eU & 
                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                             >> 0x1bU))) 
                    ^ (0x3eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                      << 2U) ^ (4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                      >> 0x1dU))) ^ 
                    (0xcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                             >> 0x1cU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU]) 
                     ^ (0xfffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                       << 1U))) ^ (0xfffffff8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                      << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x3ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 2U)) ^ (0x7ffffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                      >> 1U))) 
                       ^ (0xfffffff0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xfffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                       >> 4U)) ^ (0x1fffffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                     >> 3U))) 
                       ^ (0x3fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                         >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x3ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                       >> 6U)) ^ (0x7ffffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                     >> 5U))) 
                       ^ (0xfffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                      >> 8U)) ^ (0x1ffff80U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                    >> 7U))) 
                       ^ (0x3ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x3fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                       >> 0xaU)) ^ 
                         (0x7fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                       >> 9U))) ^ (0xffff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                      >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                      >> 0xcU)) ^ (0x1ffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                      >> 0xbU))) 
                        ^ (0x3ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                        >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x3fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                      >> 0xeU)) ^ (0x7fc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                                      >> 0xdU))) 
                        ^ (0xffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7cU] 
                                       >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                       >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                    >> 0x18U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                   >> 0x18U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                     >> 0x17U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                        >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                     >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                             >> 0x1aU))) 
                     | (0x3eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                  >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                               >> 0x19U)))) 
                    | (0x1eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                 >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                              >> 0x19U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((4U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                             >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                          >> 0x1cU))) 
                     | (0xcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                 >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                              >> 0x1bU)))) 
                    | (4U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                              >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                           >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)) 
           | (8U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                       << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                 << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                             << 2U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                               << 3U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                        << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                  << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x7ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU])) 
                        | (0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                             << 1U)))) 
                       | (0x7ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 1U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x1fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 3U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                   >> 2U))) 
                        | (0x3fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                           >> 2U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                           >> 1U)))) 
                       | (0x1fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                        >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                  >> 4U))) 
                        | (0xfffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 3U)))) 
                       | (0x7ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                   >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x1ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                        >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                  >> 6U))) 
                        | (0x3ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 5U)))) 
                       | (0x1ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                   >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x7fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                  >> 8U))) 
                         | (0xffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 8U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 7U)))) 
                        | (0x7fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                   >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x1ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                        >> 0xaU))) 
                         | (0x3ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                          >> 0xaU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                            >> 9U)))) 
                        | (0x1ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x7fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                   >> 0xcU))) 
                         | (0xffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 0xcU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 0xbU)))) 
                        | (0x7fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                        >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                      >> 0x19U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                   >> 0x18U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                 >> 0x17U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                               >> 0x1bU)) ^ (0x3eU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                >> 0x1aU))) 
                    ^ (0x7eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                            >> 0x1dU)) ^ (0xcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                  >> 0x1cU))) 
                    ^ (0x1cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xfffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                     << 1U)) ^ (0xfffffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                   << 2U))) 
                    ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                       << 3U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x7ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                        >> 1U)) ^ (0xfffffff0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU])) 
                       ^ (0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x1fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                        >> 3U)) ^ (0x3fffffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                      >> 2U))) 
                       ^ (0x7fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                       >> 5U)) ^ (0xfffffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                     >> 4U))) 
                       ^ (0x1fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x1ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                       >> 7U)) ^ (0x3ffff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                     >> 6U))) 
                       ^ (0x7ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                        >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x7fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                       >> 9U)) ^ (0xffff00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                     >> 8U))) 
                        ^ (0x1ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                         >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x1ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                       >> 0xbU)) ^ 
                         (0x3ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                       >> 0xaU))) ^ 
                        (0x7ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                      >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x7fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                      >> 0xdU)) ^ (0xffc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                                      >> 0xcU))) 
                        ^ (0x1ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7bU] 
                                        >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                       >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                    >> 0x17U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                   >> 0x17U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                     >> 0x16U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                        >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                     >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                             >> 0x19U))) 
                     | (0x7eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                  >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                               >> 0x18U)))) 
                    | (0x3eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                 >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                              >> 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                               >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                            >> 0x1bU))) 
                     | (0x1cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                  >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                               >> 0x1aU)))) 
                    | (0xcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                             >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xfffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                      << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                << 3U))) 
                     | (8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                               << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 0x1cU)))) 
                    | (8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                              << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                        >> 0x1cU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                            << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                  << 2U))) 
                       | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                             << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x3fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                         >> 2U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                   >> 1U))) 
                        | (0x7fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                           >> 1U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU]))) 
                       | (0x3fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                          >> 2U) & 
                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xfffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                  >> 3U))) 
                        | (0x1fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                           >> 2U)))) 
                       | (0xfffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                   >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x3ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                  >> 5U))) 
                        | (0x7ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                          >> 4U)))) 
                       | (0x3ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                   >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                  >> 7U))) 
                         | (0x1ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                           >> 7U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                           >> 6U)))) 
                        | (0xffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                   >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x3ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        >> 9U))) | 
                         (0x7ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                  >> 8U)))) 
                        | (0x3ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                         >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                   >> 0xbU))) 
                         | (0x1ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                          >> 0xbU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                            >> 0xaU)))) 
                        | (0xffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                      >> 0x18U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                   >> 0x17U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                 >> 0x16U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                               >> 0x1aU)) ^ (0x7eU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                >> 0x19U))) 
                    ^ (0xfeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                              >> 0x1cU)) ^ (0x1cU & 
                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                             >> 0x1bU))) 
                    ^ (0x3cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xfffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                     << 2U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                << 3U)) 
                    ^ (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                             >> 0x1cU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xfffffff0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU]) 
                        ^ (0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                          << 1U))) 
                       ^ (0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                         << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x3fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        >> 2U)) ^ (0x7fffffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                      >> 1U))) 
                       ^ (0xffffffe0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xfffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                       >> 4U)) ^ (0x1fffffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                     >> 3U))) 
                       ^ (0x3fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                         >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x3ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                       >> 6U)) ^ (0x7ffff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                     >> 5U))) 
                       ^ (0xfffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                       >> 8U)) ^ (0x1ffff00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                     >> 7U))) 
                        ^ (0x3ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                         >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x3ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                       >> 0xaU)) ^ 
                         (0x7ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                       >> 9U))) ^ (0xfffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                      >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                      >> 0xcU)) ^ (0x1ffc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                                      >> 0xbU))) 
                        ^ (0x3ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x7aU] 
                                        >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                       >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                    >> 0x16U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                   >> 0x16U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                     >> 0x15U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                        >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                     >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                             >> 0x18U))) 
                     | (0xfeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                  >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                               >> 0x17U)))) 
                    | (0x7eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                 >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                              >> 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                             >> 0x1aU))) 
                     | (0x3cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                  >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                               >> 0x19U)))) 
                    | (0x1cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                 >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                              >> 0x19U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)) 
           | (8U & ((8U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                             << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                       >> 0x1cU)) | 
                           ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                             >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                          >> 0x1bU)))) 
                    | (0x18U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                 << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                           >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                          << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                    << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                << 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                  << 3U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                           << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                     << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U])) 
                        | (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                             << 1U)))) 
                       | (0x7fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          >> 1U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 3U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                   >> 2U))) 
                        | (0x3fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                           >> 2U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                           >> 1U)))) 
                       | (0x1fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x7ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                        >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                  >> 4U))) 
                        | (0xfffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          >> 3U)))) 
                       | (0x7ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                   >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x1ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                   >> 6U))) 
                         | (0x3ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                           >> 6U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                           >> 5U)))) 
                        | (0x1ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x7ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                  >> 8U))) 
                         | (0xfffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          >> 8U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          >> 7U)))) 
                        | (0x7ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                   >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x1ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                        >> 0xaU))) 
                         | (0x3ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                          >> 0xaU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                            >> 9U)))) 
                        | (0x1ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                      >> 0x17U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                   >> 0x16U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                 >> 0x15U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                               >> 0x19U)) ^ (0xfeU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                >> 0x18U))) 
                    ^ (0x1feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                 >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                               >> 0x1bU)) ^ (0x3cU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                >> 0x1aU))) 
                    ^ (0x7cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                      << 3U) ^ (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                      >> 0x1cU))) ^ 
                    (0x18U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                              >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                        << 1U)) ^ (0xfffffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                      << 2U))) 
                       ^ (0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                        >> 1U)) ^ (0xffffffe0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U])) 
                       ^ (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                        >> 3U)) ^ (0x3fffffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                      >> 2U))) 
                       ^ (0x7fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x7ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                       >> 5U)) ^ (0xfffff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                     >> 4U))) 
                       ^ (0x1fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x1ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                        >> 7U)) ^ (0x3ffff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                      >> 6U))) 
                        ^ (0x7ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x7ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                       >> 9U)) ^ (0xfffe00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                                     >> 8U))) 
                        ^ (0x1fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                         >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x1ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                       >> 0xbU)) ^ 
                         (0x3ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                       >> 0xaU))) ^ 
                        (0x7ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x79U] 
                                      >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                       >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                    >> 0x15U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                   >> 0x15U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                     >> 0x14U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                        >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xfeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                             >> 0x17U))) 
                     | (0x1feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                   >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                >> 0x16U)))) 
                    | (0xfeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                 >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                              >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                             >> 0x19U))) 
                     | (0x7cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                  >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                               >> 0x18U)))) 
                    | (0x3cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                 >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                              >> 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                             >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          >> 0x1bU))) 
                     | (0x18U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                  >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                               >> 0x1aU)))) 
                    | (8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                              >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                           >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                          << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                    << 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                << 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                  << 4U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                           << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                     << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                            << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                        << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                  << 2U))) 
                       | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                             << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x3fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                         >> 2U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                   >> 1U))) 
                        | (0x7fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                           >> 1U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U]))) 
                       | (0x3fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                          >> 2U) & 
                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0xfffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                        >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                  >> 3U))) 
                        | (0x1fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                           >> 2U)))) 
                       | (0xfffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                   >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x3ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                   >> 5U))) 
                         | (0x7ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                           >> 5U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                           >> 4U)))) 
                        | (0x3ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                          >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xfffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                  >> 7U))) 
                         | (0x1fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                           >> 7U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                           >> 6U)))) 
                        | (0xfffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                   >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x3ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                        >> 9U))) | 
                         (0x7ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                  >> 8U)))) 
                        | (0x3ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                         >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                      >> 0x16U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                   >> 0x15U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                 >> 0x14U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xfeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                               >> 0x18U)) ^ (0x1feU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                >> 0x17U))) 
                    ^ (0x3feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                 >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x3cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                               >> 0x1aU)) ^ (0x7cU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                >> 0x19U))) 
                    ^ (0xfcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                            >> 0x1cU)) ^ (0x18U & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                   >> 0x1bU))) 
                    ^ (0x38U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                        << 2U)) ^ (0xfffffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                      << 3U))) 
                       ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                          << 4U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffffffe0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U]) 
                        ^ (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                          << 1U))) 
                       ^ (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                         << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x3fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                        >> 2U)) ^ (0x7fffffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                      >> 1U))) 
                       ^ (0xffffffc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xfffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                       >> 4U)) ^ (0x1fffff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                     >> 3U))) 
                       ^ (0x3fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                         >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x3ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                        >> 6U)) ^ (0x7ffff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                      >> 5U))) 
                        ^ (0xfffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                         >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                       >> 8U)) ^ (0x1fffe00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                     >> 7U))) 
                        ^ (0x3fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                         >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x3ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                       >> 0xaU)) ^ 
                         (0x7ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                       >> 9U))) ^ (0xfffc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x78U] 
                                                      >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                       >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                    >> 0x14U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                   >> 0x14U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                     >> 0x13U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                        >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                     >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                 >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 0x16U))) 
                     | (0x3feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                   >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 0x15U)))) 
                    | (0x1feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                  >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 0x18U))) 
                     | (0xfcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                  >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 0x17U)))) 
                    | (0x7cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                 >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x18U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 0x1aU))) 
                     | (0x38U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                  >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 0x19U)))) 
                    | (0x18U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                 >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 0x19U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xfffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                         << 3U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                   << 4U))) 
                        | (0x10U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                     << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 0x1bU)))) 
                       | (0x10U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                    << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                          << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                    << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                << 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                  << 3U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                           << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                     << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U])) 
                        | (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                             << 1U)))) 
                       | (0x7fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          >> 1U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x1fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                         >> 3U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                   >> 2U))) 
                        | (0x3fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                           >> 2U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                           >> 1U)))) 
                       | (0x1fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x7ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                   >> 4U))) 
                         | (0xfffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                           >> 4U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                           >> 3U)))) 
                        | (0x7ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x1fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                   >> 6U))) 
                         | (0x3fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                           >> 6U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                           >> 5U)))) 
                        | (0x1fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x7ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                  >> 8U))) 
                         | (0xfffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          >> 8U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          >> 7U)))) 
                        | (0x7ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                   >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                      >> 0x15U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                   >> 0x14U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                 >> 0x13U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                >> 0x17U)) ^ (0x3feU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                 >> 0x16U))) 
                    ^ (0x7feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                 >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                               >> 0x19U)) ^ (0xfcU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 0x18U))) 
                    ^ (0x1fcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                 >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x18U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                               >> 0x1bU)) ^ (0x38U 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 0x1aU))) 
                    ^ (0x78U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                        << 3U)) ^ (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                   << 4U)) 
                       ^ (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                   >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                        << 1U)) ^ (0xffffffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                      << 2U))) 
                       ^ (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                         << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                        >> 1U)) ^ (0xffffffc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U])) 
                       ^ (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                         << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x1fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                        >> 3U)) ^ (0x3fffff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                      >> 2U))) 
                       ^ (0x7fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                         >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x7ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                        >> 5U)) ^ (0xfffff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                      >> 4U))) 
                        ^ (0x1fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                          >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x1fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                        >> 7U)) ^ (0x3fffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                      >> 6U))) 
                        ^ (0x7fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                         >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x7ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                       >> 9U)) ^ (0xfffc00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                                     >> 8U))) 
                        ^ (0x1fffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x77U] 
                                         >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                       >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                    >> 0x13U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                   >> 0x13U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                     >> 0x12U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                        >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                     >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                 >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x15U))) 
                     | (0x7feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                   >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x14U)))) 
                    | (0x3feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                  >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xfcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x17U))) 
                     | (0x1fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                   >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x16U)))) 
                    | (0xfcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                 >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x38U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x19U))) 
                     | (0x78U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                  >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x18U)))) 
                    | (0x38U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                 >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & ((0x10U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                   << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x1bU)) 
                                 | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                     >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  >> 0x1aU)))) 
                       | (0x30U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                    << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                          << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                    << 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                << 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                  << 4U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                           << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                     << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                            << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                        << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                  << 2U))) 
                       | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                             << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x3fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                         >> 2U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                   >> 1U))) 
                        | (0x7fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 1U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U]))) 
                       | (0x3fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                          >> 2U) & 
                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xfffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                   >> 3U))) 
                         | (0x1fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                            >> 3U) 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 2U)))) 
                        | (0xfffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                          >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x3fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                   >> 5U))) 
                         | (0x7fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 5U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 4U)))) 
                        | (0x3fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                          >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xfffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                  >> 7U))) 
                         | (0x1fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 7U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 6U)))) 
                        | (0xfffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                   >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                      >> 0x14U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                   >> 0x13U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 0x12U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                >> 0x16U)) ^ (0x7feU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 0x15U))) 
                    ^ (0xffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                 >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xfcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                               >> 0x18U)) ^ (0x1fcU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x17U))) 
                    ^ (0x3fcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                 >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x38U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                               >> 0x1aU)) ^ (0x78U 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x19U))) 
                    ^ (0xf8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                         << 4U) ^ (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                            >> 0x1bU))) 
                       ^ (0x30U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                   >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                        << 2U)) ^ (0xffffffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                      << 3U))) 
                       ^ (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                         << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffffffc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U]) 
                        ^ (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                          << 1U))) 
                       ^ (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                         << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x3fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                        >> 2U)) ^ (0x7fffff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                      >> 1U))) 
                       ^ (0xffffff80U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xfffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                        >> 4U)) ^ (0x1fffff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                      >> 3U))) 
                        ^ (0x3fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                          >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x3fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                        >> 6U)) ^ (0x7fffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                      >> 5U))) 
                        ^ (0xffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                         >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                       >> 8U)) ^ (0x1fffc00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                     >> 7U))) 
                        ^ (0x3fffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                         >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                       >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                    >> 0x12U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                   >> 0x12U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                     >> 0x11U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                        >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                     >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                 >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x14U))) 
                     | (0xffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                   >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x13U)))) 
                    | (0x7feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                  >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                 >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x16U))) 
                     | (0x3fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                   >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x15U)))) 
                    | (0x1fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                  >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x78U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0x18U))) 
                     | (0xf8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                  >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x17U)))) 
                    | (0x78U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                 >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x10U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                   >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x1aU))) 
                        | (0x30U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                     >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  >> 0x19U)))) 
                       | (0x10U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                    >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 0x19U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                          << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                    << 4U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                << 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  << 5U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                           << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                     << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                          << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                    << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                << 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  << 3U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                           << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                     << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x7fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U])) 
                        | (0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             << 1U)))) 
                       | (0x7fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                          >> 1U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x1fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                          >> 2U))) 
                         | (0x3fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                            >> 2U) 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 1U)))) 
                        | (0x1fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x7fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                   >> 4U))) 
                         | (0xffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 4U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 3U)))) 
                        | (0x7fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                          >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x1fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                   >> 6U))) 
                         | (0x3fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 6U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 5U)))) 
                        | (0x1fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                          >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                      >> 0x13U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                   >> 0x12U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 0x11U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                >> 0x15U)) ^ (0xffeU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 0x14U))) 
                    ^ (0x1ffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                  >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1fcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                >> 0x17U)) ^ (0x3fcU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 0x16U))) 
                    ^ (0x7fcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                 >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x78U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                               >> 0x19U)) ^ (0xf8U 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x18U))) 
                    ^ (0x1f8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                 >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                  >> 0x1bU)) ^ (0x30U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                   >> 0x1aU))) 
                       ^ (0x70U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                   >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                        << 3U)) ^ (0xffffffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                      << 4U))) 
                       ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                          << 5U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                        << 1U)) ^ (0xffffffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                      << 2U))) 
                       ^ (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                         << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x7fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                        >> 1U)) ^ (0xffffff80U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U])) 
                       ^ (0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                         << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x1fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                         >> 3U)) ^ 
                         (0x3fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                         >> 2U))) ^ 
                        (0x7fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                        >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x7fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                        >> 5U)) ^ (0xffffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                      >> 4U))) 
                        ^ (0x1ffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                          >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x1fffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                        >> 7U)) ^ (0x3fffc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                      >> 6U))) 
                        ^ (0x7fffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                         >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                       >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                    >> 0x11U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                   >> 0x11U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                     >> 0x10U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                        >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                     >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                 >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x13U))) 
                     | (0x1ffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                    >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0x12U)))) 
                    | (0xffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                  >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                 >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x15U))) 
                     | (0x7fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                   >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x14U)))) 
                    | (0x3fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                  >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xf8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0x17U))) 
                     | (0x1f8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                   >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x16U)))) 
                    | (0xf8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                 >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x30U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                   >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x19U))) 
                        | (0x70U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                     >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 0x18U)))) 
                       | (0x30U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                    >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xffffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                         << 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                   << 5U))) 
                        | (0x20U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                     << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x1aU)))) 
                       | (0x20U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                    << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                          << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                    << 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                << 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  << 4U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                           << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                     << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                            << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                        << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  << 2U))) 
                       | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                             << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x3fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                          >> 2U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                          >> 1U))) 
                         | (0x7fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                            >> 1U) 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U]))) 
                        | (0x3fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 2U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                   >> 3U))) 
                         | (0x1ffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                            >> 3U) 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 2U)))) 
                        | (0xffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                          >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x3fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                   >> 5U))) 
                         | (0x7fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 5U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 4U)))) 
                        | (0x3fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                          >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                      >> 0x12U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                   >> 0x11U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0x10U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                >> 0x14U)) ^ (0x1ffeU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0x13U))) 
                    ^ (0x3ffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                  >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x3fcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                >> 0x16U)) ^ (0x7fcU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0x15U))) 
                    ^ (0xffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                 >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xf8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                               >> 0x18U)) ^ (0x1f8U 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x17U))) 
                    ^ (0x3f8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                 >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x30U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                  >> 0x1aU)) ^ (0x70U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                   >> 0x19U))) 
                       ^ (0xf0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                   >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                        << 4U)) ^ (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                   << 5U)) 
                       ^ (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                   >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                        << 2U)) ^ (0xffffffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                      << 3U))) 
                       ^ (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                         << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xffffff80U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U]) 
                        ^ (0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                          << 1U))) 
                       ^ (0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                         << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x3fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                         >> 2U)) ^ 
                         (0x7fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                         >> 1U))) ^ 
                        (0xffffff00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                        >> 4U)) ^ (0x1ffffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                      >> 3U))) 
                        ^ (0x3ffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                          >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x3fffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                        >> 6U)) ^ (0x7fffc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                      >> 5U))) 
                        ^ (0xffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                         >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                       >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                    >> 0x10U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                   >> 0x10U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                     >> 0xfU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                        >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                     >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1ffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                  >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x12U))) 
                     | (0x3ffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                    >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0x11U)))) 
                    | (0x1ffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                   >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                 >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x14U))) 
                     | (0xffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                   >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x13U)))) 
                    | (0x7fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                  >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x1f8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                 >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x16U))) 
                     | (0x3f8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                   >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x15U)))) 
                    | (0x1f8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                  >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x70U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                   >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x18U))) 
                        | (0xf0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                     >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 0x17U)))) 
                       | (0x70U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                    >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & ((0x20U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                   << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0x1aU)) 
                                 | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                     >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 0x19U)))) 
                       | (0x60U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                    << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x19U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                          << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                    << 4U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                << 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  << 5U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                           << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                     << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                          << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                    << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                << 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  << 3U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                           << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                     << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x7fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                          >> 1U) & 
                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U])) 
                         | (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              << 1U)))) 
                        | (0x7fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 1U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x1ffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                          >> 2U))) 
                         | (0x3ffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                            >> 2U) 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 1U)))) 
                        | (0x1ffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x7fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                   >> 4U))) 
                         | (0xffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 4U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 3U)))) 
                        | (0x7fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                          >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                      >> 0x11U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                   >> 0x10U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0xfU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1ffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                 >> 0x13U)) ^ (0x3ffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 0x12U))) 
                    ^ (0x7ffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                  >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7fcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                >> 0x15U)) ^ (0xffcU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0x14U))) 
                    ^ (0x1ffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                  >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x1f8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                >> 0x17U)) ^ (0x3f8U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0x16U))) 
                    ^ (0x7f8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                 >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x70U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                  >> 0x19U)) ^ (0xf0U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                   >> 0x18U))) 
                       ^ (0x1f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                    >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                         << 5U) ^ (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                            >> 0x1aU))) 
                       ^ (0x60U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                   >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                        << 3U)) ^ (0xffffffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                      << 4U))) 
                       ^ (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                         << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                        << 1U)) ^ (0xffffff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                      << 2U))) 
                       ^ (0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                         << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x7fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                         >> 1U)) ^ 
                         (0xffffff00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U])) 
                        ^ (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                          << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x1ffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                         >> 3U)) ^ 
                         (0x3ffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                         >> 2U))) ^ 
                        (0x7ffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                        >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x7fffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                        >> 5U)) ^ (0xffffc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                      >> 4U))) 
                        ^ (0x1ffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                          >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                       >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                    >> 0xfU)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                    >> 0xeU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                        >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                     >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3ffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                  >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x11U))) 
                     | (0x7ffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                    >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0x10U)))) 
                    | (0x3ffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                   >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                 >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x13U))) 
                     | (0x1ffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                    >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0x12U)))) 
                    | (0xffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                  >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x3f8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                 >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x15U))) 
                     | (0x7f8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                   >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x14U)))) 
                    | (0x3f8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                  >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xf0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                   >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x17U))) 
                        | (0x1f0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                      >> 0x17U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                   >> 0x16U)))) 
                       | (0xf0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                    >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x20U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                   >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x19U))) 
                        | (0x60U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                     >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 0x18U)))) 
                       | (0x20U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                    >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                          << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                    << 5U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                << 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  << 6U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                           << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                     << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                          << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                    << 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                << 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  << 4U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                           << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                     << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                             << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                         << 1U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                   << 2U))) 
                        | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                              << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x3ffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                          >> 2U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                          >> 1U))) 
                         | (0x7ffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                            >> 1U) 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U]))) 
                        | (0x3ffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 2U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                   >> 3U))) 
                         | (0x1ffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                            >> 3U) 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 2U)))) 
                        | (0xffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                          >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                      >> 0x10U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                   >> 0xfU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0xeU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3ffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                 >> 0x12U)) ^ (0x7ffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 0x11U))) 
                    ^ (0xfffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                  >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                >> 0x14U)) ^ (0x1ffcU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0x13U))) 
                    ^ (0x3ffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                  >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x3f8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                >> 0x16U)) ^ (0x7f8U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0x15U))) 
                    ^ (0xff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                 >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xf0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                  >> 0x18U)) ^ (0x1f0U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                   >> 0x17U))) 
                       ^ (0x3f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                    >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                  >> 0x1aU)) ^ (0x60U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                   >> 0x19U))) 
                       ^ (0xe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                   >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                        << 4U)) ^ (0xffffffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                      << 5U))) 
                       ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                          << 6U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                        << 2U)) ^ (0xffffff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                      << 3U))) 
                       ^ (0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                         << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xffffff00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U]) 
                         ^ (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           << 1U))) 
                        ^ (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                          << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x3ffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                         >> 2U)) ^ 
                         (0x7ffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                         >> 1U))) ^ 
                        (0xfffffe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                        >> 4U)) ^ (0x1ffffc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                      >> 3U))) 
                        ^ (0x3ffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                          >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                       >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                   >> 0xeU)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                   >> 0xdU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                        >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                    >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7ffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                  >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x10U))) 
                     | (0xfffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                    >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0xfU)))) 
                    | (0x7ffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                   >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1ffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                  >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x12U))) 
                     | (0x3ffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                    >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0x11U)))) 
                    | (0x1ffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                   >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x7f8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                 >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x14U))) 
                     | (0xff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                   >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x13U)))) 
                    | (0x7f8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                  >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x1f0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                    >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0x16U))) 
                        | (0x3f0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                      >> 0x16U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                   >> 0x15U)))) 
                       | (0x1f0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                     >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x60U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                   >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x18U))) 
                        | (0xe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                     >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0x17U)))) 
                       | (0x60U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                    >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xffffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                         << 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                   << 6U))) 
                        | (0x40U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                     << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x19U)))) 
                       | (0x40U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                    << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x19U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                          << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                    << 4U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                << 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  << 5U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                           << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                     << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                           << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                     << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 << 2U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                   << 3U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                            << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                      << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x7ffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                          >> 1U) & 
                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U])) 
                         | (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              << 1U)))) 
                        | (0x7ffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 1U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x1ffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                          >> 2U))) 
                         | (0x3ffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                            >> 2U) 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 1U)))) 
                        | (0x1ffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                      >> 0xfU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                  >> 0xeU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0xdU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7ffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                 >> 0x11U)) ^ (0xfffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0x10U))) 
                    ^ (0x1fffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                   >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1ffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                 >> 0x13U)) ^ (0x3ffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0x12U))) 
                    ^ (0x7ffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                  >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x7f8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                >> 0x15U)) ^ (0xff8U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0x14U))) 
                    ^ (0x1ff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                  >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x1f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                   >> 0x17U)) ^ (0x3f0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                    >> 0x16U))) 
                       ^ (0x7f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                    >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x60U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                  >> 0x19U)) ^ (0xe0U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                   >> 0x18U))) 
                       ^ (0x1e0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                    >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                        << 5U)) ^ (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                   << 6U)) 
                       ^ (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                   >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                        << 3U)) ^ (0xffffff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                      << 4U))) 
                       ^ (0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                         << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                         << 1U)) ^ 
                         (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                         << 2U))) ^ 
                        (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                        << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x7ffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                         >> 1U)) ^ 
                         (0xfffffe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U])) 
                        ^ (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                          << 1U)))));
}
