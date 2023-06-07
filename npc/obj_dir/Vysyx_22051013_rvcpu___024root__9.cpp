// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22051013_rvcpu.h for the primary calling header

#include "Vysyx_22051013_rvcpu___024root.h"
#include "Vysyx_22051013_rvcpu__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__13(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__13\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028110__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028110__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028110__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028110__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028111__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xffff7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x8000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add))) 
                           << 0xfU) | (0xffff8000U 
                                       & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add) 
                                           << 0xeU) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add) 
                                             << 0xfU)))) 
                         | (0xffff8000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add) 
                                            << 0xdU) 
                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add) 
                                              << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xffff7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x8000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add))) 
                         << 0xfU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028111__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028111__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028111__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028111__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028111__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028111__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028111__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028112__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xfffeffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x10000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add))) 
                            << 0x10U) | (0xffff0000U 
                                         & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add) 
                                             << 0xfU) 
                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add) 
                                               << 0x10U)))) 
                          | (0xffff0000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add) 
                                             << 0xeU) 
                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add) 
                                               << 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xfffeffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x10000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add))) 
                          << 0x10U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028112__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028112__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028112__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028112__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028112__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028112__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028112__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028113__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xfffdffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x20000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add))) 
                            << 0x11U) | (0xfffe0000U 
                                         & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add) 
                                             << 0x10U) 
                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add) 
                                               << 0x11U)))) 
                          | (0xfffe0000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add) 
                                             << 0xfU) 
                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add) 
                                               << 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xfffdffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x20000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add))) 
                          << 0x11U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028113__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028113__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028113__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028113__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028113__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028113__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028113__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028114__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xfffbffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x40000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add))) 
                            << 0x12U) | (0xfffc0000U 
                                         & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add) 
                                             << 0x11U) 
                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add) 
                                               << 0x12U)))) 
                          | (0xfffc0000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add) 
                                             << 0x10U) 
                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add) 
                                               << 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xfffbffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x40000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add))) 
                          << 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028114__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028114__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028114__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028114__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028114__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028114__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028114__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028115__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xfff7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x80000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l8_add))) 
                            << 0x13U) | (0xfff80000U 
                                         & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l8_add) 
                                             << 0x12U) 
                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l8_add) 
                                               << 0x13U)))) 
                          | (0xfff80000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l8_add) 
                                             << 0x11U) 
                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l8_add) 
                                               << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xfff7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x80000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__115__KET____DOT__w1__DOT__l8_add))) 
                          << 0x13U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028115__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028115__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028115__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028115__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028115__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028115__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028115__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028116__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xffefffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x100000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l8_add))) 
                             << 0x14U) | (0xfff00000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l8_add) 
                                              << 0x13U) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l8_add) 
                                                << 0x14U)))) 
                           | (0xfff00000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l8_add) 
                                              << 0x12U) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l8_add) 
                                                << 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xffefffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x100000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__116__KET____DOT__w1__DOT__l8_add))) 
                           << 0x14U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028116__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028116__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028116__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028116__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028116__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028116__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028116__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028117__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xffdfffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x200000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l8_add))) 
                             << 0x15U) | (0xffe00000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l8_add) 
                                              << 0x14U) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l8_add) 
                                                << 0x15U)))) 
                           | (0xffe00000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l8_add) 
                                              << 0x13U) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l8_add) 
                                                << 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xffdfffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x200000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__117__KET____DOT__w1__DOT__l8_add))) 
                           << 0x15U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028117__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028117__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028117__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028117__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028117__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028117__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028117__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028118__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xffbfffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x400000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l8_add))) 
                             << 0x16U) | (0xffc00000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l8_add) 
                                              << 0x15U) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l8_add) 
                                                << 0x16U)))) 
                           | (0xffc00000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l8_add) 
                                              << 0x14U) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l8_add) 
                                                << 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xffbfffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x400000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__118__KET____DOT__w1__DOT__l8_add))) 
                           << 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028118__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028118__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028118__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028118__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028118__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028118__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028118__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028119__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xff7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x800000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l8_add))) 
                             << 0x17U) | (0xff800000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l8_add) 
                                              << 0x16U) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l8_add) 
                                                << 0x17U)))) 
                           | (0xff800000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l8_add) 
                                              << 0x15U) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l8_add) 
                                                << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xff7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x800000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__119__KET____DOT__w1__DOT__l8_add))) 
                           << 0x17U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028119__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028119__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028119__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028119__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028119__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028119__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028119__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028120__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xfeffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x1000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l8_add))) 
                              << 0x18U) | (0xff000000U 
                                           & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l8_add) 
                                               << 0x17U) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l8_add) 
                                                 << 0x18U)))) 
                            | (0xff000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l8_add) 
                                               << 0x16U) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l8_add) 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xfeffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x1000000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__120__KET____DOT__w1__DOT__l8_add))) 
                            << 0x18U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028120__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028120__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028120__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028120__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028120__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028120__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028120__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028121__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xfdffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x2000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l8_add))) 
                              << 0x19U) | (0xfe000000U 
                                           & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l8_add) 
                                               << 0x18U) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l8_add) 
                                                 << 0x19U)))) 
                            | (0xfe000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l8_add) 
                                               << 0x17U) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l8_add) 
                                                 << 0x19U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xfdffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x2000000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__121__KET____DOT__w1__DOT__l8_add))) 
                            << 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028121__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028121__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028121__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028121__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028121__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028121__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028121__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028122__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xfbffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x4000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l8_add))) 
                              << 0x1aU) | (0xfc000000U 
                                           & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l8_add) 
                                               << 0x19U) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l8_add) 
                                                 << 0x1aU)))) 
                            | (0xfc000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l8_add) 
                                               << 0x18U) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l8_add) 
                                                 << 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xfbffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x4000000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__122__KET____DOT__w1__DOT__l8_add))) 
                            << 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028122__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028122__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028122__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028122__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028122__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028122__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028122__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028123__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xf7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x8000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l8_add))) 
                              << 0x1bU) | (0xf8000000U 
                                           & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l8_add) 
                                               << 0x1aU) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l8_add) 
                                                 << 0x1bU)))) 
                            | (0xf8000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l8_add) 
                                               << 0x19U) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l8_add) 
                                                 << 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xf7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x8000000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__123__KET____DOT__w1__DOT__l8_add))) 
                            << 0x1bU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028123__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028123__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028123__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028123__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028123__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028123__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028123__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028124__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xefffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l8_add))) 
                               << 0x1cU) | (0xf0000000U 
                                            & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l8_add) 
                                                << 0x1bU) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l8_add) 
                                                  << 0x1cU)))) 
                             | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l8_add) 
                                                << 0x1aU) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l8_add) 
                                                  << 0x1cU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xefffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x10000000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l8_add))) 
                             << 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028124__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028124__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028124__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028124__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028124__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028124__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028124__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028125__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xdfffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add))) 
                               << 0x1dU) | (0xe0000000U 
                                            & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add) 
                                                << 0x1cU) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add) 
                                                  << 0x1dU)))) 
                             | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add) 
                                                << 0x1bU) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add) 
                                                  << 0x1dU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xdfffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x20000000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add))) 
                             << 0x1dU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028125__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028125__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028125__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028125__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028125__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028125__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028125__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028126__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x40000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add))) 
                               << 0x1eU) | (0xc0000000U 
                                            & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add) 
                                                << 0x1dU) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add) 
                                                  << 0x1eU)))) 
                             | (0xc0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add) 
                                                << 0x1cU) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add) 
                                                  << 0x1eU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (0x40000000U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add))) 
                             << 0x1eU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028126__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028126__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028126__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028126__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028126__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028126__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028126__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028127__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[3U]) 
           | (0x80000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add))) 
                               << 0x1fU) | (0x80000000U 
                                            & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add) 
                                                << 0x1eU) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add) 
                                                  << 0x1fU)))) 
                             | (0x80000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add) 
                                                << 0x1dU) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add) 
                                                  << 0x1fU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[3U]) 
           | (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add))) 
              << 0x1fU));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028127__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028127__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028127__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028127__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028127__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028127__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028127__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028128__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[4U] 
        = ((0xeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[4U]) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[4U] 
        = ((0xeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[4U]) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028128__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028128__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028128__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028128__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
}

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__14(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__14\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028128__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028128__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028128__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028129__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[4U] 
        = ((0xdU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[4U]) 
           | (2U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add))) 
                      << 1U) | (0xfffffffeU & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add) 
                                                  << 1U)))) 
                    | (0x7ffffffeU & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add) 
                                       >> 1U) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add) 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[4U] 
        = ((0xdU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[4U]) 
           | (2U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028129__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028129__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028129__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028129__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028129__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028129__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028129__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028130__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[4U] 
        = ((0xbU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[4U]) 
           | (4U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add))) 
                      << 2U) | (0xfffffffcU & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add) 
                                                << 1U) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add) 
                                                  << 2U)))) 
                    | (0xfffffffcU & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add) 
                                         << 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[4U] 
        = ((0xbU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[4U]) 
           | (4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028130__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028130__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028130__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028130__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028130__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028130__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__028130__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[4U] 
        = ((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[4U]) 
           | (8U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add))) 
                      << 3U) | (0xfffffff8U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add) 
                                                << 2U) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add) 
                                                  << 3U)))) 
                    | (0xfffffff8U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add) 
                                       << 1U) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add) 
                                                 << 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[4U] 
        = ((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[4U]) 
           | (8U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add))) 
                    << 3U)));
}
