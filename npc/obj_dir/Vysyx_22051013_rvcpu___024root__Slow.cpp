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

void Vysyx_22051013_rvcpu___024root___settle__TOP__15(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__15\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1201;
    VlWide<5>/*159:0*/ __Vtemp1202;
    VlWide<5>/*159:0*/ __Vtemp1203;
    VlWide<5>/*159:0*/ __Vtemp1204;
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
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel 
        = (1U & ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                              >> 1U) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__mul_doing) 
           & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__cnt)));
    __Vtemp1201[0U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[0U] 
                        << 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2_1));
    __Vtemp1201[1U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[0U] 
                        >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[1U] 
                                     << 1U));
    __Vtemp1201[2U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[1U] 
                        >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[2U] 
                                     << 1U));
    __Vtemp1201[3U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[2U] 
                        >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[3U] 
                                     << 1U));
    __Vtemp1201[4U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[3U] 
                        >> 0x1fU) | (0xeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op2[4U] 
                                             << 1U)));
    VL_ADD_W(5, __Vtemp1202, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_op1, __Vtemp1201);
    VL_EXTEND_WI(132,1, __Vtemp1203, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__addr_cin));
    VL_ADD_W(5, __Vtemp1204, __Vtemp1202, __Vtemp1203);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[0U] 
        = __Vtemp1204[0U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[1U] 
        = __Vtemp1204[1U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[2U] 
        = __Vtemp1204[2U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[3U] 
        = __Vtemp1204[3U];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__result_temp[4U] 
        = (0xfU & __Vtemp1204[4U]);
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
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data = 
        ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
          ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data
          : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data 
        = ((IData)(vlSelf->rst) ? 0ULL : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata
                                           : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl))
                                               ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal 
            = (IData)((0x1bU == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                          >> 2U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                         >> 2U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 2U))));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word 
        = ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                          >> 2U))) ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                              >> 0x20U))
            : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half = 0U;
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
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1, 
                         (0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr 
        = ((0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
            ? (0xfffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
            : 0U);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0x19U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                    >> 2U)))));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we 
        = (1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                 & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                       >> 3U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re 
        = (1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                    >> 3U)));
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
                                                        : 
                                                       (3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->rst)
                                                         ? 0U
                                                         : (IData)(
                                                                   (8U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                        >> 2U))))))))))));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x1ffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                         >> 3U)) ^ 
                         (0x3ffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                         >> 2U))) ^ 
                        (0x7ffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                        >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                       >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                   >> 0xdU)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                   >> 0xcU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                        >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                    >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xfffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                  >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0xfU))) 
                     | (0x1fffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                     >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0xeU)))) 
                    | (0xfffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                   >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3ffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                  >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x11U))) 
                     | (0x7ffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                    >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0x10U)))) 
                    | (0x3ffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                   >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                 >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x13U))) 
                     | (0x1ff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                    >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0x12U)))) 
                    | (0xff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                  >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x3f0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                    >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0x15U))) 
                        | (0x7f0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                   >> 0x14U)))) 
                       | (0x3f0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                     >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                   >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x17U))) 
                        | (0x1e0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                      >> 0x17U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                   >> 0x16U)))) 
                       | (0xe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                    >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & ((0x40U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                   << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0x19U)) 
                                 | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                     >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 0x18U)))) 
                       | (0xc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                    << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                          << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                    << 5U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                << 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  << 6U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                           << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                     << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                           << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                     << 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 << 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                   << 4U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                            << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                      << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                             << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                         << 1U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                   << 2U))) 
                        | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                              << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x3ffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                          >> 2U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                          >> 1U))) 
                         | (0x7ffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                            >> 1U) 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U]))) 
                        | (0x3ffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 2U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                      >> 0xeU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                  >> 0xdU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0xcU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xfffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                 >> 0x10U)) ^ (0x1fffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 0xfU))) 
                    ^ (0x3fffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                   >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x3ffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                 >> 0x12U)) ^ (0x7ffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 0x11U))) 
                    ^ (0xfffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                  >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                >> 0x14U)) ^ (0x1ff8U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0x13U))) 
                    ^ (0x3ff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                  >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x3f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                   >> 0x16U)) ^ (0x7f0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                    >> 0x15U))) 
                       ^ (0xff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                    >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                  >> 0x18U)) ^ (0x1e0U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                   >> 0x17U))) 
                       ^ (0x3e0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                    >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                         << 6U) ^ (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                            >> 0x19U))) 
                       ^ (0xc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                   >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                        << 4U)) ^ (0xffffff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                      << 5U))) 
                       ^ (0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                         << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                         << 2U)) ^ 
                         (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                         << 3U))) ^ 
                        (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                        << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffffe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U]) 
                         ^ (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           << 1U))) 
                        ^ (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                          << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x3ffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                         >> 2U)) ^ 
                         (0x7ffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                         >> 1U))) ^ 
                        (0xfffffc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                       >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                   >> 0xcU)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                   >> 0xbU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                        >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                    >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1fffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                   >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0xeU))) 
                     | (0x3fffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                     >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0xdU)))) 
                    | (0x1fffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                    >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7ffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                  >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x10U))) 
                     | (0xfffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                    >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0xfU)))) 
                    | (0x7ffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                   >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x1ff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                  >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x12U))) 
                     | (0x3ff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                    >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0x11U)))) 
                    | (0x1ff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                   >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x7f0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                    >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0x14U))) 
                        | (0xff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                   >> 0x13U)))) 
                       | (0x7f0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x1e0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                    >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0x16U))) 
                        | (0x3e0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                      >> 0x16U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                   >> 0x15U)))) 
                       | (0x1e0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                     >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x40U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                   >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x18U))) 
                        | (0xc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                     >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0x17U)))) 
                       | (0x40U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                    >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                          << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                    << 6U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                << 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  << 7U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                           << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                     << 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                           << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                     << 4U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 << 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                   << 5U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                            << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                      << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                           << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                     << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 << 2U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                   << 3U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                            << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                      << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x7ffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                          >> 1U) & 
                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU])) 
                         | (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              << 1U)))) 
                        | (0x7ffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 1U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                      >> 0xdU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                  >> 0xcU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0xbU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1fffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                  >> 0xfU)) ^ (0x3fffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0xeU))) 
                    ^ (0x7fffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                   >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7ffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                 >> 0x11U)) ^ (0xfffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0x10U))) 
                    ^ (0x1fffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                   >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x1ff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                 >> 0x13U)) ^ (0x3ff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0x12U))) 
                    ^ (0x7ff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                  >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x7f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                   >> 0x15U)) ^ (0xff0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                    >> 0x14U))) 
                       ^ (0x1ff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                     >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x1e0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                   >> 0x17U)) ^ (0x3e0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                    >> 0x16U))) 
                       ^ (0x7e0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                    >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                  >> 0x19U)) ^ (0xc0U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                   >> 0x18U))) 
                       ^ (0x1c0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                    >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                        << 5U)) ^ (0xffffff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                      << 6U))) 
                       ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                          << 7U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                         << 3U)) ^ 
                         (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                         << 4U))) ^ 
                        (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                        << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                         << 1U)) ^ 
                         (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                         << 2U))) ^ 
                        (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                        << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x7ffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                         >> 1U)) ^ 
                         (0xfffffc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU])) 
                        ^ (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                          << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                       >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                   >> 0xbU)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                   >> 0xaU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                        >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                    >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3fffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                   >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0xdU))) 
                     | (0x7fffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                     >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0xcU)))) 
                    | (0x3fffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                    >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xfffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                  >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0xfU))) 
                     | (0x1fffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                     >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0xeU)))) 
                    | (0xfffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                   >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x3ff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                  >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x11U))) 
                     | (0x7ff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                    >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0x10U)))) 
                    | (0x3ff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                   >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                    >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0x13U))) 
                        | (0x1ff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                       >> 0x12U)))) 
                       | (0xff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x3e0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                    >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0x15U))) 
                        | (0x7e0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                   >> 0x14U)))) 
                       | (0x3e0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                     >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                   >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x17U))) 
                        | (0x1c0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                      >> 0x17U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                   >> 0x16U)))) 
                       | (0xc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                    >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0xffffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                         << 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                   << 7U))) 
                        | (0x80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                     << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x18U)))) 
                       | (0x80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                    << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                           << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                     << 5U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 << 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                   << 6U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                            << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                      << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                           << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                     << 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 << 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                   << 4U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                            << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                      << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                             << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                         << 1U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                   << 2U))) 
                        | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                              << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                      >> 0xcU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                  >> 0xbU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0xaU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3fffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                  >> 0xeU)) ^ (0x7fffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0xdU))) 
                    ^ (0xffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                   >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xfffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                 >> 0x10U)) ^ (0x1fffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0xfU))) 
                    ^ (0x3fffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                   >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x3ff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                 >> 0x12U)) ^ (0x7ff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0x11U))) 
                    ^ (0xfff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                  >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                   >> 0x14U)) ^ (0x1ff0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                    >> 0x13U))) 
                       ^ (0x3ff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                     >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x3e0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                   >> 0x16U)) ^ (0x7e0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                    >> 0x15U))) 
                       ^ (0xfe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                    >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                  >> 0x18U)) ^ (0x1c0U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                   >> 0x17U))) 
                       ^ (0x3c0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                    >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                        << 6U)) ^ (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                   << 7U)) 
                       ^ (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                   >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                         << 4U)) ^ 
                         (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                         << 5U))) ^ 
                        (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                        << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                         << 2U)) ^ 
                         (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                         << 3U))) ^ 
                        (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                        << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU]) 
                         ^ (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           << 1U))) 
                        ^ (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                          << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                       >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                   >> 0xaU)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                   >> 9U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                        >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                    >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7fffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                   >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0xcU))) 
                     | (0xffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0xbU)))) 
                    | (0x7fffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                    >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1fffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                   >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0xeU))) 
                     | (0x3fffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0xdU)))) 
                    | (0x1fffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                    >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x7ff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                  >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x10U))) 
                     | (0xfff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                    >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0xfU)))) 
                    | (0x7ff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                   >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x1ff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0x12U))) 
                        | (0x3ff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                       >> 0x11U)))) 
                       | (0x1ff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                   >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7e0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                    >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0x14U))) 
                        | (0xfe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                   >> 0x13U)))) 
                       | (0x7e0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1c0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                    >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0x16U))) 
                        | (0x3c0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                      >> 0x16U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                   >> 0x15U)))) 
                       | (0x1c0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & ((0x80U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                   << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0x18U)) 
                                 | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0x17U)))) 
                       | (0x180U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                     << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                           << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                     << 6U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 << 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                   << 7U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                            << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                      << 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                           << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                     << 4U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 << 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                   << 5U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                            << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                      << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                           << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                     << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 << 2U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                   << 3U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                            << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                      << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                      >> 0xbU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                  >> 0xaU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 9U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7fffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                  >> 0xdU)) ^ (0xffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0xcU))) 
                    ^ (0x1ffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                    >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1fffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                  >> 0xfU)) ^ (0x3fffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0xeU))) 
                    ^ (0x7fffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                   >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x7ff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                 >> 0x11U)) ^ (0xfff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0x10U))) 
                    ^ (0x1fff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                   >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x1ff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                    >> 0x13U)) ^ (0x3ff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                     >> 0x12U))) 
                       ^ (0x7ff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7e0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                   >> 0x15U)) ^ (0xfe0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                    >> 0x14U))) 
                       ^ (0x1fe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1c0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                   >> 0x17U)) ^ (0x3c0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                    >> 0x16U))) 
                       ^ (0x7c0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                    >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                         << 7U) ^ (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                            >> 0x18U))) 
                       ^ (0x180U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                    >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                         << 5U)) ^ 
                         (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                         << 6U))) ^ 
                        (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                        << 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                         << 3U)) ^ 
                         (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                         << 4U))) ^ 
                        (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                        << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                         << 1U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                         << 2U))) ^ 
                        (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                        << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                       >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                   >> 9U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 8U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                        >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                    >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                   >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0xbU))) 
                     | (0x1ffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                      >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0xaU)))) 
                    | (0xffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                    >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3fffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                   >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0xdU))) 
                     | (0x7fffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                     >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0xcU)))) 
                    | (0x3fffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                    >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xfff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                  >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0xfU))) 
                     | (0x1fff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                     >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0xeU)))) 
                    | (0xfff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                   >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x3ff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                     >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x11U))) 
                        | (0x7ff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                       >> 0x10U)))) 
                       | (0x3ff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xfe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                    >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x13U))) 
                        | (0x1fe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                       >> 0x12U)))) 
                       | (0xfe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x3c0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                    >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x15U))) 
                        | (0x7c0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 0x14U)))) 
                       | (0x3c0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                     >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                   >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x17U))) 
                        | (0x180U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                      >> 0x17U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 0x16U)))) 
                       | (0x80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                    >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                           << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     << 7U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 << 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                   << 8U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                            << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                      << 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                           << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     << 5U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 << 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                   << 6U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                            << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                      << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                           << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     << 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 << 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                   << 4U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                            << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                      << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                      >> 0xaU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                  >> 9U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 8U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                  >> 0xcU)) ^ (0x1ffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0xbU))) 
                    ^ (0x3ffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                    >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x3fffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                  >> 0xeU)) ^ (0x7fffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0xdU))) 
                    ^ (0xffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                   >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xfff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                 >> 0x10U)) ^ (0x1fff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0xfU))) 
                    ^ (0x3fff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                   >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x3ff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                    >> 0x12U)) ^ (0x7ff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                     >> 0x11U))) 
                       ^ (0xfff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                     >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xfe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                   >> 0x14U)) ^ (0x1fe0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 0x13U))) 
                       ^ (0x3fe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                     >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x3c0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                   >> 0x16U)) ^ (0x7c0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 0x15U))) 
                       ^ (0xfc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                    >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                  >> 0x18U)) ^ (0x180U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 0x17U))) 
                       ^ (0x380U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                    >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                         << 6U)) ^ 
                         (0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                         << 7U))) ^ 
                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                         << 8U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                         << 4U)) ^ 
                         (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                         << 5U))) ^ 
                        (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                        << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                         << 2U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                         << 3U))) ^ 
                        (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                        << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                       >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                 >> 8U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 8U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 7U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                  >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1ffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                    >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0xaU))) 
                     | (0x3ffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                      >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 9U)))) 
                    | (0x1ffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7fffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                   >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0xcU))) 
                     | (0xffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0xbU)))) 
                    | (0x7fffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                    >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x1fff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                   >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0xeU))) 
                     | (0x3fff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0xdU)))) 
                    | (0x1fff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                    >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x7ff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x10U))) 
                        | (0xfff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                       >> 0xfU)))) 
                       | (0x7ff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x1fe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x12U))) 
                        | (0x3fe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                       >> 0x11U)))) 
                       | (0x1fe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7c0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                    >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x14U))) 
                        | (0xfc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0x13U)))) 
                       | (0x7c0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x180U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                    >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x16U))) 
                        | (0x380U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                      >> 0x16U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0x15U)))) 
                       | (0x180U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xffffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                          << 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                          << 8U))) 
                         | (0x100U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                       << 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x17U)))) 
                        | (0x100U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                      << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                           << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                     << 6U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 << 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   << 7U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                            << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                      << 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                           << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                     << 4U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 << 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   << 5U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                            << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                      << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                      >> 9U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                >> 8U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                           >> 7U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1ffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                   >> 0xbU)) ^ (0x3ffffeU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0xaU))) 
                    ^ (0x7ffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                    >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7fffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                  >> 0xdU)) ^ (0xffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0xcU))) 
                    ^ (0x1ffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                    >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x1fff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                  >> 0xfU)) ^ (0x3fff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0xeU))) 
                    ^ (0x7fff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                   >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x7ff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                    >> 0x11U)) ^ (0xfff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                     >> 0x10U))) 
                       ^ (0x1fff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                      >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x1fe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                    >> 0x13U)) ^ (0x3fe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                     >> 0x12U))) 
                       ^ (0x7fe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7c0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                   >> 0x15U)) ^ (0xfc0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 0x14U))) 
                       ^ (0x1fc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x180U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                   >> 0x17U)) ^ (0x380U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 0x16U))) 
                       ^ (0x780U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                    >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xffffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                         << 7U)) ^ 
                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                          << 8U)) ^ (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                         << 5U)) ^ 
                         (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                         << 6U))) ^ 
                        (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                        << 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                         << 3U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                         << 4U))) ^ 
                        (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                        << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                       >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                 >> 7U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 7U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 6U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                  >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3ffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                    >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 9U))) 
                     | (0x7ffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                      >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 8U)))) 
                    | (0x3ffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                     >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                   >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0xbU))) 
                     | (0x1ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                      >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0xaU)))) 
                    | (0xffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                    >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x3fff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                   >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0xdU))) 
                     | (0x7fff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                     >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0xcU)))) 
                    | (0x3fff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                    >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xfff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                     >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0xfU))) 
                        | (0x1fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                        >> 0xeU)))) 
                       | (0xfff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x3fe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                     >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x11U))) 
                        | (0x7fe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                       >> 0x10U)))) 
                       | (0x3fe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xfc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                    >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x13U))) 
                        | (0x1fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                       >> 0x12U)))) 
                       | (0xfc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x380U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                    >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x15U))) 
                        | (0x780U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 0x14U)))) 
                       | (0x380U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                     >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & ((0x100U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     << 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0x17U)) 
                                   | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                       >> 0x17U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                       >> 0x16U)))) 
                        | (0x300U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                      << 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                           << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     << 7U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 << 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   << 8U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                            << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                      << 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                           << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                     << 5U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 << 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   << 6U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                            << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                      << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                      >> 8U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                >> 7U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                           >> 6U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3ffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                   >> 0xaU)) ^ (0x7ffffeU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 9U))) 
                    ^ (0xfffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                    >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                  >> 0xcU)) ^ (0x1ffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0xbU))) 
                    ^ (0x3ffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                    >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x3fff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                  >> 0xeU)) ^ (0x7fff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0xdU))) 
                    ^ (0xffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                   >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xfff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                    >> 0x10U)) ^ (0x1fff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                     >> 0xfU))) 
                       ^ (0x3fff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                      >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x3fe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                    >> 0x12U)) ^ (0x7fe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                     >> 0x11U))) 
                       ^ (0xffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                     >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xfc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                   >> 0x14U)) ^ (0x1fc0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 0x13U))) 
                       ^ (0x3fc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                     >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x380U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                   >> 0x16U)) ^ (0x780U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 0x15U))) 
                       ^ (0xf80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                    >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                          << 8U) ^ (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                              >> 0x17U))) 
                        ^ (0x300U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                     >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                         << 6U)) ^ 
                         (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                         << 7U))) ^ 
                        (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                        << 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                         << 4U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                         << 5U))) ^ 
                        (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                        << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                       >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                 >> 6U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 6U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 5U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                        >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                  >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7ffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                    >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                              >> 8U))) 
                     | (0xfffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                      >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 7U)))) 
                    | (0x7ffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                    >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0xaU))) 
                     | (0x3ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                      >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 9U)))) 
                    | (0x1ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x7fff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                   >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0xcU))) 
                     | (0xffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0xbU)))) 
                    | (0x7fff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                    >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x1fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                      >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0xeU))) 
                        | (0x3fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                        >> 0xdU)))) 
                       | (0x1fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7fe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x10U))) 
                        | (0xffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                       >> 0xfU)))) 
                       | (0x7fe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x12U))) 
                        | (0x3fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                       >> 0x11U)))) 
                       | (0x1fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x780U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                    >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x14U))) 
                        | (0xf80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0x13U)))) 
                       | (0x780U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x100U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x16U))) 
                         | (0x300U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                       >> 0x16U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                       >> 0x15U)))) 
                        | (0x100U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                      >> 0x17U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                           << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                     << 8U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 << 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   << 9U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                            << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                      << 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                           << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                     << 6U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 << 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   << 7U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                            << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                      << 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                      >> 7U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                >> 6U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                           >> 5U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7ffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                   >> 9U)) ^ (0xfffffeU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 8U))) 
                    ^ (0x1fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1ffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                   >> 0xbU)) ^ (0x3ffffcU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0xaU))) 
                    ^ (0x7ffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                    >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x7fff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                  >> 0xdU)) ^ (0xffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0xcU))) 
                    ^ (0x1ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                    >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x1fff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 0xfU)) ^ (0x3fff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                     >> 0xeU))) 
                       ^ (0x7fff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                      >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7fe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                    >> 0x11U)) ^ (0xffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                     >> 0x10U))) 
                       ^ (0x1ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                      >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1fc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                    >> 0x13U)) ^ (0x3fc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                     >> 0x12U))) 
                       ^ (0x7fc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x780U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                   >> 0x15U)) ^ (0xf80U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                    >> 0x14U))) 
                       ^ (0x1f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                    >> 0x17U)) ^ (0x300U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                     >> 0x16U))) 
                        ^ (0x700U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                         << 7U)) ^ 
                         (0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                         << 8U))) ^ 
                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                         << 9U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                         << 5U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                         << 6U))) ^ 
                        (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                        << 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                       >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                 >> 5U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 5U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 4U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                        >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                  >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xfffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                    >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                              >> 7U))) 
                     | (0x1fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                       >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 6U)))) 
                    | (0xfffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                    >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 9U))) 
                     | (0x7ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                      >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 8U)))) 
                    | (0x3ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                   >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0xbU))) 
                     | (0x1ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                      >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0xaU)))) 
                    | (0xffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                    >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x3fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                      >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0xdU))) 
                        | (0x7fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                        >> 0xcU)))) 
                       | (0x3fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0xfU))) 
                        | (0x1ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                        >> 0xeU)))) 
                       | (0xffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x3fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x11U))) 
                        | (0x7fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                       >> 0x10U)))) 
                       | (0x3fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0xf80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                    >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x13U))) 
                        | (0x1f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                       >> 0x12U)))) 
                       | (0xf80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x300U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x15U))) 
                         | (0x700U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                       >> 0x15U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                       >> 0x14U)))) 
                        | (0x300U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                      >> 0x16U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xfffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                          << 8U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                          << 9U))) 
                         | (0x200U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                       << 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x16U)))) 
                        | (0x200U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                      << 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                           << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                     << 7U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 << 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   << 8U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                            << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                      << 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                      >> 6U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                >> 5U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                           >> 4U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xfffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                   >> 8U)) ^ (0x1fffffeU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 7U))) 
                    ^ (0x3fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x3ffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                   >> 0xaU)) ^ (0x7ffffcU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 9U))) 
                    ^ (0xfffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                    >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                  >> 0xcU)) ^ (0x1ffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0xbU))) 
                    ^ (0x3ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                    >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x3fff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     >> 0xeU)) ^ (0x7fff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                     >> 0xdU))) 
                       ^ (0xffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                      >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                    >> 0x10U)) ^ (0x1ffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                     >> 0xfU))) 
                       ^ (0x3ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                      >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x3fc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                    >> 0x12U)) ^ (0x7fc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                     >> 0x11U))) 
                       ^ (0xffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xf80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                   >> 0x14U)) ^ (0x1f80U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                    >> 0x13U))) 
                       ^ (0x3f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x300U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                    >> 0x16U)) ^ (0x700U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                     >> 0x15U))) 
                        ^ (0xf00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                         << 8U)) ^ 
                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                          << 9U)) ^ (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                         << 6U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                         << 7U))) ^ 
                        (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                        << 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                       >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                 >> 4U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                             >> 4U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 3U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                        >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                  >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 6U))) 
                     | (0x3fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 5U)))) 
                    | (0x1fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                    >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 8U))) 
                     | (0xfffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 7U)))) 
                    | (0x7ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x1ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                    >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0xaU))) 
                     | (0x3ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 9U)))) 
                    | (0x1ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x7fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0xcU))) 
                        | (0xffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                        >> 0xbU)))) 
                       | (0x7fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x1ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0xeU))) 
                        | (0x3ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                        >> 0xdU)))) 
                       | (0x1ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0x10U))) 
                        | (0xffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 0xfU)))) 
                       | (0x7fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x1f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0x12U))) 
                        | (0x3f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 0x11U)))) 
                       | (0x1f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x700U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0x14U))) 
                         | (0xf00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 0x14U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 0x13U)))) 
                        | (0x700U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & ((0x200U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     << 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0x16U)) 
                                   | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 0x16U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 0x15U)))) 
                        | (0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                      << 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                           << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                     << 8U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 << 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   << 9U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                            << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                      << 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                      >> 5U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                >> 4U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                           >> 3U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                    >> 7U)) ^ (0x3fffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 6U))) 
                    ^ (0x7fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7ffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                   >> 9U)) ^ (0xfffffcU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 8U))) 
                    ^ (0x1fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x1ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                   >> 0xbU)) ^ (0x3ffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0xaU))) 
                    ^ (0x7ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                    >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x7fff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 0xdU)) ^ (0xffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                     >> 0xcU))) 
                       ^ (0x1ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                       >> 0xbU)))));
}
