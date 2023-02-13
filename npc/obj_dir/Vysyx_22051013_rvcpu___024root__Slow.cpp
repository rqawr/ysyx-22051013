// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22051013_rvcpu.h for the primary calling header

#include "Vysyx_22051013_rvcpu___024root.h"
#include "Vysyx_22051013_rvcpu__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22051013_rvcpu___024root___ctor_var_reset(Vysyx_22051013_rvcpu___024root* vlSelf);

Vysyx_22051013_rvcpu___024root::Vysyx_22051013_rvcpu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22051013_rvcpu___024root___ctor_var_reset(this);
}

void Vysyx_22051013_rvcpu___024root::__Vconfigure(Vysyx_22051013_rvcpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22051013_rvcpu___024root::~Vysyx_22051013_rvcpu___024root() {
}

void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__ebreak_TOP(CData/*0:0*/ ebreak_ena);

void Vysyx_22051013_rvcpu___024root___settle__TOP__2(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__2\n"); );
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
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr 
        = ((0U != (0x1fU & (vlSelf->inst >> 7U))) ? 
           (0x1fU & (vlSelf->inst >> 7U)) : 0U);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc = ((IData)(vlSelf->rst)
                                                   ? 0ULL
                                                   : vlSelf->inst_pc);
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next = 0x80000000ULL;
    } else {
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

void Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__reg3__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22051013_rvcpu___024root___initial__TOP__4(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___initial__TOP__4\n"); );
    // Body
    Vysyx_22051013_rvcpu___024root____Vdpiimwrap_ysyx_22051013_rvcpu__DOT__reg3__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs);
}

void Vysyx_22051013_rvcpu___024root___eval_initial(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_22051013_rvcpu___024root___initial__TOP__4(vlSelf);
}

void Vysyx_22051013_rvcpu___024root___eval_settle(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval_settle\n"); );
    // Body
    Vysyx_22051013_rvcpu___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22051013_rvcpu___024root___final(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___final\n"); );
}

void Vysyx_22051013_rvcpu___024root___ctor_var_reset(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst_pc = VL_RAND_RESET_Q(64);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm = VL_RAND_RESET_I(20);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
