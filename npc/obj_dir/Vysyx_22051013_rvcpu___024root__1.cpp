// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22051013_rvcpu.h for the primary calling header

#include "Vysyx_22051013_rvcpu___024root.h"
#include "Vysyx_22051013_rvcpu__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__2(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__2\n"); );
    // Body
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
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x1ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 0xfU)) ^ (0x3ffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                     >> 0xeU))) 
                       ^ (0x7ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7fc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                    >> 0x11U)) ^ (0xffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                     >> 0x10U))) 
                       ^ (0x1ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x1f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                    >> 0x13U)) ^ (0x3f80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                     >> 0x12U))) 
                       ^ (0x7f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x700U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                    >> 0x15U)) ^ (0xf00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                     >> 0x14U))) 
                        ^ (0x1f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                          << 9U) ^ (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0x16U))) 
                        ^ (0x600U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                         << 7U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                         << 8U))) ^ 
                        (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                        << 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                       >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                 >> 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                             >> 3U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 2U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                        >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                  >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 5U))) 
                     | (0x7fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                       >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 4U)))) 
                    | (0x3fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xfffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                    >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 7U))) 
                     | (0x1fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                       >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 6U)))) 
                    | (0xfffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x3ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                    >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 9U))) 
                     | (0x7ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 8U)))) 
                    | (0x3ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0xbU))) 
                        | (0x1ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                         >> 0xaU)))) 
                       | (0xffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x3ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0xdU))) 
                        | (0x7ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                        >> 0xcU)))) 
                       | (0x3ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0xfU))) 
                        | (0x1ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                        >> 0xeU)))) 
                       | (0xffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x3f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0x11U))) 
                        | (0x7f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                       >> 0x10U)))) 
                       | (0x3f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xf00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0x13U))) 
                         | (0x1f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                        >> 0x13U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                        >> 0x12U)))) 
                        | (0xf00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x200U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0x15U))) 
                         | (0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                       >> 0x15U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                       >> 0x14U)))) 
                        | (0x200U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 0x16U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                           << 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                     << 9U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 << 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   << 0xaU))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                            << 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      << 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                      >> 4U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                >> 3U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                           >> 2U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                    >> 6U)) ^ (0x7fffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 5U))) 
                    ^ (0xffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xfffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                   >> 8U)) ^ (0x1fffffcU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 7U))) 
                    ^ (0x3fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x3ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                   >> 0xaU)) ^ (0x7ffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 9U))) 
                    ^ (0xfffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                    >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 0xcU)) ^ (0x1ffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                     >> 0xbU))) 
                       ^ (0x3ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                       >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x3ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 0xeU)) ^ (0x7ffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                     >> 0xdU))) 
                       ^ (0xfffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                    >> 0x10U)) ^ (0x1ffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                     >> 0xfU))) 
                       ^ (0x3ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x3f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                    >> 0x12U)) ^ (0x7f80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                     >> 0x11U))) 
                       ^ (0xff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xf00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                    >> 0x14U)) ^ (0x1f00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                     >> 0x13U))) 
                        ^ (0x3f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                    >> 0x16U)) ^ (0x600U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                     >> 0x15U))) 
                        ^ (0xe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                         << 8U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                         << 9U))) ^ 
                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                         << 0xaU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                       >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                 >> 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                             >> 2U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 1U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                        >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                  >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                     >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 4U))) 
                     | (0xffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 3U)))) 
                    | (0x7fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                     >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 6U))) 
                     | (0x3fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 5U)))) 
                    | (0x1fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x7ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                    >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 8U))) 
                     | (0xfffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 7U)))) 
                    | (0x7ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                     >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x1ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 0xbU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0xaU))) 
                        | (0x3ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                         >> 9U)))) 
                       | (0x1ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0xcU))) 
                        | (0xfffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                        >> 0xbU)))) 
                       | (0x7ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0xeU))) 
                        | (0x3ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                        >> 0xdU)))) 
                       | (0x1ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x7f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                     >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0x10U))) 
                        | (0xff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 0xfU)))) 
                       | (0x7f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x1f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0x12U))) 
                         | (0x3f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                        >> 0x12U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                        >> 0x11U)))) 
                        | (0x1f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0x14U))) 
                         | (0xe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 0x14U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 0x13U)))) 
                        | (0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xfffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                          << 9U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                          << 0xaU))) 
                         | (0x400U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                       << 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0x15U)))) 
                        | (0x400U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      << 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                      >> 3U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                >> 2U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                           >> 1U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                    >> 5U)) ^ (0xffffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 4U))) 
                    ^ (0x1ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                    >> 7U)) ^ (0x3fffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 6U))) 
                    ^ (0x7fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                     >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x7ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                   >> 9U)) ^ (0xfffff8U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 8U))) 
                    ^ (0x1fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                     >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x1ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 0xbU)) ^ (0x3ffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                      >> 0xaU))) 
                       ^ (0x7ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                     >> 0xdU)) ^ (0xfffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                     >> 0xcU))) 
                       ^ (0x1fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                       >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                     >> 0xfU)) ^ (0x3ffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                     >> 0xeU))) 
                       ^ (0x7ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x7f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                    >> 0x11U)) ^ (0xff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                     >> 0x10U))) 
                       ^ (0x1ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x1f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                     >> 0x13U)) ^ (0x3f00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                      >> 0x12U))) 
                        ^ (0x7f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x600U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                    >> 0x15U)) ^ (0xe00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                     >> 0x14U))) 
                        ^ (0x1e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                         << 9U)) ^ 
                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                          << 0xaU)) ^ (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                       >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                 >> 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                             >> 1U) 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U])) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                     >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 3U))) 
                     | (0x1ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                        >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 2U)))) 
                    | (0xffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                     >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 5U))) 
                     | (0x7fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                       >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 4U)))) 
                    | (0x3fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xfffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                    >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 7U))) 
                     | (0x1fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                       >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 6U)))) 
                    | (0xfffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                     >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x3ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                       >> 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 9U))) 
                        | (0x7ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 8U)))) 
                       | (0x3ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xfffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0xbU))) 
                        | (0x1fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                         >> 0xaU)))) 
                       | (0xfffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x3ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0xdU))) 
                        | (0x7ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                        >> 0xcU)))) 
                       | (0x3ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0xff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                     >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0xfU))) 
                        | (0x1ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                        >> 0xeU)))) 
                       | (0xff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x3f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0x11U))) 
                         | (0x7f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                        >> 0x11U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                        >> 0x10U)))) 
                        | (0x3f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                       >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0x13U))) 
                         | (0x1e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                        >> 0x13U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                        >> 0x12U)))) 
                        | (0xe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((0x400U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                     << 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x15U)) 
                                   | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                       >> 0x15U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                       >> 0x14U)))) 
                        | (0xc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      << 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                      >> 2U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                >> 1U)) ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U])));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                    >> 4U)) ^ (0x1ffffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 3U))) 
                    ^ (0x3ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x3fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                    >> 6U)) ^ (0x7fffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 5U))) 
                    ^ (0xffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                     >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xfffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                   >> 8U)) ^ (0x1fffff8U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 7U))) 
                    ^ (0x3fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                     >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x3ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 0xaU)) ^ (0x7ffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                      >> 9U))) 
                       ^ (0xfffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                       >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xfffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                     >> 0xcU)) ^ (0x1fffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                     >> 0xbU))) 
                       ^ (0x3fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                       >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x3ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                     >> 0xeU)) ^ (0x7ffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                     >> 0xdU))) 
                       ^ (0xfffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                    >> 0x10U)) ^ (0x1ff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                     >> 0xfU))) 
                       ^ (0x3ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x3f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                     >> 0x12U)) ^ (0x7f00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                      >> 0x11U))) 
                        ^ (0xff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                    >> 0x14U)) ^ (0x1e00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                     >> 0x13U))) 
                        ^ (0x3e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                          << 0xaU) ^ (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x15U))) 
                        ^ (0xc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                       >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U]) 
                     | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                        & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                           >> 0x1fU))) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 1U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                           >> 0x1fU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 2U))) 
                     | (0x3ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 1U)))) 
                    | (0x1ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                     >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 4U))) 
                     | (0xffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 3U)))) 
                    | (0x7fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x1fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                     >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 6U))) 
                     | (0x3fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 5U)))) 
                    | (0x1fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x7ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 8U))) 
                        | (0xfffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                   >> 7U)))) 
                       | (0x7ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x1fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0xbU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                   >> 0xaU))) 
                        | (0x3fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                         >> 9U)))) 
                       | (0x1fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 0xcU))) 
                        | (0xfffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 0xbU)))) 
                       | (0x7ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                   >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x1ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 0xeU))) 
                        | (0x3ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 0xdU)))) 
                       | (0x1ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                   >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x7f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                   >> 0x10U))) 
                         | (0xff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 0x10U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 0xfU)))) 
                        | (0x7f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x1e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                   >> 0x12U))) 
                         | (0x3e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 0x12U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 0x11U)))) 
                        | (0x1e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x400U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 0x14U))) 
                         | (0xc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0x14U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0x13U)))) 
                        | (0x400U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                   >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                      >> 1U) ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U]) 
                    ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                       >> 0x1fU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                     >> 3U)) ^ (0x3ffffffeU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                   >> 2U))) 
                    ^ (0x7ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                    >> 5U)) ^ (0xffffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 4U))) 
                    ^ (0x1ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x1fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                    >> 7U)) ^ (0x3fffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 6U))) 
                    ^ (0x7fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                     >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x7ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 9U)) ^ (0xfffff0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                    >> 8U))) 
                       ^ (0x1fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                        >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x1fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 0xbU)) ^ (0x3fffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                      >> 0xaU))) 
                       ^ (0x7fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                     >> 0xdU)) ^ (0xfffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                     >> 0xcU))) 
                       ^ (0x1fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x1ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                     >> 0xfU)) ^ (0x3ff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                     >> 0xeU))) 
                       ^ (0x7ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x7f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                     >> 0x11U)) ^ (0xff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                      >> 0x10U))) 
                        ^ (0x1ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x1e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                     >> 0x13U)) ^ (0x3e00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                      >> 0x12U))) 
                        ^ (0x7e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                    >> 0x15U)) ^ (0xc00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                     >> 0x14U))) 
                        ^ (0x1c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                      >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                         >> 0x1fU)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 0x1fU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 0x1eU))) 
                    | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                          >> 0x1eU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                >> 1U))) 
                     | (0x7ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U]))) 
                    | (0x3ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                     >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                               >> 3U))) 
                     | (0x1ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                  >> 2U)))) 
                    | (0xffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x3fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                     >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                               >> 5U))) 
                     | (0x7fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                 >> 4U)))) 
                    | (0x3fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xfffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                 >> 7U))) 
                        | (0x1fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                          >> 6U)))) 
                       | (0xfffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                  >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x3fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                   >> 9U))) 
                        | (0x7fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                   >> 8U)))) 
                       | (0x3fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xfffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                  >> 0xbU))) 
                        | (0x1fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                         >> 0xaU)))) 
                       | (0xfffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                   >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x3ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                  >> 0xdU))) 
                        | (0x7ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 0xcU)))) 
                       | (0x3ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                   >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                   >> 0xfU))) 
                         | (0x1ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                         >> 0xfU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                         >> 0xeU)))) 
                        | (0xff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x3e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                   >> 0x11U))) 
                         | (0x7e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 0x11U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 0x10U)))) 
                        | (0x3e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                  >> 0x13U))) 
                         | (0x1c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 0x13U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 0x12U)))) 
                        | (0xc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                   >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s)) 
           | (1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                     ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                        >> 0x1fU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 0x1eU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                     >> 2U)) ^ (0x7ffffffeU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                   >> 1U))) 
                    ^ (0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                    >> 4U)) ^ (0x1ffffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                  >> 3U))) 
                    ^ (0x3ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x3fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                    >> 6U)) ^ (0x7fffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                  >> 5U))) 
                    ^ (0xffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                     >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xfffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 8U)) ^ (0x1fffff0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                    >> 7U))) 
                       ^ (0x3fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                        >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x3fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 0xaU)) ^ (0x7fffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                      >> 9U))) 
                       ^ (0xffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xfffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                     >> 0xcU)) ^ (0x1fffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                     >> 0xbU))) 
                       ^ (0x3fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x3ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                     >> 0xeU)) ^ (0x7ff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                     >> 0xdU))) 
                       ^ (0xfff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                     >> 0x10U)) ^ (0x1ff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                      >> 0xfU))) 
                        ^ (0x3ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                       >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x3e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                     >> 0x12U)) ^ (0x7e00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                      >> 0x11U))) 
                        ^ (0xfe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__94__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                    >> 0x14U)) ^ (0x1c00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                     >> 0x13U))) 
                        ^ (0x3c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                      >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                       >> 0x1fU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                    >> 0x1eU)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                   >> 0x1eU) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                     >> 0x1dU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                        >> 0x1fU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                     >> 0x1dU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U])) 
                     | (0xfffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                          << 1U)))) 
                    | (0x7ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                >> 2U))) 
                     | (0x3ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                  >> 1U)))) 
                    | (0x1ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                 >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x7fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                     >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                               >> 4U))) 
                     | (0xffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                 >> 3U)))) 
                    | (0x7fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x1fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                  >> 6U))) 
                        | (0x3fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                          >> 5U)))) 
                       | (0x1fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                   >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                 >> 8U))) 
                        | (0xffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                   >> 7U)))) 
                       | (0x7fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                  >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 0xbU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                   >> 0xaU))) 
                        | (0x3fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                         >> 9U)))) 
                       | (0x1fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x7ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                  >> 0xcU))) 
                        | (0xfff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 0xbU)))) 
                       | (0x7ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                   >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x1ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                   >> 0xeU))) 
                         | (0x3ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                         >> 0xeU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                         >> 0xdU)))) 
                        | (0x1ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x7e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                   >> 0x10U))) 
                         | (0xfe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 0x10U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 0xfU)))) 
                        | (0x7e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x1c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                   >> 0x12U))) 
                         | (0x3c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 0x12U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 0x11U)))) 
                        | (0x1c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                      >> 0x1fU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                   >> 0x1eU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                 >> 0x1dU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                     >> 1U)) ^ (0xfffffffeU 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U])) 
                    ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                       << 1U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                     >> 3U)) ^ (0x3ffffffcU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                   >> 2U))) 
                    ^ (0x7ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x7fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                    >> 5U)) ^ (0xffffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                  >> 4U))) 
                    ^ (0x1ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x1fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 7U)) ^ (0x3fffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                     >> 6U))) 
                       ^ (0x7fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 9U)) ^ (0xffffe0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                    >> 8U))) 
                       ^ (0x1ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                        >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 0xbU)) ^ (0x3fffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                      >> 0xaU))) 
                       ^ (0x7fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x7ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                     >> 0xdU)) ^ (0xfff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                     >> 0xcU))) 
                       ^ (0x1fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x1ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 0xfU)) ^ (0x3ff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                      >> 0xeU))) 
                        ^ (0x7ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x7e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                     >> 0x11U)) ^ (0xfe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                      >> 0x10U))) 
                        ^ (0x1fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                       >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__93__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x1c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                     >> 0x13U)) ^ (0x3c00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                                      >> 0x12U))) 
                        ^ (0x7c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x60U] 
                                      >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                       >> 0x1eU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                    >> 0x1dU)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                   >> 0x1dU) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                     >> 0x1cU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                        >> 0x1eU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                     >> 0x1cU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xfffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        << 1U))) | 
                     (2U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                             << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 0x1eU)))) 
                    | (2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                >> 0x1eU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                      >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                >> 1U))) 
                     | (0x7ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU]))) 
                    | (0x3ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                     >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                               >> 3U))) 
                     | (0x1ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                  >> 2U)))) 
                    | (0xffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                      >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x3fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                  >> 5U))) 
                        | (0x7fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                          >> 4U)))) 
                       | (0x3fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                   >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                 >> 7U))) 
                        | (0x1ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                          >> 6U)))) 
                       | (0xffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                  >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x3fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                   >> 9U))) 
                        | (0x7fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                   >> 8U)))) 
                       | (0x3fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0xfff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                      >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                  >> 0xbU))) 
                        | (0x1fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                         >> 0xaU)))) 
                       | (0xfff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                   >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x3ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                   >> 0xdU))) 
                         | (0x7ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                         >> 0xdU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                         >> 0xcU)))) 
                        | (0x3ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xfe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                   >> 0xfU))) 
                         | (0x1fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                         >> 0xfU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                         >> 0xeU)))) 
                        | (0xfe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x3c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                   >> 0x11U))) 
                         | (0x7c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 0x11U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 0x10U)))) 
                        | (0x3c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                      >> 0x1eU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                   >> 0x1dU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                 >> 0x1cU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU]) 
                     ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                        << 1U)) ^ (2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                         >> 0x1eU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x3ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                     >> 2U)) ^ (0x7ffffffcU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                   >> 1U))) 
                    ^ (0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                    >> 4U)) ^ (0x1ffffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                  >> 3U))) 
                    ^ (0x3ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                      >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x3fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 6U)) ^ (0x7fffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                     >> 5U))) 
                       ^ (0xffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                      >> 8U)) ^ (0x1ffffe0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                    >> 7U))) 
                       ^ (0x3ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                        >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x3fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                      >> 0xaU)) ^ (0x7fffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                      >> 9U))) 
                       ^ (0xffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xfff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                     >> 0xcU)) ^ (0x1fff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                     >> 0xbU))) 
                       ^ (0x3fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x3ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                      >> 0xeU)) ^ (0x7ff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                      >> 0xdU))) 
                        ^ (0xfff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                     >> 0x10U)) ^ (0x1fe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                      >> 0xfU))) 
                        ^ (0x3fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                       >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__92__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x3c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                     >> 0x12U)) ^ (0x7c00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                                      >> 0x11U))) 
                        ^ (0xfc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5fU] 
                                      >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                       >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                    >> 0x1cU)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                   >> 0x1cU) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                     >> 0x1bU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                        >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                     >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c)) 
           | (2U & ((2U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                             << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 0x1eU)) | 
                           ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                             >> 0x1eU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                          >> 0x1dU)))) 
                    | (6U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                              << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 0x1dU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                      >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU])) 
                     | (0xfffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                          << 1U)))) 
                    | (0x7ffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x1ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                      >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                >> 2U))) 
                     | (0x3ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                  >> 1U)))) 
                    | (0x1ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                 >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x7fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                  >> 4U))) 
                        | (0xffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                          >> 3U)))) 
                       | (0x7fffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                   >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x1ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                  >> 6U))) 
                        | (0x3ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                          >> 5U)))) 
                       | (0x1ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                   >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                 >> 8U))) 
                        | (0xffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                   >> 7U)))) 
                       | (0x7fffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                  >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x1fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 0xbU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                   >> 0xaU))) 
                        | (0x3fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                         >> 9U)))) 
                       | (0x1fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x7ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                   >> 0xcU))) 
                         | (0xfff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                         >> 0xcU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                         >> 0xbU)))) 
                        | (0x7ff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x1fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                   >> 0xeU))) 
                         | (0x3fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                         >> 0xeU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                         >> 0xdU)))) 
                        | (0x1fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x7c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                   >> 0x10U))) 
                         | (0xfc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 0x10U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 0xfU)))) 
                        | (0x7c00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                      >> 0x1dU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                   >> 0x1cU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                 >> 0x1bU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                      << 1U) ^ (2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                      >> 0x1eU))) ^ 
                    (6U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                           >> 0x1dU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7ffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                     >> 1U)) ^ (0xfffffffcU 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU])) 
                    ^ (0xfffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                      << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x1ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                     >> 3U)) ^ (0x3ffffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                   >> 2U))) 
                    ^ (0x7ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                      >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x7fffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 5U)) ^ (0xffffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                     >> 4U))) 
                       ^ (0x1ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                         >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x1ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 7U)) ^ (0x3ffffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                     >> 6U))) 
                       ^ (0x7ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7fffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                      >> 9U)) ^ (0xffffc0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                    >> 8U))) 
                       ^ (0x1ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x1fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                      >> 0xbU)) ^ (0x3fff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                      >> 0xaU))) 
                       ^ (0x7fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x7ff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                      >> 0xdU)) ^ (0xfff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                      >> 0xcU))) 
                        ^ (0x1fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                        >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x1fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                      >> 0xfU)) ^ (0x3fe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                      >> 0xeU))) 
                        ^ (0x7fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__91__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x7c00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                     >> 0x11U)) ^ (0xfc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                                      >> 0x10U))) 
                        ^ (0x1fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5eU] 
                                       >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                       >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                    >> 0x1bU)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                     >> 0x1aU))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                        >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                     >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((2U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                             >> 0x1eU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                          >> 0x1dU))) 
                     | (6U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                               >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                            >> 0x1cU)))) 
                    | (2U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                              >> 0x1eU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                           >> 0x1cU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                         << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                     << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                               << 2U))) 
                    | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                          << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x3ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                      >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                >> 1U))) 
                     | (0x7ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU]))) 
                    | (0x3ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                  >> 3U))) 
                        | (0x1ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                           >> 2U)))) 
                       | (0xffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                   >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x3ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                  >> 5U))) 
                        | (0x7ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                          >> 4U)))) 
                       | (0x3ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                   >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                 >> 7U))) 
                        | (0x1ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                          >> 6U)))) 
                       | (0xffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                  >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x3fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                   >> 9U))) 
                        | (0x7fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                   >> 8U)))) 
                       | (0x3fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xfff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                   >> 0xbU))) 
                         | (0x1fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                          >> 0xbU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                            >> 0xaU)))) 
                        | (0xfff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x3fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                   >> 0xdU))) 
                         | (0x7fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                         >> 0xdU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                         >> 0xcU)))) 
                        | (0x3fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xfc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                   >> 0xfU))) 
                         | (0x1fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                         >> 0xfU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                         >> 0xeU)))) 
                        | (0xfc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                      >> 0x1cU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                   >> 0x1bU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                 >> 0x1aU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                            >> 0x1eU)) ^ (6U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                >> 0x1dU))) 
                    ^ (0xeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                               >> 0x1cU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU]) 
                     ^ (0xfffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       << 1U))) ^ (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                   << 2U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x3ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                     >> 2U)) ^ (0x7ffffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                   >> 1U))) 
                    ^ (0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 4U)) ^ (0x1ffffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                     >> 3U))) 
                       ^ (0x3ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                         >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x3ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 6U)) ^ (0x7ffffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                     >> 5U))) 
                       ^ (0xfffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                      >> 8U)) ^ (0x1ffffc0U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                    >> 7U))) 
                       ^ (0x3ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x3fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                      >> 0xaU)) ^ (0x7fff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                      >> 9U))) 
                       ^ (0xffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xfff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                      >> 0xcU)) ^ (0x1fff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                      >> 0xbU))) 
                        ^ (0x3fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                        >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x3fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                      >> 0xeU)) ^ (0x7fe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                      >> 0xdU))) 
                        ^ (0xffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__90__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                     >> 0x10U)) ^ (0x1fc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                                      >> 0xfU))) 
                        ^ (0x3fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5dU] 
                                       >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                       >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                    >> 0x1aU)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                   >> 0x1aU) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                     >> 0x19U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                        >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                     >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((6U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                             >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                          >> 0x1cU))) 
                     | (0xeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                 >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                              >> 0x1bU)))) 
                    | (6U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                              >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                           >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xfffffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                      << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                << 2U))) 
                     | (4U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                               << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                         >> 0x1dU)))) 
                    | (4U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                              << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 0x1dU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x7ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                      >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU])) 
                     | (0xfffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                          << 1U)))) 
                    | (0x7ffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                       >> 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x1ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 3U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                   >> 2U))) 
                        | (0x3ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                           >> 2U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                           >> 1U)))) 
                       | (0x1ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                          >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                  >> 4U))) 
                        | (0xfffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                          >> 3U)))) 
                       | (0x7ffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                   >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                  >> 6U))) 
                        | (0x3ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                          >> 5U)))) 
                       | (0x1ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                   >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x7fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                       >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                 >> 8U))) 
                        | (0xffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                   >> 7U)))) 
                       | (0x7fff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                  >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x1fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 0xaU))) 
                         | (0x3fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                          >> 0xaU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                            >> 9U)))) 
                        | (0x1fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x7fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                   >> 0xcU))) 
                         | (0xffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 0xcU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 0xbU)))) 
                        | (0x7fe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x1fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                   >> 0xeU))) 
                         | (0x3fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 0xeU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 0xdU)))) 
                        | (0x1fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                      >> 0x1bU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                   >> 0x1aU)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                 >> 0x19U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((6U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                            >> 0x1dU)) ^ (0xeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                  >> 0x1cU))) 
                    ^ (0x1eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xfffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                     << 1U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                << 2U)) 
                    ^ (4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                             >> 0x1dU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x7ffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                     >> 1U)) ^ (0xfffffff8U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU])) 
                    ^ (0xfffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                      << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x1ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 3U)) ^ (0x3ffffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                      >> 2U))) 
                       ^ (0x7ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7ffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                       >> 5U)) ^ (0xfffffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                     >> 4U))) 
                       ^ (0x1fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                         >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                       >> 7U)) ^ (0x3ffffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                     >> 6U))) 
                       ^ (0x7ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x7fff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                      >> 9U)) ^ (0xffff80U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                    >> 8U))) 
                       ^ (0x1ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x1fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                       >> 0xbU)) ^ 
                         (0x3fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                       >> 0xaU))) ^ 
                        (0x7fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                      >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x7fe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                      >> 0xdU)) ^ (0xffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                      >> 0xcU))) 
                        ^ (0x1ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                        >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__89__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x1fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                      >> 0xfU)) ^ (0x3fc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                                      >> 0xeU))) 
                        ^ (0x7fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5cU] 
                                       >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                       >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                    >> 0x19U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                   >> 0x19U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                     >> 0x18U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                        >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                     >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                               >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                            >> 0x1bU))) 
                     | (0x1eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                  >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                               >> 0x1aU)))) 
                    | (0xeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                             >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c)) 
           | (4U & ((4U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                             << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                       >> 0x1dU)) | 
                           ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                             >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 0x1cU)))) 
                    | (0xcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 0x1cU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                         << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                     << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                               << 2U))) 
                    | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                       & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                          << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x3ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                         >> 2U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                   >> 1U))) 
                        | (0x7ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                           >> 1U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU]))) 
                       | (0x3ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                          >> 2U) & 
                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xfffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                  >> 3U))) 
                        | (0x1fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                           >> 2U)))) 
                       | (0xfffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                   >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x3ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                  >> 5U))) 
                        | (0x7ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                          >> 4U)))) 
                       | (0x3ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                   >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0xffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                       >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                 >> 7U))) 
                        | (0x1ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                          >> 6U)))) 
                       | (0xffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                  >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x3fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 9U))) | 
                         (0x7fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                  >> 8U)))) 
                        | (0x3fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                         >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                   >> 0xbU))) 
                         | (0x1ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                          >> 0xbU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                            >> 0xaU)))) 
                        | (0xffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x3fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                   >> 0xdU))) 
                         | (0x7fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                         >> 0xdU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                         >> 0xcU)))) 
                        | (0x3fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                      >> 0x1aU) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                   >> 0x19U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                 >> 0x18U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                              >> 0x1cU)) ^ (0x1eU & 
                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                             >> 0x1bU))) 
                    ^ (0x3eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                      << 2U) ^ (4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                      >> 0x1dU))) ^ 
                    (0xcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                             >> 0x1cU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU]) 
                     ^ (0xfffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                       << 1U))) ^ (0xfffffff8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                      << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x3ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 2U)) ^ (0x7ffffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                      >> 1U))) 
                       ^ (0xfffffff0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xfffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                       >> 4U)) ^ (0x1fffffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                     >> 3U))) 
                       ^ (0x3fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                         >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x3ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                       >> 6U)) ^ (0x7ffffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                     >> 5U))) 
                       ^ (0xfffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                      >> 8U)) ^ (0x1ffff80U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                    >> 7U))) 
                       ^ (0x3ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x3fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                       >> 0xaU)) ^ 
                         (0x7fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                       >> 9U))) ^ (0xffff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                      >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                      >> 0xcU)) ^ (0x1ffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                      >> 0xbU))) 
                        ^ (0x3ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                        >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__88__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x3fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                      >> 0xeU)) ^ (0x7fc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                                      >> 0xdU))) 
                        ^ (0xffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5bU] 
                                       >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                       >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                    >> 0x18U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                   >> 0x18U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                     >> 0x17U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                        >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                     >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                             >> 0x1aU))) 
                     | (0x3eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                  >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                               >> 0x19U)))) 
                    | (0x1eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                 >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                              >> 0x19U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((4U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                             >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                          >> 0x1cU))) 
                     | (0xcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                 >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                              >> 0x1bU)))) 
                    | (4U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                              >> 0x1dU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                           >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c)) 
           | (8U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                       << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                 << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                             << 2U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                               << 3U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                        << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                  << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x7ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU])) 
                        | (0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                             << 1U)))) 
                       | (0x7ffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 1U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x1fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 3U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                   >> 2U))) 
                        | (0x3fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                           >> 2U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                           >> 1U)))) 
                       | (0x1fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                        >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                  >> 4U))) 
                        | (0xfffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 3U)))) 
                       | (0x7ffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                   >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x1ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                        >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                  >> 6U))) 
                        | (0x3ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 5U)))) 
                       | (0x1ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                   >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x7fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                  >> 8U))) 
                         | (0xffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 8U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 7U)))) 
                        | (0x7fff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                   >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x1ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                        >> 0xaU))) 
                         | (0x3ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                          >> 0xaU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                            >> 9U)))) 
                        | (0x1ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x7fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                   >> 0xcU))) 
                         | (0xffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 0xcU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 0xbU)))) 
                        | (0x7fc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                        >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                      >> 0x19U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                   >> 0x18U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                 >> 0x17U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                               >> 0x1bU)) ^ (0x3eU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                >> 0x1aU))) 
                    ^ (0x7eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                            >> 0x1dU)) ^ (0xcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                  >> 0x1cU))) 
                    ^ (0x1cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xfffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                     << 1U)) ^ (0xfffffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                   << 2U))) 
                    ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                       << 3U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x7ffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                        >> 1U)) ^ (0xfffffff0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU])) 
                       ^ (0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x1fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                        >> 3U)) ^ (0x3fffffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                      >> 2U))) 
                       ^ (0x7fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7ffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                       >> 5U)) ^ (0xfffffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                     >> 4U))) 
                       ^ (0x1fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x1ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                       >> 7U)) ^ (0x3ffff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                     >> 6U))) 
                       ^ (0x7ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                        >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x7fff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                       >> 9U)) ^ (0xffff00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                     >> 8U))) 
                        ^ (0x1ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                         >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x1ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                       >> 0xbU)) ^ 
                         (0x3ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                       >> 0xaU))) ^ 
                        (0x7ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                      >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__87__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x7fc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                      >> 0xdU)) ^ (0xffc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                                      >> 0xcU))) 
                        ^ (0x1ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x5aU] 
                                        >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                       >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                    >> 0x17U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                   >> 0x17U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                     >> 0x16U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                        >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                     >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                             >> 0x19U))) 
                     | (0x7eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                  >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                               >> 0x18U)))) 
                    | (0x3eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                 >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                              >> 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                               >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                            >> 0x1bU))) 
                     | (0x1cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                  >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                               >> 0x1aU)))) 
                    | (0xcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                             >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xfffffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                      << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                << 3U))) 
                     | (8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                               << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 0x1cU)))) 
                    | (8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                              << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                        >> 0x1cU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                            << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                  << 2U))) 
                       | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                             << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x3fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                         >> 2U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                   >> 1U))) 
                        | (0x7fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                           >> 1U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U]))) 
                       | (0x3fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                          >> 2U) & 
                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xfffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                  >> 3U))) 
                        | (0x1fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                           >> 2U)))) 
                       | (0xfffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                   >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x3ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                  >> 5U))) 
                        | (0x7ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                          >> 4U)))) 
                       | (0x3ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                   >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                  >> 7U))) 
                         | (0x1ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                           >> 7U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                           >> 6U)))) 
                        | (0xffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                   >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x3ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        >> 9U))) | 
                         (0x7ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                  >> 8U)))) 
                        | (0x3ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                         >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                   >> 0xbU))) 
                         | (0x1ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                          >> 0xbU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                            >> 0xaU)))) 
                        | (0xffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                      >> 0x18U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                   >> 0x17U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                 >> 0x16U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                               >> 0x1aU)) ^ (0x7eU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                >> 0x19U))) 
                    ^ (0xfeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                              >> 0x1cU)) ^ (0x1cU & 
                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                             >> 0x1bU))) 
                    ^ (0x3cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xfffffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                     << 2U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                << 3U)) 
                    ^ (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                             >> 0x1cU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xfffffff0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U]) 
                        ^ (0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                          << 1U))) 
                       ^ (0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                         << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x3fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        >> 2U)) ^ (0x7fffffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                      >> 1U))) 
                       ^ (0xffffffe0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xfffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                       >> 4U)) ^ (0x1fffffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                     >> 3U))) 
                       ^ (0x3fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                         >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x3ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                       >> 6U)) ^ (0x7ffff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                     >> 5U))) 
                       ^ (0xfffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                       >> 8U)) ^ (0x1ffff00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                     >> 7U))) 
                        ^ (0x3ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                         >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x3ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                       >> 0xaU)) ^ 
                         (0x7ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                       >> 9U))) ^ (0xfffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                      >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__86__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                      >> 0xcU)) ^ (0x1ffc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                                      >> 0xbU))) 
                        ^ (0x3ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x59U] 
                                        >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                       >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                    >> 0x16U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                   >> 0x16U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                     >> 0x15U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                        >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                     >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                             >> 0x18U))) 
                     | (0xfeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                  >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                               >> 0x17U)))) 
                    | (0x7eU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                 >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                              >> 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                             >> 0x1aU))) 
                     | (0x3cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                  >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                               >> 0x19U)))) 
                    | (0x1cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                 >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                              >> 0x19U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c)) 
           | (8U & ((8U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                             << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                       >> 0x1cU)) | 
                           ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                             >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                          >> 0x1bU)))) 
                    | (0x18U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                 << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                           >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                          << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                    << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                << 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                  << 3U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                           << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                     << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U])) 
                        | (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                             << 1U)))) 
                       | (0x7fffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          >> 1U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 3U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                   >> 2U))) 
                        | (0x3fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                           >> 2U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                           >> 1U)))) 
                       | (0x1fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x7ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                        >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                  >> 4U))) 
                        | (0xfffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          >> 3U)))) 
                       | (0x7ffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                   >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x1ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                   >> 6U))) 
                         | (0x3ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                           >> 6U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                           >> 5U)))) 
                        | (0x1ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x7ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                  >> 8U))) 
                         | (0xfffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          >> 8U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          >> 7U)))) 
                        | (0x7ffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                   >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x1ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                        >> 0xaU))) 
                         | (0x3ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                          >> 0xaU) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                            >> 9U)))) 
                        | (0x1ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                      >> 0x17U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                   >> 0x16U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                 >> 0x15U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7eU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                               >> 0x19U)) ^ (0xfeU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                >> 0x18U))) 
                    ^ (0x1feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                 >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                               >> 0x1bU)) ^ (0x3cU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                >> 0x1aU))) 
                    ^ (0x7cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                      << 3U) ^ (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                      >> 0x1cU))) ^ 
                    (0x18U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                              >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                        << 1U)) ^ (0xfffffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                      << 2U))) 
                       ^ (0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7fffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                        >> 1U)) ^ (0xffffffe0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U])) 
                       ^ (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                        >> 3U)) ^ (0x3fffffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                      >> 2U))) 
                       ^ (0x7fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x7ffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                       >> 5U)) ^ (0xfffff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                     >> 4U))) 
                       ^ (0x1fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x1ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                        >> 7U)) ^ (0x3ffff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                      >> 6U))) 
                        ^ (0x7ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x7ffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                       >> 9U)) ^ (0xfffe00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                                     >> 8U))) 
                        ^ (0x1fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                         >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__85__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x1ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                       >> 0xbU)) ^ 
                         (0x3ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                       >> 0xaU))) ^ 
                        (0x7ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x58U] 
                                      >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                       >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                    >> 0x15U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                   >> 0x15U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                     >> 0x14U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                        >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xfeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                             >> 0x17U))) 
                     | (0x1feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                   >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                >> 0x16U)))) 
                    | (0xfeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                 >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                              >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                             >> 0x19U))) 
                     | (0x7cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                  >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                               >> 0x18U)))) 
                    | (0x3cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                 >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                              >> 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                             >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          >> 0x1bU))) 
                     | (0x18U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                  >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                               >> 0x1aU)))) 
                    | (8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                              >> 0x1cU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                           >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                          << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                    << 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                << 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                  << 4U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                           << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                     << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                            << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                        << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                  << 2U))) 
                       | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                             << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x3fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                         >> 2U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                   >> 1U))) 
                        | (0x7fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                           >> 1U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U]))) 
                       | (0x3fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                          >> 2U) & 
                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0xfffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                        >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                  >> 3U))) 
                        | (0x1fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                           >> 2U)))) 
                       | (0xfffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                   >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x3ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                   >> 5U))) 
                         | (0x7ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                           >> 5U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                           >> 4U)))) 
                        | (0x3ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                          >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xfffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                  >> 7U))) 
                         | (0x1fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                           >> 7U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                           >> 6U)))) 
                        | (0xfffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                   >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x3ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                        >> 9U))) | 
                         (0x7ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                  >> 8U)))) 
                        | (0x3ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                         >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                      >> 0x16U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                   >> 0x15U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                 >> 0x14U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xfeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                               >> 0x18U)) ^ (0x1feU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                >> 0x17U))) 
                    ^ (0x3feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                 >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x3cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                               >> 0x1aU)) ^ (0x7cU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                >> 0x19U))) 
                    ^ (0xfcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                            >> 0x1cU)) ^ (0x18U & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                   >> 0x1bU))) 
                    ^ (0x38U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                        << 2U)) ^ (0xfffffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                      << 3U))) 
                       ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                          << 4U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffffffe0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U]) 
                        ^ (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                          << 1U))) 
                       ^ (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                         << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x3fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                        >> 2U)) ^ (0x7fffffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                      >> 1U))) 
                       ^ (0xffffffc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xfffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                       >> 4U)) ^ (0x1fffff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                     >> 3U))) 
                       ^ (0x3fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                         >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x3ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                        >> 6U)) ^ (0x7ffff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                      >> 5U))) 
                        ^ (0xfffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                         >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                       >> 8U)) ^ (0x1fffe00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                     >> 7U))) 
                        ^ (0x3fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                         >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__84__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x3ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                       >> 0xaU)) ^ 
                         (0x7ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                       >> 9U))) ^ (0xfffc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x57U] 
                                                      >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                       >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                    >> 0x14U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                   >> 0x14U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                     >> 0x13U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                        >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                     >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                 >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                              >> 0x16U))) 
                     | (0x3feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                   >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                >> 0x15U)))) 
                    | (0x1feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                  >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                               >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                             >> 0x18U))) 
                     | (0xfcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                  >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                               >> 0x17U)))) 
                    | (0x7cU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                 >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                              >> 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x18U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                             >> 0x1aU))) 
                     | (0x38U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                  >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                               >> 0x19U)))) 
                    | (0x18U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                 >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                              >> 0x19U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xfffffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                         << 3U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                   << 4U))) 
                        | (0x10U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                     << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                               >> 0x1bU)))) 
                       | (0x10U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                    << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                              >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                          << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                    << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                << 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                  << 3U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                           << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                     << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U])) 
                        | (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                             << 1U)))) 
                       | (0x7fffffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          >> 1U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x1fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                         >> 3U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                   >> 2U))) 
                        | (0x3fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                           >> 2U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                           >> 1U)))) 
                       | (0x1fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x7ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                   >> 4U))) 
                         | (0xfffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                           >> 4U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                           >> 3U)))) 
                        | (0x7ffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x1fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                   >> 6U))) 
                         | (0x3fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                           >> 6U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                           >> 5U)))) 
                        | (0x1fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x7ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                        >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                  >> 8U))) 
                         | (0xfffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          >> 8U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          >> 7U)))) 
                        | (0x7ffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                   >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                      >> 0x15U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                   >> 0x14U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                 >> 0x13U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                >> 0x17U)) ^ (0x3feU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                 >> 0x16U))) 
                    ^ (0x7feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                 >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7cU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                               >> 0x19U)) ^ (0xfcU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                >> 0x18U))) 
                    ^ (0x1fcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                 >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x18U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                               >> 0x1bU)) ^ (0x38U 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                >> 0x1aU))) 
                    ^ (0x78U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xfffffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                        << 3U)) ^ (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                   << 4U)) 
                       ^ (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                   >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                        << 1U)) ^ (0xffffffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                      << 2U))) 
                       ^ (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                         << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7fffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                        >> 1U)) ^ (0xffffffc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U])) 
                       ^ (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                         << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x1fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                        >> 3U)) ^ (0x3fffff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                      >> 2U))) 
                       ^ (0x7fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                         >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x7ffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                        >> 5U)) ^ (0xfffff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                      >> 4U))) 
                        ^ (0x1fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                          >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x1fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                        >> 7U)) ^ (0x3fffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                      >> 6U))) 
                        ^ (0x7fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                         >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__83__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x7ffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                       >> 9U)) ^ (0xfffc00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                                     >> 8U))) 
                        ^ (0x1fffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x56U] 
                                         >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                       >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                    >> 0x13U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                   >> 0x13U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                     >> 0x12U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                        >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                     >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                 >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                              >> 0x15U))) 
                     | (0x7feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                   >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                >> 0x14U)))) 
                    | (0x3feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                  >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                               >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xfcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                             >> 0x17U))) 
                     | (0x1fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                   >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                >> 0x16U)))) 
                    | (0xfcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                 >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                              >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x38U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                             >> 0x19U))) 
                     | (0x78U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                  >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                               >> 0x18U)))) 
                    | (0x38U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                 >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                              >> 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & ((0x10U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                   << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                             >> 0x1bU)) 
                                 | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                     >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                  >> 0x1aU)))) 
                       | (0x30U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                    << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                              >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                          << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                    << 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                << 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                  << 4U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                           << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                     << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                            << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                        << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                  << 2U))) 
                       | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                             << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x3fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                         >> 2U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                   >> 1U))) 
                        | (0x7fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                           >> 1U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U]))) 
                       | (0x3fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                          >> 2U) & 
                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xfffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                   >> 3U))) 
                         | (0x1fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                            >> 3U) 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                              >> 2U)))) 
                        | (0xfffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                          >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x3fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                   >> 5U))) 
                         | (0x7fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                           >> 5U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                           >> 4U)))) 
                        | (0x3fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                          >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xfffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                        >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                  >> 7U))) 
                         | (0x1fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                           >> 7U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                           >> 6U)))) 
                        | (0xfffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                         >> 8U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                   >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                      >> 0x14U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                   >> 0x13U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                 >> 0x12U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                >> 0x16U)) ^ (0x7feU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                 >> 0x15U))) 
                    ^ (0xffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                 >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xfcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                               >> 0x18U)) ^ (0x1fcU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                >> 0x17U))) 
                    ^ (0x3fcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                 >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x38U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                               >> 0x1aU)) ^ (0x78U 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                >> 0x19U))) 
                    ^ (0xf8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                >> 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                         << 4U) ^ (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                            >> 0x1bU))) 
                       ^ (0x30U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                   >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                        << 2U)) ^ (0xffffffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                      << 3U))) 
                       ^ (0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                         << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffffffc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U]) 
                        ^ (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                          << 1U))) 
                       ^ (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                         << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x3fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                        >> 2U)) ^ (0x7fffff80U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                      >> 1U))) 
                       ^ (0xffffff80U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xfffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                        >> 4U)) ^ (0x1fffff00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                      >> 3U))) 
                        ^ (0x3fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                          >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x3fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                        >> 6U)) ^ (0x7fffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                      >> 5U))) 
                        ^ (0xffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                         >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__82__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                       >> 8U)) ^ (0x1fffc00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                                     >> 7U))) 
                        ^ (0x3fffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x55U] 
                                         >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                       >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                    >> 0x12U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                   >> 0x12U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                     >> 0x11U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                        >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                     >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                 >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                              >> 0x14U))) 
                     | (0xffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                   >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                >> 0x13U)))) 
                    | (0x7feU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                  >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                               >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                 >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                              >> 0x16U))) 
                     | (0x3fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                   >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                >> 0x15U)))) 
                    | (0x1fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                  >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                               >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x78U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                             >> 0x18U))) 
                     | (0xf8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                  >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                               >> 0x17U)))) 
                    | (0x78U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                 >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                              >> 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x10U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                   >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                >> 0x1aU))) 
                        | (0x30U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                     >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                  >> 0x19U)))) 
                       | (0x10U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                    >> 0x1bU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                 >> 0x19U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                          << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                    << 4U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                << 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                  << 5U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                           << 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                     << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                          << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                    << 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                << 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                  << 3U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                           << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                     << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x7fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U])) 
                        | (0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                             << 1U)))) 
                       | (0x7fffff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                          >> 1U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x1fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                          >> 3U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                          >> 2U))) 
                         | (0x3fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                            >> 2U) 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                              >> 1U)))) 
                        | (0x1fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                           >> 3U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                           >> 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x7fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                         >> 5U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                   >> 4U))) 
                         | (0xffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                           >> 4U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                           >> 3U)))) 
                        | (0x7fffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                          >> 5U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                          >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x1fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                         >> 7U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                   >> 6U))) 
                         | (0x3fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                           >> 6U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                           >> 5U)))) 
                        | (0x1fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                          >> 7U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                          >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                      >> 0x13U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                   >> 0x12U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                 >> 0x11U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7feU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                >> 0x15U)) ^ (0xffeU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                 >> 0x14U))) 
                    ^ (0x1ffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                  >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1fcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                >> 0x17U)) ^ (0x3fcU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                 >> 0x16U))) 
                    ^ (0x7fcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                 >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x78U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                               >> 0x19U)) ^ (0xf8U 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                >> 0x18U))) 
                    ^ (0x1f8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                 >> 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                  >> 0x1bU)) ^ (0x30U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                   >> 0x1aU))) 
                       ^ (0x70U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                   >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffffffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                        << 3U)) ^ (0xffffffe0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                      << 4U))) 
                       ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                          << 5U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                        << 1U)) ^ (0xffffffc0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                      << 2U))) 
                       ^ (0xffffffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                         << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x7fffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                        >> 1U)) ^ (0xffffff80U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U])) 
                       ^ (0xffffff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                         << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x1fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                         >> 3U)) ^ 
                         (0x3fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                         >> 2U))) ^ 
                        (0x7fffff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                        >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x7fffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                        >> 5U)) ^ (0xffffe00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                      >> 4U))) 
                        ^ (0x1ffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                          >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__81__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0x1fffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                        >> 7U)) ^ (0x3fffc00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                                      >> 6U))) 
                        ^ (0x7fffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x54U] 
                                         >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                       >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                    >> 0x11U)) | ((
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                                   >> 0x11U) 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                                     >> 0x10U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                        >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                     >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                 >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                              >> 0x13U))) 
                     | (0x1ffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                    >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                                 >> 0x12U)))) 
                    | (0xffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                  >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                               >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                 >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                              >> 0x15U))) 
                     | (0x7fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                   >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                                >> 0x14U)))) 
                    | (0x3fcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                  >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                               >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xf8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                             >> 0x17U))) 
                     | (0x1f8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                   >> 0x17U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                                >> 0x16U)))) 
                    | (0xf8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                 >> 0x18U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                              >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x30U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                   >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                                >> 0x19U))) 
                        | (0x70U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                     >> 0x19U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                                  >> 0x18U)))) 
                       | (0x30U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                    >> 0x1aU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                                 >> 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xffffffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                         << 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                   << 5U))) 
                        | (0x20U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                     << 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                               >> 0x1aU)))) 
                       | (0x20U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                    << 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x52U] 
                                              >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                          << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                    << 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                << 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                  << 4U))) 
                       | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                           << 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                     << 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                         & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                            << 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                        << 1U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                  << 2U))) 
                       | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                             << 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x3fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                          >> 2U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                          >> 1U))) 
                         | (0x7fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                            >> 1U) 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U]))) 
                        | (0x3fffff00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                           >> 2U) & 
                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                         >> 4U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                   >> 3U))) 
                         | (0x1ffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                            >> 3U) 
                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                              >> 2U)))) 
                        | (0xffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                          >> 4U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                          >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__80__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0x3fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                         >> 6U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                                   >> 5U))) 
                         | (0x7fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                           >> 5U) & 
                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                           >> 4U)))) 
                        | (0x3fffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                          >> 6U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x53U] 
                                          >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                      >> 2U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                >> 1U)) ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U])));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                       >> 2U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                 >> 1U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                             >> 1U) 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U])) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s)) 
           | (2U & (((0xffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                    >> 4U)) ^ (0x1ffffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                  >> 3U))) 
                    ^ (0x3ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)) 
           | (2U & (((0xffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                     >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                               >> 3U))) 
                     | (0x1ffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                        >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                  >> 2U)))) 
                    | (0xffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                >> 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s)) 
           | (4U & (((0x3fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                    >> 6U)) ^ (0x7fffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                  >> 5U))) 
                    ^ (0xffffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                     >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)) 
           | (4U & (((0x3fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                     >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                               >> 5U))) 
                     | (0x7fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                       >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                 >> 4U)))) 
                    | (0x3fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s)) 
           | (8U & (((0xfffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                   >> 8U)) ^ (0x1fffff8U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                 >> 7U))) 
                    ^ (0x3fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                     >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)) 
           | (8U & (((0xfffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                    >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                              >> 7U))) 
                     | (0x1fffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                       >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                 >> 6U)))) 
                    | (0xfffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                     >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                               >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s)) 
           | (0x10U & (((0x3ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 0xaU)) ^ (0x7ffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                      >> 9U))) 
                       ^ (0xfffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                       >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)) 
           | (0x10U & (((0x3ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                       >> 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                   >> 9U))) 
                        | (0x7ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                         >> 9U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                   >> 8U)))) 
                       | (0x3ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                        >> 0xaU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s)) 
           | (0x20U & (((0xfffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                     >> 0xcU)) ^ (0x1fffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                     >> 0xbU))) 
                       ^ (0x3fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                       >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)) 
           | (0x20U & (((0xfffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                  >> 0xbU))) 
                        | (0x1fffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                         >> 0xaU)))) 
                       | (0xfffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                   >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s)) 
           | (0x40U & (((0x3ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                     >> 0xeU)) ^ (0x7ffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                     >> 0xdU))) 
                       ^ (0xfffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)) 
           | (0x40U & (((0x3ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                  >> 0xdU))) 
                        | (0x7ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                        >> 0xcU)))) 
                       | (0x3ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                   >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s)) 
           | (0x80U & (((0xff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                    >> 0x10U)) ^ (0x1ff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                     >> 0xfU))) 
                       ^ (0x3ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)) 
           | (0x80U & (((0xff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                     >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                  >> 0xfU))) 
                        | (0x1ff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                        >> 0xeU)))) 
                       | (0xff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                   >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s)) 
           | (0x100U & (((0x3f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                     >> 0x12U)) ^ (0x7f00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                      >> 0x11U))) 
                        ^ (0xff00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)) 
           | (0x100U & (((0x3f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                   >> 0x11U))) 
                         | (0x7f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                        >> 0x11U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                        >> 0x10U)))) 
                        | (0x3f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                       >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s)) 
           | (0x200U & (((0xe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                    >> 0x14U)) ^ (0x1e00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                     >> 0x13U))) 
                        ^ (0x3e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)) 
           | (0x200U & (((0xe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                  >> 0x13U))) 
                         | (0x1e00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                        >> 0x13U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                        >> 0x12U)))) 
                        | (0xe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                   >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_s)) 
           | (0x400U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                          << 0xaU) ^ (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                >> 0x15U))) 
                        ^ (0xc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)) 
           | (0x400U & ((0x400U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                     << 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                 >> 0x15U)) 
                                   | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                       >> 0x15U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                       >> 0x14U)))) 
                        | (0xc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      << 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0U] 
                                                  >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                      >> 3U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                >> 2U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                           >> 1U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                       >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                 >> 2U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                             >> 2U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                               >> 1U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                        >> 3U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                  >> 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                    >> 5U)) ^ (0xffffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                  >> 4U))) 
                    ^ (0x1ffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                     >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                               >> 4U))) 
                     | (0xffffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                 >> 3U)))) 
                    | (0x7fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                >> 3U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                    >> 7U)) ^ (0x3fffffcU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                  >> 6U))) 
                    ^ (0x7fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                     >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                     >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                               >> 6U))) 
                     | (0x3fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                 >> 5U)))) 
                    | (0x1fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x7ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                   >> 9U)) ^ (0xfffff8U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                 >> 8U))) 
                    ^ (0x1fffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                     >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x7ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                    >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                              >> 8U))) 
                     | (0xfffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                >> 7U)))) 
                    | (0x7ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                     >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                               >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x1ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 0xbU)) ^ (0x3ffff0U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                      >> 0xaU))) 
                       ^ (0x7ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x1ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 0xbU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                   >> 0xaU))) 
                        | (0x3ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                         >> 0xaU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                         >> 9U)))) 
                       | (0x1ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                        >> 0xbU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                     >> 0xdU)) ^ (0xfffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                     >> 0xcU))) 
                       ^ (0x1fffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                  >> 0xcU))) 
                        | (0xfffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                        >> 0xbU)))) 
                       | (0x7ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                   >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                     >> 0xfU)) ^ (0x3ffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                     >> 0xeU))) 
                       ^ (0x7ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                  >> 0xeU))) 
                        | (0x3ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                        >> 0xdU)))) 
                       | (0x1ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                   >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x7f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                    >> 0x11U)) ^ (0xff80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                     >> 0x10U))) 
                       ^ (0x1ff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x7f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                     >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                  >> 0x10U))) 
                        | (0xff80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 0xfU)))) 
                       | (0x7f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                   >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x1f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                     >> 0x13U)) ^ (0x3f00U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                      >> 0x12U))) 
                        ^ (0x7f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x1f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                   >> 0x12U))) 
                         | (0x3f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                        >> 0x12U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                        >> 0x11U)))) 
                        | (0x1f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x600U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                    >> 0x15U)) ^ (0xe00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                     >> 0x14U))) 
                        ^ (0x1e00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                  >> 0x14U))) 
                         | (0xe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 0x14U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                       >> 0x13U)))) 
                        | (0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                   >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                         << 9U)) ^ 
                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                          << 0xaU)) ^ (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                 >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & (((0xfffffc00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                          << 9U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                          << 0xaU))) 
                         | (0x400U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                       << 0xaU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                   >> 0x15U)))) 
                        | (0x400U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      << 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[1U] 
                                                >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                      >> 4U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                >> 3U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                           >> 2U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                       >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                 >> 3U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                             >> 3U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                               >> 2U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                        >> 4U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                  >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x3fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                    >> 6U)) ^ (0x7fffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                  >> 5U))) 
                    ^ (0xffffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x3fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                               >> 5U))) 
                     | (0x7fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                       >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                 >> 4U)))) 
                    | (0x3fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0xfffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                   >> 8U)) ^ (0x1fffffcU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                 >> 7U))) 
                    ^ (0x3fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0xfffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                    >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                              >> 7U))) 
                     | (0x1fffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                       >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                 >> 6U)))) 
                    | (0xfffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                               >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x3ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                   >> 0xaU)) ^ (0x7ffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                   >> 9U))) 
                    ^ (0xfffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                    >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x3ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                    >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                >> 9U))) 
                     | (0x7ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                >> 8U)))) 
                    | (0x3ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                 >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0xffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 0xcU)) ^ (0x1ffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                     >> 0xbU))) 
                       ^ (0x3ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                       >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0xffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                  >> 0xbU))) 
                        | (0x1ffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                         >> 0xbU) & 
                                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                         >> 0xaU)))) 
                       | (0xffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                       >> 0xcU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                   >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x3ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 0xeU)) ^ (0x7ffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                     >> 0xdU))) 
                       ^ (0xfffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x3ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                  >> 0xdU))) 
                        | (0x7ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                        >> 0xcU)))) 
                       | (0x3ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                   >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0xffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                    >> 0x10U)) ^ (0x1ffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                     >> 0xfU))) 
                       ^ (0x3ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0xffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                  >> 0xfU))) 
                        | (0x1ffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                        >> 0xeU)))) 
                       | (0xffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                   >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x3f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                    >> 0x12U)) ^ (0x7f80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                     >> 0x11U))) 
                       ^ (0xff80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x3f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                  >> 0x11U))) 
                        | (0x7f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                       >> 0x10U)))) 
                       | (0x3f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                   >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0xf00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                    >> 0x14U)) ^ (0x1f00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                     >> 0x13U))) 
                        ^ (0x3f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0xf00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                  >> 0x13U))) 
                         | (0x1f00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                        >> 0x13U) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                        >> 0x12U)))) 
                        | (0xf00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      >> 0x14U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                   >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                    >> 0x16U)) ^ (0x600U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                     >> 0x15U))) 
                        ^ (0xe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0x200U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                     >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                  >> 0x15U))) 
                         | (0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                       >> 0x15U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                       >> 0x14U)))) 
                        | (0x200U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                      >> 0x16U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[2U] 
                                                   >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                         << 8U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                         << 9U))) ^ 
                        (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                         << 0xaU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                           << 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     << 9U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                 << 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                   << 0xaU))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                            << 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      << 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                      >> 5U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                >> 4U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                           >> 3U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                       >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                 >> 4U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                             >> 4U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                               >> 3U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                        >> 5U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                  >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x1fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                    >> 7U)) ^ (0x3fffffeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                  >> 6U))) 
                    ^ (0x7fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x1fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                               >> 6U))) 
                     | (0x3fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                 >> 5U)))) 
                    | (0x1fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                >> 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x7ffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                   >> 9U)) ^ (0xfffffcU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                 >> 8U))) 
                    ^ (0x1fffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x7ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                    >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                              >> 8U))) 
                     | (0xfffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                >> 7U)))) 
                    | (0x7ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                               >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x1ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                   >> 0xbU)) ^ (0x3ffff8U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                   >> 0xaU))) 
                    ^ (0x7ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                    >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x1ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                    >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                >> 0xaU))) 
                     | (0x3ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                  >> 9U)))) 
                    | (0x1ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                 >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x7fff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 0xdU)) ^ (0xffff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                     >> 0xcU))) 
                       ^ (0x1ffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x7fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                  >> 0xcU))) 
                        | (0xffff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                        >> 0xcU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                        >> 0xbU)))) 
                       | (0x7fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 0xdU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                   >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x1ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 0xfU)) ^ (0x3ffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                     >> 0xeU))) 
                       ^ (0x7ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x1ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                  >> 0xeU))) 
                        | (0x3ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                        >> 0xdU)))) 
                       | (0x1ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                   >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x7fc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                    >> 0x11U)) ^ (0xffc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                     >> 0x10U))) 
                       ^ (0x1ffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x7fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                  >> 0x10U))) 
                        | (0xffc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 0xfU)))) 
                       | (0x7fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                   >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0x1f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                    >> 0x13U)) ^ (0x3f80U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                     >> 0x12U))) 
                       ^ (0x7f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0x1f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                  >> 0x12U))) 
                        | (0x3f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 0x11U)))) 
                       | (0x1f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                   >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x700U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                    >> 0x15U)) ^ (0xf00U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                     >> 0x14U))) 
                        ^ (0x1f00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      >> 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x700U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 0x15U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                  >> 0x14U))) 
                         | (0xf00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 0x14U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 0x13U)))) 
                        | (0x700U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                      >> 0x15U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                   >> 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                          << 9U) ^ (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                              >> 0x16U))) 
                        ^ (0x600U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                     >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & ((0x200U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     << 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                               >> 0x16U)) 
                                   | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 0x16U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                       >> 0x15U)))) 
                        | (0x600U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                      << 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[3U] 
                                                >> 0x15U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                         << 7U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                         << 8U))) ^ 
                        (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                        << 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                           << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     << 8U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                 << 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                   << 9U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                            << 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                      << 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                      >> 6U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                >> 5U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                           >> 4U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                       >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                 >> 5U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                             >> 5U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                               >> 4U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                        >> 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                  >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0xfffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                   >> 8U)) ^ (0x1fffffeU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                 >> 7U))) 
                    ^ (0x3fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     >> 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0xfffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                    >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                              >> 7U))) 
                     | (0x1fffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                       >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                 >> 6U)))) 
                    | (0xfffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                               >> 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x3ffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                   >> 0xaU)) ^ (0x7ffffcU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                   >> 9U))) 
                    ^ (0xfffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                    >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x3ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                    >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                >> 9U))) 
                     | (0x7ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                      >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                >> 8U)))) 
                    | (0x3ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                 >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0xffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                  >> 0xcU)) ^ (0x1ffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                  >> 0xbU))) 
                    ^ (0x3ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                    >> 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0xffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                   >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                               >> 0xbU))) 
                     | (0x1ffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                      >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                  >> 0xaU)))) 
                    | (0xffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                    >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                >> 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x3fff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     >> 0xeU)) ^ (0x7fff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                     >> 0xdU))) 
                       ^ (0xffff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                      >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x3fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                      >> 0xeU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                  >> 0xdU))) 
                        | (0x7fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                        >> 0xdU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                        >> 0xcU)))) 
                       | (0x3fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                       >> 0xeU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                   >> 0xcU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0xffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                    >> 0x10U)) ^ (0x1ffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                     >> 0xfU))) 
                       ^ (0x3ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                      >> 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0xffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     >> 0x10U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                  >> 0xfU))) 
                        | (0x1ffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                        >> 0xfU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                        >> 0xeU)))) 
                       | (0xffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                      >> 0x10U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                   >> 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x3fc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                    >> 0x12U)) ^ (0x7fc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                     >> 0x11U))) 
                       ^ (0xffc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x3fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     >> 0x12U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                  >> 0x11U))) 
                        | (0x7fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                       >> 0x11U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                       >> 0x10U)))) 
                       | (0x3fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                      >> 0x12U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                   >> 0x10U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s)) 
           | (0x80U & (((0xf80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                   >> 0x14U)) ^ (0x1f80U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                    >> 0x13U))) 
                       ^ (0x3f80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c 
        = ((0x77fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c)) 
           | (0x80U & (((0xf80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                    >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                 >> 0x13U))) 
                        | (0x1f80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                       >> 0x13U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                       >> 0x12U)))) 
                       | (0xf80U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     >> 0x14U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                  >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s)) 
           | (0x100U & (((0x300U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                    >> 0x16U)) ^ (0x700U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                     >> 0x15U))) 
                        ^ (0xf00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c 
        = ((0x6ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c)) 
           | (0x100U & (((0x300U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                     >> 0x16U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                  >> 0x15U))) 
                         | (0x700U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                       >> 0x15U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                       >> 0x14U)))) 
                        | (0x300U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                      >> 0x16U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                   >> 0x14U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s)) 
           | (0x200U & (((0xfffffe00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                         << 8U)) ^ 
                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                          << 9U)) ^ (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                               >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c 
        = ((0x5ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c)) 
           | (0x200U & (((0xfffffe00U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                          << 8U) & 
                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                          << 9U))) 
                         | (0x200U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                       << 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                 >> 0x16U)))) 
                        | (0x200U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                      << 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[4U] 
                                                >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_s)) 
           | (0x400U & (((0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                         << 6U)) ^ 
                         (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                         << 7U))) ^ 
                        (0xfffffc00U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                        << 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__4__KET____DOT__w1__DOT__l1_c)) 
           | (0x400U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                           << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                     << 7U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                 << 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                   << 8U))) 
                        | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                            << 6U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                      << 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s)) 
           | (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                      >> 7U) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                >> 6U)) ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                           >> 5U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c 
        = ((0x7feU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c)) 
           | (1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                       >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                 >> 6U)) | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                             >> 6U) 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                               >> 5U))) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                        >> 7U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                  >> 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s)) 
           | (2U & (((0x7ffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                   >> 9U)) ^ (0xfffffeU 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                 >> 8U))) 
                    ^ (0x1fffffeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                     >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c 
        = ((0x7fdU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c)) 
           | (2U & (((0x7ffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                    >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                              >> 8U))) 
                     | (0xfffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                      >> 8U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                >> 7U)))) 
                    | (0x7ffffeU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                     >> 9U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                               >> 7U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s)) 
           | (4U & (((0x1ffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                   >> 0xbU)) ^ (0x3ffffcU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                   >> 0xaU))) 
                    ^ (0x7ffffcU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                    >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c 
        = ((0x7fbU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c)) 
           | (4U & (((0x1ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                    >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                >> 0xaU))) 
                     | (0x3ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                      >> 0xaU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                  >> 9U)))) 
                    | (0x1ffffcU & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                     >> 0xbU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                 >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s)) 
           | (8U & (((0x7fff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                  >> 0xdU)) ^ (0xffff8U 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                  >> 0xcU))) 
                    ^ (0x1ffff8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                    >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c 
        = ((0x7f7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c)) 
           | (8U & (((0x7fff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                   >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                               >> 0xcU))) 
                     | (0xffff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                     >> 0xcU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                 >> 0xbU)))) 
                    | (0x7fff8U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                    >> 0xdU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                >> 0xbU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s)) 
           | (0x10U & (((0x1fff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                     >> 0xfU)) ^ (0x3fff0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                     >> 0xeU))) 
                       ^ (0x7fff0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                      >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c 
        = ((0x7efU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c)) 
           | (0x10U & (((0x1fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                      >> 0xfU) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                  >> 0xeU))) 
                        | (0x3fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                        >> 0xeU) & 
                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                        >> 0xdU)))) 
                       | (0x1fff0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                       >> 0xfU) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                   >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s)) 
           | (0x20U & (((0x7fe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                    >> 0x11U)) ^ (0xffe0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                     >> 0x10U))) 
                       ^ (0x1ffe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                      >> 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c 
        = ((0x7dfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c)) 
           | (0x20U & (((0x7fe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                     >> 0x11U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                  >> 0x10U))) 
                        | (0xffe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                       >> 0x10U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                       >> 0xfU)))) 
                       | (0x7fe0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                      >> 0x11U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                   >> 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_s)) 
           | (0x40U & (((0x1fc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                    >> 0x13U)) ^ (0x3fc0U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                     >> 0x12U))) 
                       ^ (0x7fc0U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                     >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c 
        = ((0x7bfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__5__KET____DOT__w1__DOT__l1_c)) 
           | (0x40U & (((0x1fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                     >> 0x13U) & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                  >> 0x12U))) 
                        | (0x3fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                       >> 0x12U) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                       >> 0x11U)))) 
                       | (0x1fc0U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                      >> 0x13U) & (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[5U] 
                                                   >> 0x11U))))));
}
