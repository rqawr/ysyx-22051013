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
extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_3685cfcf_0;

void Vysyx_22051013_rvcpu___024root___settle__TOP__3(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__3\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    VlWide<4>/*127:0*/ __Vtemp1;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    // Body
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
    VL_EXTEND_WQ(128,64, __Vtemp1, vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1);
    VL_EXTEND_WQ(128,64, __Vtemp2, vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2);
    VL_MUL_W(4, __Vtemp3, __Vtemp1, __Vtemp2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U] 
        = __Vtemp3[0U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[1U] 
        = __Vtemp3[1U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[2U] 
        = __Vtemp3[2U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[3U] 
        = __Vtemp3[3U];
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
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word 
        = ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                          >> 2U))) ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i 
                                              >> 0x20U))
            : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__wlen = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_o = 0ULL;
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
}

void Vysyx_22051013_rvcpu___024root___eval_initial(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_22051013_rvcpu___024root___eval_settle(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval_settle\n"); );
    // Body
    Vysyx_22051013_rvcpu___024root___settle__TOP__3(vlSelf);
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
    vlSelf->ysyx_22051013_rvcpu__DOT__if_id_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm = VL_RAND_RESET_I(20);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__s_imm = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__b_imm = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sd = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ld = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lwu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_beq = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bne = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_blt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bgeu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_div = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_rem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divuw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remuw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ebreak = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_addw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sra_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sllw = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sllw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__srlw = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_srlw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sraw = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sraw_op2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__wlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half = VL_RAND_RESET_I(16);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
