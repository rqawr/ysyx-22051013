// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22051013_rvcpu.h for the primary calling header

#include "Vysyx_22051013_rvcpu___024root.h"
#include "Vysyx_22051013_rvcpu__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void if_id_thepc(long long thepc_data, const svBitVecVal* the_inst);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__idu1__DOT__if_id_thepc_TOP(QData/*63:0*/ thepc_data, IData/*31:0*/ the_inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__idu1__DOT__if_id_thepc_TOP\n"); );
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

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__reg3__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__reg3__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___combo__TOP__1(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___combo__TOP__1\n"); );
    // Body
    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__ebreak_TOP(
                                                                                ((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (1U 
                                                                                & (IData)(vlSelf->rst))) 
                                                                                & (0x73U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->inst)))) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->inst 
                                                                                >> 0x14U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm 
        = ((0x80000U & (vlSelf->inst >> 0xcU)) | ((0x7f800U 
                                                   & (vlSelf->inst 
                                                      >> 1U)) 
                                                  | ((0x400U 
                                                      & (vlSelf->inst 
                                                         >> 0xaU)) 
                                                     | (0x3ffU 
                                                        & (vlSelf->inst 
                                                           >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc 
        = ((~ (IData)(vlSelf->rst)) & (0x17U == (0x7fU 
                                                 & vlSelf->inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui 
        = ((~ (IData)(vlSelf->rst)) & (0x37U == (0x7fU 
                                                 & vlSelf->inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal 
        = ((~ (IData)(vlSelf->rst)) & (0x6fU == (0x7fU 
                                                 & vlSelf->inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi 
        = (IData)(((0U == (1U & (IData)(vlSelf->rst))) 
                   & (0x13U == (0x707fU & vlSelf->inst))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr 
        = ((~ (IData)(vlSelf->rst)) & (0x67U == (0x7fU 
                                                 & vlSelf->inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel 
        = ((0x70U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)) 
           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal) 
               << 3U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui) 
                          << 2U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc) 
                                     << 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2 = ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 
                                                   ((((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal))
                                                     ? 
                                                    (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0x14U))))
                                                      : 
                                                     (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (0xff000000U 
                                                                          & (vlSelf->inst 
                                                                             << 0xcU)))))
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
                                                        : 0ULL)))
                                                     : 0ULL));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi) 
           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)) 
           | ((((IData)(((0U == (1U & (IData)(vlSelf->rst))) 
                         & (0x73U == (0x707fU & vlSelf->inst)))) 
                & (1U == (vlSelf->inst >> 0x14U))) 
               << 6U) | (((IData)(((0U == (1U & (IData)(vlSelf->rst))) 
                                   & (0x3023U == (0x707fU 
                                                  & vlSelf->inst)))) 
                          << 5U) | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr) 
                                    << 4U))));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__3(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32;
    QData/*63:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32;
    // Body
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__i = 0x20U;
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__idu1__DOT__if_id_thepc_TOP(vlSelf->inst_pc, vlSelf->inst);
    }
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v0 = 1U;
    } else if (((0U != (0x1fU & (vlSelf->inst >> 7U))) 
                & (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr)))) {
        __Vdlyvval__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32 
            = vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata;
        __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32 = 1U;
        __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg3__DOT__regs__v32 
            = vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr;
    }
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
    vlSelf->inst_pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                        : vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next);
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___combo__TOP__5(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr 
        = ((0U != (0x1fU & (vlSelf->inst >> 7U))) ? 
           (0x1fU & (vlSelf->inst >> 7U)) : 0U);
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next = 0x80000000ULL;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc 
            = vlSelf->inst_pc;
        vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                ? (((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                   [((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                      ? (0x1fU & (vlSelf->inst >> 0xfU))
                      : 0U)] : 0ULL) : (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)) 
                                         | (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)))
                                         ? vlSelf->inst_pc
                                         : 0ULL));
        vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
            = ((0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                ? 0ULL : ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                           ? 0ULL : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                      ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                          ? 0ULL : 
                                         ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                             ? 0ULL
                                             : (4ULL 
                                                + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc)))))
                                      : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                          ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                              ? 0ULL
                                              : ((2U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc))))
                                          : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                              ? ((2U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                   + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))
                                              : ((2U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                   + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                   + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                   : 0ULL)))))));
        vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr))
                ? ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                    ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc 
                       + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                    : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                        ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                           + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                        : 0ULL)) : ((IData)(vlSelf->rst)
                                     ? 0x80000000ULL
                                     : (4ULL + vlSelf->inst_pc)));
    }
}

void Vysyx_22051013_rvcpu___024root___eval(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval\n"); );
    // Body
    Vysyx_22051013_rvcpu___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22051013_rvcpu___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vysyx_22051013_rvcpu___024root___combo__TOP__5(vlSelf);
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
