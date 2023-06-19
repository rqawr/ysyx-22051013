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

extern "C" void difftest_dut_csr(long long csr_mstatus, long long csr_mtvec, long long csr_mepc, long long csr_mcause);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__difftest_dut_csr_TOP(QData/*63:0*/ csr_mstatus, QData/*63:0*/ csr_mtvec, QData/*63:0*/ csr_mepc, QData/*63:0*/ csr_mcause) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__difftest_dut_csr_TOP\n"); );
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

extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_22051013_rvcpu__ConstPool__TABLE_a4975328_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_252bb79a_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_a4acb236_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_17e5fd70_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_b039c422_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_8c6fee76_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_f638cf1c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_8f16a4f5_0;

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__1(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*7:0*/ __Vtableidx6;
    CData/*7:0*/ __Vtableidx7;
    CData/*5:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1;
    CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1;
    CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1;
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
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1;
    CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1;
    CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0;
    CData/*3:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl;
    CData/*6:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt;
    CData/*1:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl;
    CData/*6:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl;
    CData/*0:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena;
    CData/*6:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32;
    SData/*11:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr;
    IData/*22:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0;
    IData/*22:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0;
    IData/*22:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0;
    IData/*22:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0;
    VlWide<3>/*66:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier;
    VlWide<5>/*131:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp;
    VlWide<4>/*127:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend;
    VlWide<5>/*159:0*/ __Vtemp20;
    VlWide<5>/*159:0*/ __Vtemp21;
    VlWide<5>/*159:0*/ __Vtemp22;
    VlWide<5>/*159:0*/ __Vtemp23;
    VlWide<4>/*127:0*/ __Vtemp40;
    VlWide<5>/*159:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<5>/*159:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp66;
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<4>/*127:0*/ __Vtemp162;
    VlWide<4>/*127:0*/ __Vtemp201;
    VlWide<3>/*95:0*/ __Vtemp223;
    VlWide<3>/*95:0*/ __Vtemp224;
    VlWide<3>/*95:0*/ __Vtemp225;
    QData/*63:0*/ __Vtask_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_read__0__rdata;
    QData/*63:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc;
    QData/*63:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q;
    QData/*63:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_pc;
    QData/*63:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32;
    // Body
    __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena 
        = vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena;
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[0U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[0U];
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[1U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[1U];
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U];
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U];
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U];
    __Vdly__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index 
        = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index;
    __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl;
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
    __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl 
        = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl;
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt;
    __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc = vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 = 0U;
    __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl;
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U];
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U];
    __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U] 
        = vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U];
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1 = 0U;
    __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr 
        = vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr;
    __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl 
        = vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 = 0U;
    __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_pc = vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1 = 0U;
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
    if ((1U & (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)) 
                & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump))))) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_inst_end_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc, vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst);
    }
    if (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__delay) 
         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_inst_end_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_delay, vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst);
    }
    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__ebreak_TOP(
                                                                                (0x100073U 
                                                                                == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst));
    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__difftest_dut_csr_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus, 
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base 
                                                                                << 2U), vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mepc, vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcause);
    if (vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_read_TOP(
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                                                 ? 0ULL
                                                                                 : vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr), __Vtask_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_read__0__rdata, 
                                                                                ((6U 
                                                                                == 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                                                 ? 0U
                                                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                                                 ? 0U
                                                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                                                 ? 0U
                                                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                                                 ? 0U
                                                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)))
                                                                                 ? 1U
                                                                                 : 8U)))));
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data 
            = __Vtask_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_read__0__rdata;
    }
    if (vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__pmem_write_TOP(
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                                                 ? 2U
                                                                                 : 1U))
                                                                                 ? 0ULL
                                                                                 : vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc), 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                                                 ? 2U
                                                                                 : 1U))
                                                                                 ? 0ULL
                                                                                 : vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o), 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                                                 ? 2U
                                                                                 : 1U))
                                                                                 ? 0U
                                                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask)));
    }
    __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena)
                                        : ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena))));
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst
                                         : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                                             ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst)));
    if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) {
        __Vtemp20[0U] = (~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                            << 1U));
        __Vtemp20[1U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                             >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                          << 1U)));
        __Vtemp20[2U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                             >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                          << 1U)));
        __Vtemp20[3U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                             >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                          << 1U)));
        __Vtemp20[4U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                             >> 0x1fU) | (0xeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                  << 1U))));
    } else {
        __Vtemp20[0U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                     >> 2U)) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                >> 1U)) 
                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                          ? (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                             << 1U) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                        ? (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U])
                                        : ((1U & ((~ 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                    >> 2U)) 
                                                  & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                       >> 1U) 
                                                      & (~ 
                                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                                     | ((~ 
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                          >> 1U)) 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U]
                                            : 0U)));
        __Vtemp20[1U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                     >> 2U)) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                >> 1U)) 
                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                          ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                              >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                           << 1U)) : 
                         ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                           ? (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U])
                           : ((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                         >> 2U)) & 
                                     (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                        >> 1U) & (~ 
                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                      | ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U]
                               : 0U)));
        __Vtemp20[2U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                     >> 2U)) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                >> 1U)) 
                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                          ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                              >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                           << 1U)) : 
                         ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                           ? (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U])
                           : ((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                         >> 2U)) & 
                                     (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                        >> 1U) & (~ 
                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                      | ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U]
                               : 0U)));
        __Vtemp20[3U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                     >> 2U)) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                >> 1U)) 
                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                          ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                              >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                           << 1U)) : 
                         ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                           ? (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U])
                           : ((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                         >> 2U)) & 
                                     (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                        >> 1U) & (~ 
                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                      | ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U]
                               : 0U)));
        __Vtemp20[4U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                     >> 2U)) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                >> 1U)) 
                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                          ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                              >> 0x1fU) | (0xeU & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                   << 1U)))
                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                              ? (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U])
                              : ((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                            >> 2U)) 
                                        & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U) 
                                            & (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                           | ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                  >> 1U)) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U]
                                  : 0U)));
    }
    VL_ADD_W(5, __Vtemp21, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp, __Vtemp20);
    VL_EXTEND_WI(132,1, __Vtemp22, ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)));
    VL_ADD_W(5, __Vtemp23, __Vtemp21, __Vtemp22);
    if (vlSelf->rst) {
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[0U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[1U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index = 0U;
    } else {
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[0U] 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                & (0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                           | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                          | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))
                ? __Vtemp23[0U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                    ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[0U]));
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[1U] 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                & (0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                           | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                          | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))
                ? __Vtemp23[1U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                    ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[1U]));
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U] 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                & (0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                           | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                          | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))
                ? __Vtemp23[2U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                    ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U]));
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U] 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                & (0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                           | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                          | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))
                ? __Vtemp23[3U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                    ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U]));
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U] 
            = (0xfU & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                        & (0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                   | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                  | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))
                        ? __Vtemp23[4U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                            ? 0U : 
                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U])));
        __Vdly__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index 
            = (0x3fU & (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next)) 
                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid))
                         ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                    >> 3U)) : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index)));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena)
                                        : ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena))));
    if (vlSelf->rst) {
        __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst = 0U;
    } else {
        __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl)
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl)));
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena 
        = ((~ (IData)(vlSelf->rst)) & ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena)
                                        : ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena))));
    if (vlSelf->rst) {
        __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl = 0U;
    } else {
        __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl)
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl)));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl)
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl)));
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q = 0ULL;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt = 0U;
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
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt 
            = (0x7fU & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt) 
                        - (IData)(1U)));
    } else if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid) {
        VL_EXTEND_WQ(128,64, __Vtemp40, ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)
                                          ? (1ULL + 
                                             (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp))
                                          : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp));
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[0U] 
            = __Vtemp40[0U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
            = __Vtemp40[1U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
            = __Vtemp40[2U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
            = __Vtemp40[3U];
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q = 0ULL;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt = 0x40U;
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
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt = 0U;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump 
        = ((~ (IData)(vlSelf->rst)) & ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready)))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                        : ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel))) 
                                           & ((~ (IData)(vlSelf->rst)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                    >> 0xbU))))));
    __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc = 
        ((IData)(vlSelf->rst) ? 0ULL : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready)))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel))
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc)));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data 
        = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram
           [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index]);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild 
        = (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram
                 [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index] 
                 >> 0x17U));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data 
        = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram
           [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index]);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild 
        = (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram
                 [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index] 
                 >> 0x17U));
    if ((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2)) 
          & (8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))) 
         & (0U == (((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
                     | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]) 
                    | (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U])) 
                   | (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]))))) {
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag;
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 = 1U;
        __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 = 0U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index;
        __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1 = 0x17U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index;
    }
    if ((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2)) 
          & (8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))) 
         & (0U == ((((~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]) 
                     | (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U])) 
                    | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]) 
                   | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U])))) {
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag;
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 = 1U;
        __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 = 0U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index;
        __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1 = 0x17U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                       & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc = 0ULL;
        __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
            = (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc
                : vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc);
        __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl)
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl)));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)));
    VL_EXTEND_WQ(66,64, __Vtemp53, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
    if ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))) {
        __Vtemp55[0U] = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
        __Vtemp55[1U] = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                 >> 0x20U));
        __Vtemp55[2U] = (3U & (- (IData)((1U & (IData)(
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                                        >> 0x3fU))))));
    } else {
        __Vtemp55[0U] = __Vtemp53[0U];
        __Vtemp55[1U] = __Vtemp53[1U];
        __Vtemp55[2U] = __Vtemp53[2U];
    }
    VL_EXTEND_WW(132,66, __Vtemp56, __Vtemp55);
    if (vlSelf->rst) {
        __Vtemp46[1U] = 0U;
        __Vtemp46[2U] = 0U;
        __Vtemp46[3U] = 0U;
        __Vtemp46[4U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] = 0U;
    } else {
        __Vtemp46[1U] = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                          & (0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                     | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                    | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))
                          ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                              >> 0x1eU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                           << 2U)) : 
                         ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                           ? __Vtemp56[1U] : 0U));
        __Vtemp46[2U] = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                          & (0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                     | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                    | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))
                          ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                              >> 0x1eU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                           << 2U)) : 
                         ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                           ? __Vtemp56[2U] : 0U));
        __Vtemp46[3U] = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                          & (0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                     | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                    | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))
                          ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                              >> 0x1eU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                           << 2U)) : 
                         ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                           ? __Vtemp56[3U] : 0U));
        __Vtemp46[4U] = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                          & (0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                     | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                    | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))
                          ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                              >> 0x1eU) | (0xcU & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                   << 2U)))
                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                              ? __Vtemp56[4U] : 0U));
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                & (0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                           | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                          | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))
                ? (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                   << 2U) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                              ? __Vtemp56[0U] : 0U));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
        = __Vtemp46[1U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
        = __Vtemp46[2U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
        = __Vtemp46[3U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
        = __Vtemp46[4U];
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag 
        = ((IData)(vlSelf->rst) ? 0U : (0x7fffffU & 
                                        (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid))
                                          ? (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                     >> 9U))
                                          : vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag)));
    __Vtemp65[0U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U] 
                      << 0x1eU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                   >> 2U));
    __Vtemp65[1U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U] 
                      << 0x1eU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U] 
                                   >> 2U));
    __Vtemp65[2U] = (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U] 
                           >> 2U));
    VL_EXTEND_WW(67,65, __Vtemp66, __Vtemp65);
    VL_EXTEND_WQ(66,64, __Vtemp68, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
    if (vlSelf->rst) {
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U] = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U] = 0U;
    } else {
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_ready)))
                ? __Vtemp66[0U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                    ? (((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp)
                                         : __Vtemp68[0U]) 
                                       << 1U) : 0U));
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U] 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_ready)))
                ? __Vtemp66[1U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                    ? ((((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))
                                          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp)
                                          : __Vtemp68[0U]) 
                                        >> 0x1fU) | 
                                       (((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))
                                          ? (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                                     >> 0x20U))
                                          : __Vtemp68[1U]) 
                                        << 1U)) : 0U));
        __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U] 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
                & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_ready)))
                ? __Vtemp66[2U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid)
                                    ? ((((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))
                                          ? (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                                     >> 0x20U))
                                          : __Vtemp68[1U]) 
                                        >> 0x1fU) | 
                                       (((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))
                                          ? (3U & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                                                         >> 0x3fU))))))
                                          : __Vtemp68[2U]) 
                                        << 1U)) : 0U));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_reg 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)) 
                                       | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_reg))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_reg 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)) 
                                       | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_reg))));
    if (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index;
    }
    if (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index;
    }
    if (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index;
    }
    if (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2))) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl)
                                         : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                                             ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl))));
    __Vtableidx2 = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh) 
                     << 6U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ar_sh) 
                                << 5U) | ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state) 
                                            << 1U) 
                                           | (IData)(vlSelf->rst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_a4975328_0
        [__Vtableidx2];
    if (vlSelf->rst) {
        __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr = 0U;
        __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcycle = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state = 1U;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state = 1U;
        vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcause = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mepc = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state = 1U;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state = 1U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr = 0U;
    } else {
        __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_addr)));
        vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr)
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr)));
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr)
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr)));
        __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl)));
        vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcycle 
            = (((0xb00U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                   >> 3U)) ? vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data
                : (1ULL + vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcycle));
        vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base 
            = (0x3fffffffffffffffULL & (((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                         & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                            >> 3U))
                                         ? (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                            >> 2U) : vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base));
        vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state 
            = vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state_next;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state 
            = vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state_next;
        vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcause 
            = (((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                   >> 3U)) ? vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data
                : ((1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                           >> 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))
                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                        ? 0xbULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)
                                     ? 0x8000000000000007ULL
                                     : 0ULL)) : vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcause));
        vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mepc 
            = ((1U & ((((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                        & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                           >> 3U)) | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 1U)) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data
                : vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mepc);
        vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state 
            = vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state_next;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state 
            = vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state_next;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr)
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)));
    }
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v0 = 1U;
    } else if ((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena)) 
                & (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr)))) {
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 
            = vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data;
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32 
            = vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip 
        = ((~ (IData)(vlSelf->rst)) & (vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime 
                                       > vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp));
    if (vlSelf->rst) {
        __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_pc = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp = 0ULL;
    } else {
        __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_pc 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc));
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
                                                        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U])))
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
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie 
        = (1U & ((~ (IData)(vlSelf->rst)) & (((0x304U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 3U))
                                              ? (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                                         >> 7U))
                                              : ((~ 
                                                  ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump) 
                                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT____Vcellinp__csr_operate__core_valid)))) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie)))));
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we) 
                     << 7U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_b_valid) 
                                << 6U) | (((((2U == 
                                              ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                ? 2U
                                                : 1U))
                                              ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)
                                              : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid)) 
                                           << 5U) | 
                                          ((((((2U 
                                                == 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                  ? 2U
                                                  : 1U))
                                                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)
                                                : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready)) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we)) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_w_state) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_w_state 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_252bb79a_0
        [__Vtableidx1];
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update 
        = ((~ (IData)(vlSelf->rst)) & ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update 
        = ((~ (IData)(vlSelf->rst)) & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready)));
    if (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena) {
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[0U] 
            = ((((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))
                  ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                           ? (IData)((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                       : 0ULL)) : 0U)) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
                  [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index][0U] 
                  & (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U])));
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[1U] 
            = ((((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))
                  ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                           ? (IData)(((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                        : 0ULL) >> 0x20U))
                           : 0U)) & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
                  [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index][1U] 
                  & (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U])));
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[2U] 
            = ((((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))
                  ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                           ? (IData)((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                       : 0ULL)) : 0U)) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
                  [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index][2U] 
                  & (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U])));
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0[3U] 
            = ((((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))
                  ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                           ? (IData)(((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                        : 0ULL) >> 0x20U))
                           : 0U)) & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
                  [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index][3U] 
                  & (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U])));
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index;
    }
    if (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena) {
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
            [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index][0U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[1U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
            [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index][1U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[2U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
            [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index][2U];
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[3U] 
            = vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram
            [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index][3U];
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp 
        = ((IData)(vlSelf->rst) ? 0U : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena) 
                                         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT____Vcellinp__csr_operate__core_valid)))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mpp_set)
                                         : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp)));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena) 
                                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT____Vcellinp__csr_operate__core_valid)))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mpie_set)
                                        : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena) 
                                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT____Vcellinp__csr_operate__core_valid)))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mie_set)
                                        : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
        = ((IData)(vlSelf->rst) ? 0ULL : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                                           ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid)
                                               ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i
                                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data))
                                           : 0ULL));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw 
        = ((~ (IData)(vlSelf->rst)) & ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr 
        = ((~ (IData)(vlSelf->rst)) & ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_addr = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc));
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2));
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_addr 
            = (0xfffU & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_addr)
                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                              ? 0U : ((0U != (0xfU 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl)))
                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)
                                       : 0U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)));
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
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 
            = (0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                    >> 9U)));
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 = 1U;
        __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 = 0U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
        __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1 = 0x17U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1 
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
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 
            = (0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                    >> 9U)));
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 = 1U;
        __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 = 0U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
        __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1 = 0x17U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                >> 3U)));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata
                                           : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                                               ? 0ULL
                                               : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)));
    if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
          : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
              ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
              : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))) {
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp162[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp162[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp162[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp162[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp201[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp201[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp201[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp201[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp162[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp162[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp162[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp162[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp201[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp201[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp201[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp201[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
                              : 0U) : 0U))) & __Vtemp162[0U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][0U] 
                  & (~ __Vtemp201[0U])));
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
                              : 0U) : 0U))) & __Vtemp162[1U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][1U] 
                  & (~ __Vtemp201[1U])));
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0[2U] 
            = ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U]
                  : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U]
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                              ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                          ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                              : 0U) : 0U))) & __Vtemp162[2U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][2U] 
                  & (~ __Vtemp201[2U])));
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
                              : 0U) : 0U))) & __Vtemp162[3U]) 
               | (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                     >> 3U)))][3U] 
                  & (~ __Vtemp201[3U])));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena = 
        (1U & ((~ (IData)(vlSelf->rst)) & ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                                            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)
                                            : ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                                  >> 1U)))));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata
                                           : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                                               ? 0ULL
                                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
                                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                                   : 0ULL))));
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2 = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0U : ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr 
            = (0x1fU & ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr)
                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                             ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                      ? (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                         >> 7U) : 0U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0ULL : ((IData)(vlSelf->rst) ? 0ULL
                               : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel)
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0U : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump) 
                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc))
                             ? 2U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                      ? 1U : 0U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata));
        vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel)
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena))
                    ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump)
                             ? 2U : ((1U & (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xb3U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))
                                      ? 4U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                               ? 1U
                                               : 0U)))));
        vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
            = ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel))
                    ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst));
        vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                    ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl)));
    }
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
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0] 
            = (((~ ((IData)(0x7fffffU) << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0))) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram
                [__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0]) 
               | (0xffffffU & (__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0 
                               << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0))));
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1] 
            = (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram
               [__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1] 
               | (0xffffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1))));
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0] 
            = (((~ ((IData)(0x7fffffU) << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0))) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram
                [__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0]) 
               | (0xffffffU & (__Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0 
                               << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0))));
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1] 
            = (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram
               [__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1] 
               | (0xffffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1))));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl;
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl;
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena 
        = __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena;
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
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[0U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[0U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[1U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[1U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U];
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr 
        = __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr;
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl 
        = __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl;
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
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index 
        = __Vdly__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index;
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
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0] = 1U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1] = 0U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0] = 0U;
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1] = 1U;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc = __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc;
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl 
        = __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl;
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__delay 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid))));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_delay 
        = ((IData)(vlSelf->rst) ? 0ULL : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid)))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc
                                           : 0ULL));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid) 
                                       | (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt))));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1 
        = ((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag 
            == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2 
        = ((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag 
            == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid) 
                                       | (0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                                 | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U]))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp = 0ULL;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime 
            = vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__mtime_temp;
        vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp 
            = vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__mtimecmp_temp;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr 
        = ((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
              >> 3U));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1 
        = ((~ (IData)(vlSelf->rst)) & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state_next));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus 
        = (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp)) 
            << 0xbU) | (QData)((IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie) 
                                         << 7U) | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie) 
                                                   << 3U)))));
    __Vtableidx6 = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel;
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_a4acb236_0
        [__Vtableidx6];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_17e5fd70_0
        [__Vtableidx6];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_b039c422_0
        [__Vtableidx6];
    __Vtableidx7 = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel;
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_8c6fee76_0
        [__Vtableidx7];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_f638cf1c_0
        [__Vtableidx7];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_8f16a4f5_0
        [__Vtableidx7];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mret_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                      | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                          | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                              | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mret_ena 
                        = (0x54U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel));
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena = 0U;
    if ((0x2aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena = 1U;
    } else if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                         | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
        if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                      | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
            if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                          | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if (((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
             | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena = 1U;
        } else if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                             | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
            if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                          | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                      | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
            if (((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                 | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
                vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena = 1U;
            } else if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                 | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                      | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                          | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                if (((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                     | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena = 1U;
                } else if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if (((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
             | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena = 1U;
        } else if (((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                    | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena 
                = (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr));
        } else if (((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                    | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena 
                = (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr));
        } else if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena = 0U;
        }
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state = 1U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state = 1U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state 
            = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state 
            = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if (((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
             | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena 
                = (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr));
        } else if (((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                    | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena = 1U;
        } else if (((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                    | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena = 1U;
        } else if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena = 0U;
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel))
            ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1
            : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc
                : 0ULL));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word 
        = ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                          >> 2U))) ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                              >> 0x20U))
            : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel))
            ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2
            : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel))
                ? 4ULL : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel))
                           ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm
                           : 0ULL)));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc = __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_pc;
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt;
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U] 
        = __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_reg)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_reg)));
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0] 
            = (((~ ((IData)(0x7fffffU) << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0))) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram
                [__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0]) 
               | (0xffffffU & (__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0 
                               << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0))));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1] 
            = (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram
               [__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1] 
               | (0xffffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1))));
    }
    if (__Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0] 
            = (((~ ((IData)(0x7fffffU) << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0))) 
                & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram
                [__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0]) 
               | (0xffffffU & (__Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0 
                               << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0))));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram[__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1] 
            = (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram
               [__Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1] 
               | (0xffffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1))));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena) 
            << 6U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena) 
                       << 5U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena) 
                                  << 4U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena) 
                                             << 3U) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena) 
                                                << 2U) 
                                               | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mret_ena)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw)
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1)))
            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed)))
            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1))
            : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1)))
                : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw)
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))
            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed)))
            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))
            : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))
                : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1, 
                         (0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1) 
           << (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1) 
           >> (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1), 
                         (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
           + vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
           - vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump 
        = ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie) 
             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip)) 
            & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus 
                       >> 3U))) & (0ULL != vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing) 
           & (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_ready 
        = (1U & (~ (IData)((0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                    | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                   | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                  >> 2U) & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                              >> 1U) & (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                            | ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                   >> 1U)) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                   >> 2U) & (~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                >> 1U))) & (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
           & (~ (IData)((0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                 | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid 
        = ((~ ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))) 
           & ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena 
        = ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid 
        = ((~ ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))) 
           & ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena 
        = ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed) 
           & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp 
                      >> 0x3fU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed) 
           & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp 
                      >> 0x3fU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena 
        = (1U & ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr) 
                   | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                      >> 1U)) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)) 
                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)));
    vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel 
        = (1U & ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                   >> 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)) 
                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)));
    vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)
            ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
        = ((((((((- (QData)((IData)(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                        >> 2U))))) 
                 & vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus) 
                | ((- (QData)((IData)((1U & (((0x341U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 2U)) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)))))) 
                   & vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mepc)) 
               | ((- (QData)((IData)((1U & ((((0x305U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                >> 1U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))))) 
                  & (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base 
                     << 2U))) | ((- (QData)((IData)(
                                                    ((0x342U 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                        >> 2U))))) 
                                 & vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcause)) 
             | ((- (QData)((IData)(((0x304U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                       >> 2U))))) & 
                ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie)) 
                 << 7U))) | ((- (QData)((IData)(((0xb00U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                    >> 2U))))) 
                             & vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcycle)) 
           | ((- (QData)((IData)(((0x344U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                     >> 2U))))) & ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip)) 
                                                   << 7U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
            ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[0U])))
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign)
            ? (1ULL + (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp))
            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)
            ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc
            : (((((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                            >> 6U))))) 
                  & vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                              >> 5U))))) 
                    & (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                       | vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata))) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                             >> 4U))))) 
                   & (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                      & (~ vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata)))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                            >> 1U))))) 
                  & vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc)));
    vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data 
        = ((0U != (0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)))
            ? vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data
            : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata
                : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl))
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata
                    : 0ULL)));
    if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1) 
                & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                           >> 2U))) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1) 
                                        & (~ (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                                      >> 2U)))) 
                                       | (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2))));
        vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1) 
                & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                           >> 2U))) ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[1U]
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1) 
                    & (~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                  >> 2U)))) ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[0U]
                    : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2) 
                        & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                   >> 2U))) ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[3U]
                        : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2) 
                            & (~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                          >> 2U))))
                            ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[2U]
                            : 0U))));
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid 
            = (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state));
        vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst = 0U;
    }
    __Vtemp223[0U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                       << 1U) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
                                 >> 0x1fU));
    __Vtemp223[1U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                       << 1U) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                                 >> 0x1fU));
    __Vtemp223[2U] = (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                      >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp224, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
    VL_SUB_W(3, __Vtemp225, __Vtemp223, __Vtemp224);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign 
        = (1U & __Vtemp225[2U]);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_dividend 
        = ((((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
             << 0x21U) | (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])) 
                           << 1U) | ((QData)((IData)(
                                                     vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                     >> 0x1fU))) - vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mpp_set 
        = ((1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                   >> 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))
            ? 3U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                     ? 0U : (3U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                    ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                               >> 0xbU))
                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mie_set 
        = (1U & ((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                      >> 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump))) 
                 & ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                     ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)
                     : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                         ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                    >> 3U)) : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mpie_set 
        = (1U & ((1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                         >> 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))
                  ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)
                  : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                     | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                         ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                    >> 7U)) : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid = (1U 
                                                  & (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall)));
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
        = ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                            >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm 
        = ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                  >> 8U)))));
}

extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_3685cfcf_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vysyx_22051013_rvcpu__ConstPool__TABLE_ed99e91e_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_22051013_rvcpu__ConstPool__TABLE_2d9d85ed_0;

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___combo__TOP__3(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___combo__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx3;
    CData/*7:0*/ __Vtableidx5;
    SData/*9:0*/ __Vtableidx4;
    VlWide<4>/*127:0*/ __Vtemp274;
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                       >> 2U))) ? (
                                                   (1U 
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
                         : ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                           >> 1U)))
                             ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                 ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                            >> 0x18U))
                                 : (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                            >> 0x10U)))
                             : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                 ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                            >> 8U))
                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i)))));
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half 
            = (0xffffU & ((0U == (3U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                >> 1U))))
                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i)
                           : ((1U == (3U & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                    >> 1U))))
                               ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                          >> 0x10U))
                               : ((2U == (3U & (IData)(
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                        >> 1U))))
                                   ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                              >> 0x20U))
                                   : (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                              >> 0x30U))))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                         >> 2U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 2U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal 
            = (IData)((0x1bU == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                          >> 2U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr 
            = (IData)((0x19U == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                          >> 2U))));
    }
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data 
            = ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                           ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                               ? 0ULL : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
                                          : ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)) 
                                                  << 0x20U)
                                                  : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))))
                           : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                               ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                   ? 0ULL : ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : ((0U 
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
                               : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                   ? ((IData)(vlSelf->rst)
                                       ? 0ULL : ((1U 
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
                                   : 0ULL))));
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask 
            = ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                ? 0U : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                         ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                             ? 0U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                      ? 0xffU : ((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                              >> 2U)))
                                                   ? 0xf0U
                                                   : 0xfU))))
                         : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                             ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                 ? 0U : ((IData)(vlSelf->rst)
                                          ? 0U : ((0U 
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
                             : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                 ? ((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                              ? ((1U 
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
                                              : ((1U 
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
                                 : 0U))));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re 
        = (1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                    >> 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we 
        = (1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                 & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                       >> 3U))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data = 0ULL;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                ? (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q
                    : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign)))
                        ? (1ULL + (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q))
                        : (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)) 
                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                            ? (1ULL + (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q))
                            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q)))
                : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q);
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                ? (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                    ? (1ULL + (~ (((QData)((IData)(
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])))))
                    : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign)))
                        ? (1ULL + (~ (((QData)((IData)(
                                                       vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])))))
                        : (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)) 
                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                            ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])))
                            : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U]))))))
                : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U]))));
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res 
            = ((0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                ? ((0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                    ? ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                        ? 0ULL : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                   ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                       ? 0ULL : ((4U 
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
                                   : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                       ? 0ULL : ((4U 
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
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                    ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                       ? 0ULL : ((4U 
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
                        : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2)))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))))))))
                : ((0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                    ? ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                       ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)))
                                       : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                             ? 0ULL
                                             : (QData)((IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                                < vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2)))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                               << (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2))
                                           : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2))))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                   << 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                            | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                               | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                               ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))
                                            : (QData)((IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                               < vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2
                                            : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2)))
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                            : 0ULL))))))));
        vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx 
            = (IData)((0x18U == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                          >> 2U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data 
            = ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word))
                            : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half)))
                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte))
                            : vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i))
                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word)))
                            : (((- (QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half) 
                                                       >> 0xfU))))) 
                                << 0x10U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half))))
                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte) 
                                                       >> 7U))))) 
                                << 8U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte)))
                            : 0ULL))) : 0ULL);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal) 
           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x4000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x4000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x7000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x4000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x7000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2001000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2002000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2003000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai 
        = (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x30000000U == (0x30007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x7000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
           & (1U == (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                     >> 0x14U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena 
        = (IData)((0U != (0x4dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
           & (0U == (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                     >> 0x14U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok) 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we)));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
            ? ((IData)(vlSelf->rst) ? 0ULL : (0xfffffffffffffff8ULL 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
            : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we)
                ? ((IData)(vlSelf->rst) ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)
                : 0ULL));
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                                  | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok) 
                                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata 
        = ((((0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
             | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
            | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr))
            : ((0U != (0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div))
                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)
                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp
                        : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)
                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp
                            : 0ULL)) : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res)));
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
            ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
            : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))
            ? 1U : ((1U & ((((IData)((0U != (0xf8U 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump)))
                     ? 2U : 0U));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
            ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                        >> 0x14U)) : 0U);
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
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena 
        = (1U & ((((IData)((0U != (0x7fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr)) 
                  | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))) 
                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall)));
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall));
    vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena 
        = (((((((0xa00003f8ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                & (0xa00003ffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc)) 
               | ((0x2000000ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                  & (0x200ffffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
              | ((0xa0000048ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                 & (0xa000004fULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
             | ((0xa0000100ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                & (0xa0000107ULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
            | ((0xa1000000ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
               & (0xa10752ffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
           | ((0xa0000060ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
              & (0xa0000063ULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc)));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint 
        = ((0x2000000ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
           & (0x200ffffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena 
        = ((0U != (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                            >> 7U))) & (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward 
        = ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward 
        = ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward 
        = ((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)));
    __Vtableidx5 = vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel;
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_3685cfcf_0
        [__Vtableidx5];
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
            ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                        >> 0xfU)) : 0U);
    if (vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) {
        vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size 
            = ((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                 | (9U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                | (0xdU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                ? 3U : ((((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                          | (0xaU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                         | (0xeU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                         ? 4U : ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                   | (0xbU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                                  | (0xfU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                  ? 5U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                           | (0xcU 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                           ? 6U : 0U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size = 6U;
        vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask 
            = vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask)
            : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                ? 0U : 0xffU));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we)
            : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena)
                : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand 
        = ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state)) 
           & (2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                      ? 2U : 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_b_valid = 
        ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                  ? 2U : 1U)) ? (3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
          : (3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state)));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id = (
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint))
                                                    ? 2U
                                                    : 1U);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2 = 
        (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward) 
              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)) 
             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward)))
          ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward)
              ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
              : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                  : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward)
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                      : 0ULL))) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                    ? (((~ (IData)(vlSelf->rst)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                       [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                        : 0ULL) : 0ULL));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward 
        = ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward 
        = ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward 
        = ((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size = 
        ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))
          ? 6U : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))
                   ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size)
                   : 0U));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb 
        = ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask)
            : 0U);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty 
        = ((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))] & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))]) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty 
        = ((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))] & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))]) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid 
        = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_w_state)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid = 
        ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_w_state)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we));
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state_next 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
            ? (((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)) 
                & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                   & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))))
                ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                               ? (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)))
                                   ? 1U : 2U) : 1U));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ar_sh 
        = (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
             ? (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
             : (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))) 
           & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)) 
           & ((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
              & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh 
        = (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
             ? (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
             : (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))) 
           & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
               ? (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
               : (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ready = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT____Vcellinp__csr_operate__core_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid) 
           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 = 
        (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward) 
              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)) 
             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward)))
          ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward)
              ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
              : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                  : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward)
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                      : 0ULL))) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                    ? (((~ (IData)(vlSelf->rst)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                       [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                        : 0ULL) : 0ULL));
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
        = (((QData)((IData)((((- (IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                >> 7U)))) 
                              << 0x18U) | ((0xff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                              >> 6U)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                                 >> 5U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                                  >> 4U)))))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                         >> 3U)))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                               >> 2U)))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb)))))))))));
    if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit)
                ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit)
                    ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U])))
                    : 0ULL));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit)) 
               & 1U);
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid = 0U;
    }
    VL_EXTEND_WQ(128,64, __Vtemp274, vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64);
    if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp274[0U] : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp274[1U] : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp274[2U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)
                                     ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64)
                                     : 0U));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp274[3U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)
                                     ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64 
                                                >> 0x20U))
                                     : 0U));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)) 
               & 1U);
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid = 0U;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data 
        = (((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty)
                ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U]))))
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data 
        = (((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty)
                ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U]))))
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid 
        = ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid 
        = ((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid 
        = ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid 
        = ((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state_next 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand)
                ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                               ? (((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))
                                   ? 1U : 2U) : 1U));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid 
        = ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))
            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh)
            : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we) 
               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_b_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
           - vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
            : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data
                : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data
                    : 0ULL)));
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena 
        = ((~ (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) 
           & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid)));
    if ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                    ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                       [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                        ? 0U : (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use
                                [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                                 ? 0xffffffffU : 0U))
                    : 0U) : 0xffffffffU);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                    ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                       [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                        ? 0U : (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use
                                [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                                 ? 0xffffffffU : 0U))
                    : 0U) : 0xffffffffU);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                    ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                       [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                        ? 0xffffffffU : 0U) : 0xffffffffU)
                : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                    ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                       [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                        ? 0xffffffffU : 0U) : 0xffffffffU)
                : 0U);
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                   [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                    ? 0U : 0xffffffffU) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                   [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                    ? 0U : 0xffffffffU) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                   [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                    ? 0xffffffffU : 0U) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                   [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                    ? 0xffffffffU : 0U) : 0U);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__write_in_valid 
        = ((~ (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) 
           & ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
              & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1))));
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_ena 
        = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)));
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_pc 
        = ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
             & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))
            ? (0xfffffffffffffff8ULL & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc)
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid 
        = (1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                  ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid))
                  : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                      ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid))
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))
                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re) 
                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data 
        = ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) ? vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state_next 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
            ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)) 
                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid) 
                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)))
                ? 3U : 1U) : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
                               ? (((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state)) 
                                   & (2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U)))
                                   ? 1U : 3U) : 1U));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state_next 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
            ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready)) 
                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid) 
                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready)))
                ? 3U : 1U) : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand)
                                   ? 1U : 3U) : 1U));
    __Vtableidx4 = (((IData)(vlSelf->rst) << 9U) | 
                    (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2) 
                      << 8U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1) 
                                 << 7U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__write_in_valid) 
                                                  << 4U) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_ed99e91e_0
        [__Vtableidx4];
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read 
        = ((0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_ena));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid 
        = ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
           & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid 
        = ((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
           & ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena 
        = ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena 
        = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc 
        = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
            ? (0xfffffffffffffff8ULL & vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc)
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc 
        = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
            ? (0xfffffffffffffff8ULL & vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc)
            : 0ULL);
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
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read 
        = ((0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
           & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
               ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
               : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                   ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                   : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena)))));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                ? vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data
                : 0ULL) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                ? (((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1
                                     : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc) 
                                   + ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                       ? 4ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm))
                                : 0ULL) : (((IData)(vlSelf->rst) 
                                            | (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)))
                                            ? 0x80000000ULL
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                               + (((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(
                                                              (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                                                           >> 0x13U))))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     (0xfffffU 
                                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                                                         << 1U)))))
                                                   : 
                                                  (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                                    & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                       >> 0xbU))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                                          << 1U)))))
                                                    : 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 4ULL)))))));
    __Vtableidx3 = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh) 
                     << 4U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read) 
                                << 3U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read) 
                                           << 2U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state_next 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_2d9d85ed_0
        [__Vtableidx3];
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr 
        = ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) ? vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr = 
        ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))
          ? vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_pc
          : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))
              ? vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc
              : 0ULL));
    if (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready)))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag 
            = (0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                    >> 9U)));
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                >> 3U)));
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag 
            = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index 
            = (0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__mtime_temp 
        = ((0x200bff8ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
            ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
               | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                  & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime))
            : (1ULL + vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime));
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__mtimecmp_temp 
        = ((0x2004000ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
            ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
               | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                  & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp))
            : vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp);
    if ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr 
            = vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data 
            = ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                ? ((0x200bff8ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime
                    : ((0x2004000ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                        ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp
                        : 0ULL)) : 0ULL);
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data 
            = ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data
                : 0ULL);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i 
        = (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
            ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i);
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
