// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22051013_rvcpu.h for the primary calling header

#include "Vysyx_22051013_rvcpu___024root.h"
#include "Vysyx_22051013_rvcpu__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___sequent__TOP__6(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___sequent__TOP__6\n"); );
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x47U] 
                                    >> 0x13U)) | ((4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                                      >> 0x10U)) 
                                                  | (2U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                                        >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                       << 4U)) | ((0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4fU] 
                                                      >> 0x19U)) 
                                                  | (0x10U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4bU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                        >> 5U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                                       >> 2U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6cU] 
                                         >> 0xeU)) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x68U] 
                                           >> 0xbU)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                             >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                         << 9U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                          << 0xcU)) 
                              | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x70U] 
                                            >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U]) 
           | (0xffff0000U & ((0x40000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                             << 3U)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[9U] 
                                           >> 6U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[5U] 
                                              >> 3U)) 
                                | (0x80000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                            << 0x11U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                              << 0x14U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xdU] 
                                                >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                                            << 8U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                               << 0xbU)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                                 << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2eU] 
                                             >> 1U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2aU] 
                                                << 2U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x26U] 
                                                  << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x34U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                             << 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                    >> 0xaU)) | (1U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                                    >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x47U] 
                                       >> 0x13U)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                     >> 0x10U)) | (4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                                      >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                       << 4U)) | ((0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4fU] 
                                                      >> 0x19U)) 
                                                  | (0x20U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4bU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                        >> 5U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                                       >> 2U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6cU] 
                                         >> 0xeU)) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x68U] 
                                            >> 0xbU)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                             >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                          << 9U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                          << 0xcU)) 
                              | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x70U] 
                                            >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U]) 
           | (0xfffe0000U & ((0x80000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                             << 3U)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[9U] 
                                           >> 6U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[5U] 
                                              >> 3U)) 
                                | (0x100000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                            << 0x11U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                               << 0x14U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                                             << 8U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                               << 0xbU)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                                 << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x35U]) 
           | (0xe0000000U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                              << 0x1fU) | ((0x40000000U 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2aU] 
                                               << 2U)) 
                                           | (0x20000000U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x26U] 
                                                 << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                     >> 0xaU)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                         >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x47U] 
                                       >> 0x13U)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                        >> 0x10U)) 
                              | (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                       >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                        << 4U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                       << 7U)) 
                                                   | (0x40U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4bU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                        >> 5U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                                       >> 2U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6cU] 
                                         >> 0xeU)) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x68U] 
                                            >> 0xbU)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                          << 9U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                           << 0xcU)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                            << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U]) 
           | (0xfffc0000U & ((0x100000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                             << 3U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[9U] 
                                           >> 6U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[5U] 
                                              >> 3U)) 
                                | (0x200000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                            << 0x11U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                               << 0x14U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                                             << 8U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                                << 0xbU)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                                 << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x36U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2aU] 
                                             << 2U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x26U] 
                                               << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                    >> 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                    >> 0xaU)) | ((4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                                     >> 7U)) 
                                                 | (2U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                       >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x47U] 
                                       >> 0x13U)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                        >> 0x10U)) 
                              | (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                          >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                        << 4U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                       << 7U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4bU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                         >> 5U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                         >> 2U)) | 
                              (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6cU] 
                                         >> 0xeU)) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x68U] 
                                            >> 0xbU)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                          << 9U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                           << 0xcU)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                             << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (0xfff80000U & ((0x200000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                              << 3U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[9U] 
                                            >> 6U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[5U] 
                                              >> 3U)) 
                                | (0x400000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                            << 0x11U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                               << 0x14U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                                             << 8U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                                << 0xbU)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                                  << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x37U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x26U] 
                             << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                    >> 1U)) | (1U & 
                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2aU] 
                                                >> 0x1eU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                       >> 0xaU)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                     >> 7U)) | (4U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                   >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x47U] 
                                       >> 0x13U)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                        >> 0x10U)) 
                              | (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                          >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                        << 4U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                       << 7U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4bU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                         >> 5U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                          >> 2U)) | 
                              (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6cU] 
                                          >> 0xeU)) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x68U] 
                                            >> 0xbU)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                          << 9U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                           << 0xcU)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                             << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U]) 
           | (0xfff00000U & ((0x400000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                              << 3U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[9U] 
                                            >> 6U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[5U] 
                                               >> 3U)) 
                                | (0x800000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                             << 0x11U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                               << 0x14U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x38U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                                             << 8U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                                << 0xbU)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                                  << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                     >> 1U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2aU] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x26U] 
                                       >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                       >> 0xaU)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                        >> 7U)) | (8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x47U] 
                                        >> 0x13U)) 
                             | ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                          >> 0x10U)) 
                                | (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                            >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                        << 4U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                       << 7U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4bU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                         >> 5U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                          >> 2U)) | 
                              (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6cU] 
                                          >> 0xeU)) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x68U] 
                                             >> 0xbU)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                           << 9U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                             << 0xcU)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                               << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U]) 
           | (0xffe00000U & ((0x800000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                              << 3U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                            << 0x1aU)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[5U] 
                                               >> 3U)) 
                                | (0x1000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                             << 0x11U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                                << 0x14U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x39U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                             << 0xbU)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                               << 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                    >> 0x18U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                    >> 1U)) | ((4U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                   << 2U)) 
                                               | (2U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x26U] 
                                                     >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                       >> 0xaU)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                        >> 7U)) | (0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x47U] 
                                        >> 0x13U)) 
                             | ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                           >> 0x10U)) 
                                | (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                            >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                         << 4U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                         << 7U)) | 
                              (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                         << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                         >> 5U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                          >> 2U)) | 
                              (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                          << 0x12U)) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x68U] 
                                             >> 0xbU)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                           << 9U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                              << 0xcU)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                               << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (0xffc00000U & ((0x1000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                              << 3U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                            << 0x1aU)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[5U] 
                                               >> 3U)) 
                                | (0x2000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                             << 0x11U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                                << 0x14U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                  << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3aU]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                             << 0xeU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                                    >> 0x18U)) | (1U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                                     >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                       >> 1U)) | ((8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                      << 2U)) 
                                                  | (4U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x26U] 
                                                        >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                       >> 0xaU)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                        >> 7U)) | (0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x47U] 
                                        >> 0x13U)) 
                             | ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                           >> 0x10U)) 
                                | (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                         << 4U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                          << 7U)) | 
                              (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                         << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                          >> 5U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                          >> 2U)) | 
                              (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                          << 0x12U)) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x68U] 
                                             >> 0xbU)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                           << 9U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                              << 0xcU)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU]) 
           | (0xff800000U & ((0x2000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                               << 3U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                             << 0x1aU)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[5U] 
                                               >> 3U)) 
                                | (0x4000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3bU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                             << 0x11U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                                << 0x14U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                  << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                     >> 0x18U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                            >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                       >> 1U)) | ((0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                      << 2U)) 
                                                  | (8U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x26U] 
                                                        >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                        >> 0xaU)) | 
                             ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                        >> 7U)) | (0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x47U] 
                                        >> 0x13U)) 
                             | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                           >> 0x10U)) 
                                | (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                         << 4U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                          << 7U)) | 
                              (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                          << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                          >> 5U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                           >> 2U)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                            << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                           << 0x12U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x68U] 
                                             >> 0xbU)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                           << 9U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                              << 0xcU)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU]) 
           | (0xff000000U & ((0x4000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                               << 3U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                             << 0x1aU)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[5U] 
                                                >> 3U)) 
                                | (0x8000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3cU]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                             << 0x14U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                               << 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                    >> 0xfU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                                    >> 0x18U)) | ((4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                                      >> 0x15U)) 
                                                  | (2U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                                        >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                       >> 1U)) | ((0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                      << 2U)) 
                                                  | (0x10U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x26U] 
                                                        >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                        >> 0xaU)) | 
                             ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                         >> 7U)) | 
                              (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                        >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x47U] 
                                         >> 0x13U)) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                           >> 0x10U)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                         << 4U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                          << 7U)) | 
                              (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                          << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                          >> 5U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                           >> 2U)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                             << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                           << 0x12U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x68U] 
                                              >> 0xbU)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                            << 9U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                              << 0xcU)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (0xfe000000U & ((0x8000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                               << 3U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                             << 0x1aU)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                << 0x1dU)) 
                                | (0x10000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3dU]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                             << 0x17U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                    >> 0xfU)) | (1U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                                    >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                                       >> 0x18U)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                     >> 0x15U)) | (4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                                      >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                       >> 1U)) | ((0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                      << 2U)) 
                                                  | (0x20U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                        << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                        >> 0xaU)) | 
                             ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                         >> 7U)) | 
                              (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                         >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                         << 0xdU)) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                            >> 0x10U)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                          << 4U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                          << 7U)) | 
                              (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                          << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                          >> 5U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                           >> 2U)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                             << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                           << 0x12U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                              << 0x15U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                            << 9U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                               << 0xcU)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU]) 
           | (0xfc000000U & ((0x10000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                               << 3U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3eU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                             << 0x1aU)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                << 0x1dU)) 
                                | (0x20000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                     >> 0xfU)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                           >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                                       >> 0x18U)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                        >> 0x15U)) 
                              | (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                       >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                        >> 1U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                       << 2U)) 
                                                   | (0x40U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                        >> 0xaU)) | 
                             ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                         >> 7U)) | 
                              (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                         >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                         << 0xdU)) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                            >> 0x10U)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                          << 4U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                           << 7U)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                            << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                           >> 5U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                             >> 2U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                               << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                           << 0x12U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                              << 0x15U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                            << 9U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                               << 0xcU)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU]) 
           | (0xf8000000U & ((0x20000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                                << 3U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x3fU]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                             << 0x1dU)) 
                             | (0x40000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                    >> 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                    >> 0xfU)) | ((4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                                     >> 0xcU)) 
                                                 | (2U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                       >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                                       >> 0x18U)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                        >> 0x15U)) 
                              | (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                          >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                        >> 1U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                       << 2U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                         >> 0xaU)) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                           >> 7U)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                             >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                         << 0xdU)) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                            >> 0x10U)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                          << 4U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                           << 7U)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                             << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                           >> 5U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                              >> 2U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                               << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                            << 0x12U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                              << 0x15U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                            << 9U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                               << 0xcU)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (0xf0000000U & ((0x40000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                                << 3U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                                  << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x40U]) 
           | (0x80000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[1U]));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                    >> 6U)) | (1U & 
                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                       >> 0xfU)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                     >> 0xcU)) | (4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                     >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x22U] 
                                       >> 0x18U)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                        >> 0x15U)) 
                              | (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                          >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                        >> 1U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                       << 2U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                         >> 0xaU)) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                            >> 7U)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                             >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                          << 0xdU)) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x43U] 
                                            >> 0x10U)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                          << 4U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                           << 7U)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                             << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                           >> 5U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                              >> 2U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                            << 0x12U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                               << 0x15U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x64U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                             << 9U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                               << 0xcU)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x41U]) 
           | (0xe0000000U & ((0x80000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x85U]) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                                << 3U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                                  << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                     >> 6U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                       >> 0xfU)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                        >> 0xcU)) | 
                              (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                     >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                        << 8U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                                       >> 0x15U)) 
                                                   | (0x40U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                        >> 1U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                       << 2U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                         >> 0xaU)) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                            >> 7U)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                          << 0xdU)) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                             << 0x10U)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                           << 4U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                             << 7U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                               << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                           >> 5U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                              >> 2U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                            << 0x12U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                               << 0x15U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                             << 9U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                                << 0xcU)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x42U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                             << 3U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                               << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                    >> 6U)) | ((4U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                   >> 3U)) 
                                               | (2U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                       >> 0xfU)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                        >> 0xcU)) | 
                              (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                        << 8U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                                       >> 0x15U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                         >> 1U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                         << 2U)) | 
                              (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                         >> 0xaU)) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                            >> 7U)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                          << 0xdU)) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                             << 0x10U)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                               >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                           << 4U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                              << 7U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                               << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                            >> 5U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                              >> 2U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                            << 0x12U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                               << 0x15U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                             << 9U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                                << 0xcU)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                  << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x43U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                             << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U]) 
           | (0x7fffffffU & ((2U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                      >> 0x1dU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                       >> 6U)) | ((8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                      >> 3U)) 
                                                  | (4U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                       >> 0xfU)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                        >> 0xcU)) | 
                              (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                        << 8U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                                       >> 0x15U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                         >> 1U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                          << 2U)) | 
                              (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                          >> 0xaU)) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                            >> 7U)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                          << 0xdU)) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                             << 0x10U)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                               >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                           << 4U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                              << 7U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                            >> 5U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                               >> 2U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                             << 0x12U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                               << 0x15U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x44U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                             << 9U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                                << 0xcU)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                  << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U]) 
           | ((4U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
              | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                        >> 0x1dU)) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                            >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                       >> 6U)) | ((0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                      >> 3U)) 
                                                  | (8U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                        >> 0xfU)) | 
                             ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                        >> 0xcU)) | 
                              (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                        << 8U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1eU] 
                                                       >> 0x15U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                         >> 1U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                          << 2U)) | 
                              (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                          << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                          >> 0xaU)) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                             >> 7U)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                           << 0xdU)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                             << 0x10U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3fU] 
                                               >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                           << 4U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                              << 7U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x60U] 
                                            >> 5U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                               >> 2U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                             << 0x12U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                                << 0x15U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x45U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                             << 0xcU)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                               << 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                    >> 0x17U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (0xfffffffeU & ((8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x81U] 
                                       >> 0x1dU)) | 
                                (2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                       >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                       >> 6U)) | ((0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                      >> 3U)) 
                                                  | (0x10U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                        >> 0xfU)) | 
                             ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                         >> 0xcU)) 
                              | (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                          >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                         << 8U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                         << 0xbU)) 
                              | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                           >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                         >> 1U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                          << 2U)) | 
                              (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                          << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                          >> 0xaU)) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                             >> 7U)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                               >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                           << 0xdU)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                              << 0x10U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                               << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                            << 4U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                              << 7U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                            << 0x1bU)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                               >> 2U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                             << 0x12U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                                << 0x15U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                  << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x46U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                             << 0xfU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                    >> 0x17U)) | (1U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U]) 
           | (0xfffffffcU & ((0x10U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                       << 3U)) | (4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                                     >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                       >> 6U)) | ((0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                      >> 3U)) 
                                                  | (0x20U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                        >> 0xfU)) | 
                             ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                         >> 0xcU)) 
                              | (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                           >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                         << 8U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                          << 0xbU)) 
                              | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                           >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                          >> 1U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                          << 2U)) | 
                              (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                          << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                          >> 0xaU)) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                             >> 7U)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                               >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                           << 0xdU)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                              << 0x10U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                            << 4U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                               << 7U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                             << 0x1bU)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                               >> 2U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x47U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                             << 0x12U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                                << 0x15U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                  << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                     >> 0x17U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                            >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U]) 
           | (0xfffffff8U & ((0x20U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                          << 3U)) | 
                                (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                       >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                        >> 6U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                       >> 3U)) 
                                                   | (0x40U 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                        >> 0xfU)) | 
                             ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                         >> 0xcU)) 
                              | (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                           >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                         << 8U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                          << 0xbU)) 
                              | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                            >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                          >> 1U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                           << 2U)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                            << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                           >> 0xaU)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                             >> 7U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                               >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                           << 0xdU)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                              << 0x10U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                            << 4U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                               << 7U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                 << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                             << 0x1bU)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                                >> 2U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x48U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                             << 0x15U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                               << 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                    >> 0xeU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                    >> 0x17U)) | ((4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                                      >> 0x14U)) 
                                                  | (2U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                        >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (0xfffffff0U & ((0x40U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                          << 3U)) | 
                                (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                          >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                        >> 6U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                       >> 3U)) 
                                                   | (0x80U 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                         >> 0xfU)) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                           >> 0xcU)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                             >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                         << 8U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                          << 0xbU)) 
                              | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1aU] 
                                            >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                          >> 1U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                           << 2U)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                             << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3bU] 
                                           >> 0xaU)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                              >> 7U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                               >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                            << 0xdU)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                              << 0x10U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                            << 4U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                               << 7U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                 << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                             << 0x1bU)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5cU] 
                                                >> 2U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                  << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x49U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                             << 0x18U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                    >> 0xeU)) | (1U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                                    >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                       >> 0x17U)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                     >> 0x14U)) | (4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                      >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU]) 
           | (0xffffffe0U & ((0x80U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                          << 3U)) | 
                                (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7dU] 
                                          >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                        >> 6U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                       >> 3U)) 
                                                   | (0x100U 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                         >> 0xfU)) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                            >> 0xcU)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                             >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                          << 8U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                          << 0xbU)) 
                              | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                            << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                          >> 1U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                           << 2U)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                             << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                           << 0x16U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                              >> 7U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                            << 0xdU)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                               << 0x10U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                             << 4U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                               << 7U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                 << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4aU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                             << 0x1bU)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                << 0x1eU)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                  << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                     >> 0xeU)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                           >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                       >> 0x17U)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                        >> 0x14U)) 
                              | (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                       >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU]) 
           | (0xffffffc0U & ((0x100U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                          << 3U)) | 
                                (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                          << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                        >> 6U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                       >> 3U)) 
                                                   | (0x200U 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                         >> 0xfU)) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                            >> 0xcU)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                              >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                          << 8U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                           << 0xbU)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                            << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                           >> 1U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                             << 2U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                               << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                           << 0x16U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                              >> 7U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                            << 0xdU)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                               << 0x10U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                 << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                             << 4U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                << 7U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                 << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4bU]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                             << 0x1eU)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                               << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                    >> 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                    >> 0xeU)) | ((4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                                     >> 0xbU)) 
                                                 | (2U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                       >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                       >> 0x17U)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                        >> 0x14U)) 
                              | (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                          >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (0xffffff80U & ((0x200U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                           << 3U)) 
                                | (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                            << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                         >> 6U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                         >> 3U)) | 
                              (0x400U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                         >> 0xfU)) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                            >> 0xcU)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                              >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                          << 8U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                           << 0xbU)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                             << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                           >> 1U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                              << 2U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                               << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                            << 0x16U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                              >> 7U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                            << 0xdU)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                               << 0x10U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                 << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                             << 4U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                << 7U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                  << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4cU]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                             << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                    >> 5U)) | (1U & 
                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                       >> 0xeU)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                     >> 0xbU)) | (4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                     >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                       >> 0x17U)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                        >> 0x14U)) 
                              | (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                          >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU]) 
           | (0xffffff00U & ((0x400U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                           << 3U)) 
                                | (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                             << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                         >> 6U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                          >> 3U)) | 
                              (0x800U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x16U] 
                                          >> 0xfU)) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                            >> 0xcU)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                              >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                          << 8U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                           << 0xbU)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                             << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                           >> 1U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                              << 2U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                            << 0x16U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x37U] 
                                               >> 7U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                             << 0xdU)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                               << 0x10U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                 << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4dU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                             << 4U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                << 7U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                  << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                     >> 5U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                       >> 2U)) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x58U] 
                                                  >> 0x1fU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                       >> 0xeU)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                        >> 0xbU)) | 
                              (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                     >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x79U] 
                                        >> 0x17U)) 
                             | ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                          >> 0x14U)) 
                                | (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                            >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU]) 
           | (0xfffffe00U & ((0x800U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                           << 3U)) 
                                | (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                             << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                         >> 6U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                          >> 3U)) | 
                              (0x1000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                          << 0x11U)) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                             >> 0xcU)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                              >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                           << 8U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                             << 0xbU)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                               << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                           >> 1U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                              << 2U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                            << 0x16U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                               << 0x19U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                 >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                             << 0xdU)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                                << 0x10U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                 << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4eU]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                             << 7U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                               << 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                    >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                    >> 5U)) | ((4U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                   >> 2U)) 
                                               | (2U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                     << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                       >> 0xeU)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                        >> 0xbU)) | 
                              (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                        << 9U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                                       >> 0x14U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                         >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (0xfffffc00U & ((0x1000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                           << 3U)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                             << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                         >> 6U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                          >> 3U)) | 
                              (0x2000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                          << 0x11U)) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                             >> 0xcU)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                               >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                           << 8U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                              << 0xbU)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                               << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                            >> 1U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                              << 2U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                            << 0x16U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                               << 0x19U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                 >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                             << 0xdU)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                                << 0x10U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                  << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x4fU]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                             << 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                    >> 0x1cU)) | (1U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                     >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                       >> 5U)) | ((8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                      >> 2U)) 
                                                  | (4U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                        << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                       >> 0xeU)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                        >> 0xbU)) | 
                              (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                        << 9U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                                       >> 0x14U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                         >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U]) 
           | (0xfffff800U & ((0x2000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                            << 3U)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                             << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                          >> 6U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                          >> 3U)) | 
                              (0x4000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                          << 0x11U)) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                             >> 0xcU)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                               >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                           << 8U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                              << 0xbU)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                            >> 1U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                               << 2U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                             << 0x16U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                               << 0x19U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                 >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x50U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                             << 0xdU)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                                << 0x10U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                  << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                     >> 0x1cU)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                            >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                       >> 5U)) | ((0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                      >> 2U)) 
                                                  | (8U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                        << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                        >> 0xeU)) | 
                             ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                        >> 0xbU)) | 
                              (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                        << 9U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                                       >> 0x14U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                                         >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U]) 
           | (0xfffff000U & ((0x4000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                            << 3U)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                              << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                          >> 6U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                           >> 3U)) 
                              | (0x8000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                           << 0x11U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x12U] 
                                             >> 0xcU)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                               >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                           << 8U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                              << 0xbU)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                            >> 1U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                               << 2U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                 << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                             << 0x16U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                                << 0x19U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x33U] 
                                                 >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x51U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                             << 0x10U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                               << 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                    >> 0x13U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x54U] 
                                    >> 0x1cU)) | ((4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                      >> 0x19U)) 
                                                  | (2U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                       >> 5U)) | ((0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                      >> 2U)) 
                                                  | (0x10U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                        << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                        >> 0xeU)) | 
                             ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                         >> 0xbU)) 
                              | (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                          >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                         << 9U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x75U] 
                                         >> 0x14U)) 
                              | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                           >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (0xffffe000U & ((0x8000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                            << 3U)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                              << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                          >> 6U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                           >> 3U)) 
                              | (0x10000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                           << 0x11U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                              << 0x14U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                               >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                            << 8U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                              << 0xbU)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                            >> 1U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                               << 2U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                 << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                             << 0x16U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                                << 0x19U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                  << 0x1cU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x52U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                             << 0x13U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                    >> 0x13U)) | (1U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                                     >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                       << 4U)) | ((8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                      >> 0x19U)) 
                                                  | (4U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                       >> 5U)) | ((0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                      >> 2U)) 
                                                  | (0x20U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                        << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                        >> 0xeU)) | 
                             ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                         >> 0xbU)) 
                              | (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                           >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                         << 9U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                          << 0xcU)) 
                              | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                           >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U]) 
           | (0xffffc000U & ((0x10000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                            << 3U)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                              << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                          >> 6U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                           >> 3U)) 
                              | (0x20000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                           << 0x11U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                              << 0x14U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                            << 8U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                               << 0xbU)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                             >> 1U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                               << 2U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                 << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x53U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                             << 0x16U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                                << 0x19U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                  << 0x1cU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                     >> 0x13U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                            >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                       << 4U)) | ((0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                      >> 0x19U)) 
                                                  | (8U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                        >> 5U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                       >> 2U)) 
                                                   | (0x40U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                        >> 0xeU)) | 
                             ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                         >> 0xbU)) 
                              | (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                           >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                         << 9U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                          << 0xcU)) 
                              | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                            >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U]) 
           | (0xffff8000U & ((0x20000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                             << 3U)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                              << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                           >> 6U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                             >> 3U)) 
                                | (0x40000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                           << 0x11U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                              << 0x14U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                            << 8U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                               << 0xbU)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                 << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                             >> 1U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                << 2U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                 << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x54U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                             << 0x19U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                               << 0x1cU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                    >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                    >> 0x13U)) | ((4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                                      >> 0x10U)) 
                                                  | (2U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                        >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                       << 4U)) | ((0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                      >> 0x19U)) 
                                                  | (0x10U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                        >> 5U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                       >> 2U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                         >> 0xeU)) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                           >> 0xbU)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                             >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                         << 9U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                          << 0xcU)) 
                              | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                            >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (0xffff0000U & ((0x40000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                             << 3U)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                           >> 6U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                              >> 3U)) 
                                | (0x80000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                            << 0x11U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                              << 0x14U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xeU] 
                                                >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                            << 8U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                               << 0xbU)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                 << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2fU] 
                                             >> 1U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                << 2U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                  << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x55U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                             << 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                    >> 0xaU)) | (1U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                                    >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                       >> 0x13U)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                     >> 0x10U)) | (4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                                      >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                       << 4U)) | ((0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x50U] 
                                                      >> 0x19U)) 
                                                  | (0x20U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                        >> 5U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                       >> 2U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                         >> 0xeU)) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                            >> 0xbU)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                             >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                          << 9U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                          << 0xcU)) 
                              | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x71U] 
                                            >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U]) 
           | (0xfffe0000U & ((0x80000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                             << 3U)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                           >> 6U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                              >> 3U)) 
                                | (0x100000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                            << 0x11U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                               << 0x14U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                             << 8U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                               << 0xbU)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                 << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x56U]) 
           | (0xe0000000U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                              << 0x1fU) | ((0x40000000U 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                               << 2U)) 
                                           | (0x20000000U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                 << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                     >> 0xaU)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                         >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                       >> 0x13U)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                        >> 0x10U)) 
                              | (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                       >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                        << 4U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                       << 7U)) 
                                                   | (0x40U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                        >> 5U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                       >> 2U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                         >> 0xeU)) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                            >> 0xbU)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                          << 9U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                           << 0xcU)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                            << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U]) 
           | (0xfffc0000U & ((0x100000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                             << 3U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                           >> 6U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                              >> 3U)) 
                                | (0x200000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                            << 0x11U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                               << 0x14U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                             << 8U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                                << 0xbU)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                 << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x57U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                             << 2U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                               << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                    >> 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                    >> 0xaU)) | ((4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                                     >> 7U)) 
                                                 | (2U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                       >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                       >> 0x13U)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                        >> 0x10U)) 
                              | (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                          >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                        << 4U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                       << 7U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                         >> 5U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                         >> 2U)) | 
                              (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                         >> 0xeU)) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                            >> 0xbU)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                          << 9U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                           << 0xcU)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                             << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (0xfff80000U & ((0x200000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                              << 3U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                            >> 6U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                              >> 3U)) 
                                | (0x400000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                            << 0x11U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                               << 0x14U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                             << 8U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                                << 0xbU)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                  << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x58U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                             << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                    >> 1U)) | (1U & 
                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                                >> 0x1eU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                       >> 0xaU)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                     >> 7U)) | (4U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                   >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                       >> 0x13U)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                        >> 0x10U)) 
                              | (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                          >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                        << 4U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                       << 7U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                         >> 5U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                          >> 2U)) | 
                              (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                          >> 0xeU)) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                            >> 0xbU)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                          << 9U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                           << 0xcU)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                             << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U]) 
           | (0xfff00000U & ((0x400000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                              << 3U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xaU] 
                                            >> 6U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                               >> 3U)) 
                                | (0x800000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                             << 0x11U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                               << 0x14U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x59U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                             << 8U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                                << 0xbU)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                  << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                     >> 1U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2bU] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                       >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                       >> 0xaU)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                        >> 7U)) | (8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                        >> 0x13U)) 
                             | ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                          >> 0x10U)) 
                                | (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                            >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                        << 4U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                       << 7U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4cU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                         >> 5U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                          >> 2U)) | 
                              (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6dU] 
                                          >> 0xeU)) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                             >> 0xbU)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                           << 9U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                             << 0xcU)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                               << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU]) 
           | (0xffe00000U & ((0x800000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                              << 3U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                            << 0x1aU)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                               >> 3U)) 
                                | (0x1000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                             << 0x11U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                                << 0x14U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5aU]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                             << 0xbU)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                               << 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                    >> 0x18U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                    >> 1U)) | ((4U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                   << 2U)) 
                                               | (2U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                     >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                       >> 0xaU)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                        >> 7U)) | (0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                        >> 0x13U)) 
                             | ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                           >> 0x10U)) 
                                | (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                            >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                         << 4U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                         << 7U)) | 
                              (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                         << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                         >> 5U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                          >> 2U)) | 
                              (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                          << 0x12U)) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                             >> 0xbU)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                           << 9U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                              << 0xcU)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                               << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (0xffc00000U & ((0x1000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                              << 3U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                            << 0x1aU)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                               >> 3U)) 
                                | (0x2000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                             << 0x11U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                                << 0x14U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                  << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5bU]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                             << 0xeU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                    >> 0x18U)) | (1U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                                     >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                       >> 1U)) | ((8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                      << 2U)) 
                                                  | (4U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                        >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                       >> 0xaU)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                        >> 7U)) | (0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                        >> 0x13U)) 
                             | ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                           >> 0x10U)) 
                                | (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                         << 4U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                          << 7U)) | 
                              (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                         << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                          >> 5U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                          >> 2U)) | 
                              (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                          << 0x12U)) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                             >> 0xbU)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                           << 9U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                              << 0xcU)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU]) 
           | (0xff800000U & ((0x2000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                               << 3U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                             << 0x1aU)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                               >> 3U)) 
                                | (0x4000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5cU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                             << 0x11U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                                << 0x14U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                  << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                     >> 0x18U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                            >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                       >> 1U)) | ((0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                      << 2U)) 
                                                  | (8U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                        >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                        >> 0xaU)) | 
                             ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                        >> 7U)) | (0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                        >> 0x13U)) 
                             | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                           >> 0x10U)) 
                                | (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                         << 4U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                          << 7U)) | 
                              (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                          << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                          >> 5U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                           >> 2U)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                            << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                           << 0x12U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                             >> 0xbU)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                           << 9U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                              << 0xcU)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU]) 
           | (0xff000000U & ((0x4000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                               << 3U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                             << 0x1aU)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[6U] 
                                                >> 3U)) 
                                | (0x8000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5dU]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                             << 0x14U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                               << 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                    >> 0xfU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                    >> 0x18U)) | ((4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                                      >> 0x15U)) 
                                                  | (2U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                        >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                       >> 1U)) | ((0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                      << 2U)) 
                                                  | (0x10U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x27U] 
                                                        >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                        >> 0xaU)) | 
                             ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                         >> 7U)) | 
                              (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                        >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x48U] 
                                         >> 0x13U)) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                           >> 0x10U)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                         << 4U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                          << 7U)) | 
                              (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                          << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                          >> 5U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                           >> 2U)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                             << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                           << 0x12U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x69U] 
                                              >> 0xbU)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                            << 9U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                              << 0xcU)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (0xfe000000U & ((0x8000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                               << 3U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                             << 0x1aU)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                << 0x1dU)) 
                                | (0x10000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5eU]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                             << 0x17U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                    >> 0xfU)) | (1U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                                    >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                       >> 0x18U)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                     >> 0x15U)) | (4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                      >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                       >> 1U)) | ((0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                      << 2U)) 
                                                  | (0x20U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                        << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                        >> 0xaU)) | 
                             ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                         >> 7U)) | 
                              (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                         >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                         << 0xdU)) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                            >> 0x10U)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                          << 4U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                          << 7U)) | 
                              (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                          << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                          >> 5U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                           >> 2U)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                             << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                           << 0x12U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                              << 0x15U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                            << 9U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                               << 0xcU)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU]) 
           | (0xfc000000U & ((0x10000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                               << 3U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x5fU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                             << 0x1aU)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                << 0x1dU)) 
                                | (0x20000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                     >> 0xfU)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                           >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                       >> 0x18U)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                        >> 0x15U)) 
                              | (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                       >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                        >> 1U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                       << 2U)) 
                                                   | (0x40U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                        >> 0xaU)) | 
                             ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                         >> 7U)) | 
                              (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                         >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                         << 0xdU)) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                            >> 0x10U)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                          << 4U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                           << 7U)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                            << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                           >> 5U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                             >> 2U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                               << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                           << 0x12U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                              << 0x15U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                            << 9U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                               << 0xcU)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U]) 
           | (0xf8000000U & ((0x20000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                                << 3U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x60U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                             << 0x1dU)) 
                             | (0x40000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                    >> 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                    >> 0xfU)) | ((4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                                     >> 0xcU)) 
                                                 | (2U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                       >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                       >> 0x18U)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                        >> 0x15U)) 
                              | (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                          >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                        >> 1U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                       << 2U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                         >> 0xaU)) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                           >> 7U)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                             >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                         << 0xdU)) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                            >> 0x10U)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                          << 4U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                           << 7U)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                             << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                           >> 5U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                              >> 2U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                               << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                            << 0x12U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                              << 0x15U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                            << 9U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                               << 0xcU)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (0xf0000000U & ((0x40000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                                << 3U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                                  << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x61U]) 
           | (0x80000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[2U]));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                    >> 6U)) | (1U & 
                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                       >> 0xfU)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                     >> 0xcU)) | (4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                     >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x23U] 
                                       >> 0x18U)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                        >> 0x15U)) 
                              | (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                          >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                        >> 1U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                       << 2U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                         >> 0xaU)) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                            >> 7U)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                             >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                          << 0xdU)) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x44U] 
                                            >> 0x10U)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                          << 4U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                           << 7U)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                             << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                           >> 5U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                              >> 2U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                            << 0x12U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                               << 0x15U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x65U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                             << 9U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                               << 0xcU)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x62U]) 
           | (0xe0000000U & ((0x80000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x86U]) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                                << 3U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                                  << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                     >> 6U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                       >> 0xfU)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                        >> 0xcU)) | 
                              (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                     >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                        << 8U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                                       >> 0x15U)) 
                                                   | (0x40U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                        >> 1U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                       << 2U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                         >> 0xaU)) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                            >> 7U)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                          << 0xdU)) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                             << 0x10U)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                           << 4U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                             << 7U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                               << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                           >> 5U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                              >> 2U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                            << 0x12U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                               << 0x15U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                             << 9U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                                << 0xcU)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x63U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                             << 3U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                               << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                    >> 6U)) | ((4U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                   >> 3U)) 
                                               | (2U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                       >> 0xfU)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                        >> 0xcU)) | 
                              (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                        << 8U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                                       >> 0x15U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                         >> 1U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                         << 2U)) | 
                              (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                         >> 0xaU)) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                            >> 7U)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                          << 0xdU)) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                             << 0x10U)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                               >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                           << 4U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                              << 7U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                               << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                            >> 5U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                              >> 2U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                            << 0x12U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                               << 0x15U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                             << 9U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                                << 0xcU)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                  << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x64U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                             << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U]) 
           | (0x7fffffffU & ((2U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                      >> 0x1dU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                       >> 6U)) | ((8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                      >> 3U)) 
                                                  | (4U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                       >> 0xfU)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                        >> 0xcU)) | 
                              (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                        << 8U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                                       >> 0x15U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                         >> 1U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                          << 2U)) | 
                              (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                          >> 0xaU)) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                            >> 7U)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                          << 0xdU)) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                             << 0x10U)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                               >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                           << 4U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                              << 7U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                            >> 5U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                               >> 2U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                             << 0x12U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                               << 0x15U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x65U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                             << 9U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                                << 0xcU)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                  << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U]) 
           | ((4U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
              | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                        >> 0x1dU)) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                            >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                       >> 6U)) | ((0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                      >> 3U)) 
                                                  | (8U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                        >> 0xfU)) | 
                             ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                        >> 0xcU)) | 
                              (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                        << 8U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1fU] 
                                                       >> 0x15U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                         >> 1U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                          << 2U)) | 
                              (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                          << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                          >> 0xaU)) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                             >> 7U)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                           << 0xdU)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                             << 0x10U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x40U] 
                                               >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                           << 4U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                              << 7U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x61U] 
                                            >> 5U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                               >> 2U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                             << 0x12U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                                << 0x15U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x66U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                             << 0xcU)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                               << 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                    >> 0x17U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (0xfffffffeU & ((8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x82U] 
                                       >> 0x1dU)) | 
                                (2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                       >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                       >> 6U)) | ((0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                      >> 3U)) 
                                                  | (0x10U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                        >> 0xfU)) | 
                             ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                         >> 0xcU)) 
                              | (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                          >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                         << 8U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                         << 0xbU)) 
                              | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                           >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                         >> 1U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                          << 2U)) | 
                              (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                          << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                          >> 0xaU)) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                             >> 7U)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                               >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                           << 0xdU)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                              << 0x10U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                               << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                            << 4U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                              << 7U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                            << 0x1bU)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                               >> 2U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                             << 0x12U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                                << 0x15U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                  << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x67U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                             << 0xfU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                    >> 0x17U)) | (1U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                                     >> 0x14U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U]) 
           | (0xfffffffcU & ((0x10U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                       << 3U)) | (4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                                     >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                       >> 6U)) | ((0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                      >> 3U)) 
                                                  | (0x20U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                        >> 0xfU)) | 
                             ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                         >> 0xcU)) 
                              | (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                           >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                         << 8U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                          << 0xbU)) 
                              | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                           >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                          >> 1U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                          << 2U)) | 
                              (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                          << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                          >> 0xaU)) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                             >> 7U)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                               >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                           << 0xdU)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                              << 0x10U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                            << 4U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                               << 7U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                             << 0x1bU)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                               >> 2U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x68U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                             << 0x12U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                                << 0x15U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                  << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                     >> 0x17U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                            >> 0x11U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U]) 
           | (0xfffffff8U & ((0x20U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                          << 3U)) | 
                                (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                       >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                        >> 6U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                       >> 3U)) 
                                                   | (0x40U 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                        >> 0xfU)) | 
                             ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                         >> 0xcU)) 
                              | (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                           >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                         << 8U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                          << 0xbU)) 
                              | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                            >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                          >> 1U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                           << 2U)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                            << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                           >> 0xaU)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                             >> 7U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                               >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                           << 0xdU)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                              << 0x10U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                            << 4U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                               << 7U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                 << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                             << 0x1bU)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                >> 2U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x69U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                             << 0x15U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                               << 0x18U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                    >> 0xeU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                    >> 0x17U)) | ((4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                                      >> 0x14U)) 
                                                  | (2U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                        >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (0xfffffff0U & ((0x40U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                          << 3U)) | 
                                (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                          >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                        >> 6U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                       >> 3U)) 
                                                   | (0x80U 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                         >> 0xfU)) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                           >> 0xcU)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                             >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                         << 8U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                          << 0xbU)) 
                              | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1bU] 
                                            >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                          >> 1U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                           << 2U)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                             << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3cU] 
                                           >> 0xaU)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                              >> 7U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                               >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                            << 0xdU)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                              << 0x10U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                            << 4U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                               << 7U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                 << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                             << 0x1bU)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5dU] 
                                                >> 2U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                  << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6aU]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                             << 0x18U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                    >> 0xeU)) | (1U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                                    >> 0xbU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                       >> 0x17U)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                     >> 0x14U)) | (4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                      >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU]) 
           | (0xffffffe0U & ((0x80U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                          << 3U)) | 
                                (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7eU] 
                                          >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                        >> 6U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                       >> 3U)) 
                                                   | (0x100U 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                         >> 0xfU)) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                            >> 0xcU)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                             >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                          << 8U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                          << 0xbU)) 
                              | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                            << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                          >> 1U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                           << 2U)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                             << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                           << 0x16U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                              >> 7U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                            << 0xdU)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                               << 0x10U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                             << 4U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                               << 7U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                 << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6bU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                             << 0x1bU)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                                << 0x1eU)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                  << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                     >> 0xeU)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                           >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                       >> 0x17U)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                        >> 0x14U)) 
                              | (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                       >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU]) 
           | (0xffffffc0U & ((0x100U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                          << 3U)) | 
                                (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                          << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                        >> 6U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                       >> 3U)) 
                                                   | (0x200U 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                         >> 0xfU)) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                            >> 0xcU)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                              >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                          << 8U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                           << 0xbU)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                            << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                           >> 1U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                             << 2U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                               << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                           << 0x16U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                              >> 7U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                            << 0xdU)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                               << 0x10U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                 << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                             << 4U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                << 7U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                 << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6cU]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                             << 0x1eU)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                               << 1U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                    >> 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                    >> 0xeU)) | ((4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                                     >> 0xbU)) 
                                                 | (2U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                       >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                       >> 0x17U)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                        >> 0x14U)) 
                              | (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                          >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (0xffffff80U & ((0x200U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                           << 3U)) 
                                | (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                            << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                         >> 6U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                         >> 3U)) | 
                              (0x400U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                         >> 0xfU)) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                            >> 0xcU)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                              >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                          << 8U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                           << 0xbU)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                             << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                           >> 1U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                              << 2U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                               << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                            << 0x16U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                              >> 7U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                            << 0xdU)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                               << 0x10U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                 << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                             << 4U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                << 7U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                  << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6dU]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                             << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                    >> 5U)) | (1U & 
                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                                >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                       >> 0xeU)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                     >> 0xbU)) | (4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                     >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                       >> 0x17U)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                        >> 0x14U)) 
                              | (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                          >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU]) 
           | (0xffffff00U & ((0x400U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                           << 3U)) 
                                | (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                             << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                         >> 6U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                          >> 3U)) | 
                              (0x800U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x17U] 
                                          >> 0xfU)) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                            >> 0xcU)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                              >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                          << 8U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                           << 0xbU)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                             << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                           >> 1U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                              << 2U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                            << 0x16U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x38U] 
                                               >> 7U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                             << 0xdU)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                               << 0x10U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                 << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6eU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                             << 4U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                << 7U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                  << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                     >> 5U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                       >> 2U)) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x59U] 
                                                  >> 0x1fU))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                       >> 0xeU)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                        >> 0xbU)) | 
                              (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                     >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7aU] 
                                        >> 0x17U)) 
                             | ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                          >> 0x14U)) 
                                | (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                            >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU]) 
           | (0xfffffe00U & ((0x800U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                           << 3U)) 
                                | (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                             << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                         >> 6U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                          >> 3U)) | 
                              (0x1000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                          << 0x11U)) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                             >> 0xcU)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                              >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                           << 8U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                             << 0xbU)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                               << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                           >> 1U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                              << 2U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                            << 0x16U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                               << 0x19U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                 >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                             << 0xdU)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                                << 0x10U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                 << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x6fU]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                             << 7U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                               << 0xaU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                    >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                    >> 5U)) | ((4U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                                   >> 2U)) 
                                               | (2U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                     << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                       >> 0xeU)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                        >> 0xbU)) | 
                              (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                        << 9U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                                       >> 0x14U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                         >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (0xfffffc00U & ((0x1000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                           << 3U)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                             << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                         >> 6U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                          >> 3U)) | 
                              (0x2000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                          << 0x11U)) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                             >> 0xcU)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                               >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                           << 8U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                              << 0xbU)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                               << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                            >> 1U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                              << 2U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                            << 0x16U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                               << 0x19U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                 >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                             << 0xdU)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                                << 0x10U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                  << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x70U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                             << 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                    >> 0x1cU)) | (1U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                     >> 0x19U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                       >> 5U)) | ((8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                                      >> 2U)) 
                                                  | (4U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                        << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                       >> 0xeU)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                        >> 0xbU)) | 
                              (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                        << 9U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                                       >> 0x14U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                         >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U]) 
           | (0xfffff800U & ((0x2000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                            << 3U)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                             << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                          >> 6U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                          >> 3U)) | 
                              (0x4000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                          << 0x11U)) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                             >> 0xcU)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                               >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                           << 8U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                              << 0xbU)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                            >> 1U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                               << 2U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                             << 0x16U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                               << 0x19U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                 >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x71U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                             << 0xdU)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                                << 0x10U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                  << 0x13U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                     >> 0x1cU)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                            >> 0x16U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                       >> 5U)) | ((0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                                      >> 2U)) 
                                                  | (8U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                        << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                        >> 0xeU)) | 
                             ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                        >> 0xbU)) | 
                              (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                        >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                        << 9U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                                       >> 0x14U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                                         >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U]) 
           | (0xfffff000U & ((0x4000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                            << 3U)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                              << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                          >> 6U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                           >> 3U)) 
                              | (0x8000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                           << 0x11U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x13U] 
                                             >> 0xcU)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                               >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                           << 8U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                              << 0xbU)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                            >> 1U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                               << 2U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                 << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                             << 0x16U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                                << 0x19U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x34U] 
                                                 >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x72U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                             << 0x10U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                               << 0x13U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                    >> 0x13U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x55U] 
                                    >> 0x1cU)) | ((4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                      >> 0x19U)) 
                                                  | (2U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                       >> 5U)) | ((0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                                      >> 2U)) 
                                                  | (0x10U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                        << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                        >> 0xeU)) | 
                             ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                         >> 0xbU)) 
                              | (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                          >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                         << 9U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x76U] 
                                         >> 0x14U)) 
                              | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                           >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (0xffffe000U & ((0x8000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                            << 3U)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                              << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                          >> 6U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                           >> 3U)) 
                              | (0x10000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                           << 0x11U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                              << 0x14U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                               >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                            << 8U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                              << 0xbU)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                            >> 1U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                               << 2U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                 << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                             << 0x16U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                                << 0x19U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                                  << 0x1cU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x73U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                             << 0x13U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                    >> 0x13U)) | (1U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                                     >> 0x10U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                       << 4U)) | ((8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                      >> 0x19U)) 
                                                  | (4U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                       >> 5U)) | ((0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                                      >> 2U)) 
                                                  | (0x20U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                        << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                        >> 0xeU)) | 
                             ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                         >> 0xbU)) 
                              | (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                           >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                         << 9U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                          << 0xcU)) 
                              | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                           >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U]) 
           | (0xffffc000U & ((0x10000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                            << 3U)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                              << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                          >> 6U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                           >> 3U)) 
                              | (0x20000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                           << 0x11U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                              << 0x14U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                            << 8U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                               << 0xbU)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                             >> 1U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                               << 2U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                 << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x74U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                             << 0x16U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                                << 0x19U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                                  << 0x1cU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                     >> 0x13U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                            >> 0xdU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                       << 4U)) | ((0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                      >> 0x19U)) 
                                                  | (8U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                        >> 5U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                                       >> 2U)) 
                                                   | (0x40U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                        >> 0xeU)) | 
                             ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                         >> 0xbU)) 
                              | (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                           >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                         << 9U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                          << 0xcU)) 
                              | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                            >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U]) 
           | (0xffff8000U & ((0x20000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                             << 3U)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                              << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                           >> 6U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                             >> 3U)) 
                                | (0x40000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                           << 0x11U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                              << 0x14U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                            << 8U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                               << 0xbU)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                 << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                             >> 1U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                << 2U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                 << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x75U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                             << 0x19U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                               << 0x1cU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                    >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                    >> 0x13U)) | ((4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                                      >> 0x10U)) 
                                                  | (2U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                        >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                       << 4U)) | ((0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                      >> 0x19U)) 
                                                  | (0x10U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                        >> 5U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                                       >> 2U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                         >> 0xeU)) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                           >> 0xbU)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                             >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                         << 9U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                          << 0xcU)) 
                              | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                            >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (0xffff0000U & ((0x40000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                             << 3U)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                           >> 6U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                              >> 3U)) 
                                | (0x80000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                            << 0x11U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                              << 0x14U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xfU] 
                                                >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                            << 8U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                               << 0xbU)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                 << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x30U] 
                                             >> 1U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                << 2U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                  << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x76U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                             << 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                    >> 0xaU)) | (1U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                                    >> 7U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                       >> 0x13U)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                     >> 0x10U)) | (4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                                      >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                       << 4U)) | ((0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x51U] 
                                                      >> 0x19U)) 
                                                  | (0x20U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                        >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                        >> 5U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                                       >> 2U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                         >> 0xeU)) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                            >> 0xbU)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                             >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                          << 9U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                          << 0xcU)) 
                              | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x72U] 
                                            >> 0x11U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U]) 
           | (0xfffe0000U & ((0x80000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                             << 3U)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                           >> 6U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                              >> 3U)) 
                                | (0x100000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                            << 0x11U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                               << 0x14U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                                << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                             << 8U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                               << 0xbU)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                 << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x77U]) 
           | (0xe0000000U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                              << 0x1fU) | ((0x40000000U 
                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                               << 2U)) 
                                           | (0x20000000U 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                 << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                     >> 0xaU)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                         >> 4U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                       >> 0x13U)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                        >> 0x10U)) 
                              | (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                       >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                        << 4U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                                       << 7U)) 
                                                   | (0x40U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                        >> 5U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                                       >> 2U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                         >> 0xeU)) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                            >> 0xbU)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                          << 9U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                           << 0xcU)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                            << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U]) 
           | (0xfffc0000U & ((0x100000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                             << 3U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                           >> 6U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                              >> 3U)) 
                                | (0x200000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                            << 0x11U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                               << 0x14U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                             << 8U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                                << 0xbU)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                 << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x78U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                             << 2U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                               << 5U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                    >> 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                    >> 0xaU)) | ((4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                                     >> 7U)) 
                                                 | (2U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                                       >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                       >> 0x13U)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                        >> 0x10U)) 
                              | (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                          >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                        << 4U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                                       << 7U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                         >> 5U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                         >> 2U)) | 
                              (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                         >> 0xeU)) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                            >> 0xbU)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                          << 9U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                           << 0xcU)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                             << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (0xfff80000U & ((0x200000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                              << 3U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                               << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                            >> 6U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                              >> 3U)) 
                                | (0x400000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                            << 0x11U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                               << 0x14U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                             << 8U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                                << 0xbU)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                  << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x79U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                             << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                    >> 1U)) | (1U & 
                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                                >> 0x1eU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                       >> 0xaU)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                     >> 7U)) | (4U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                                   >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                       >> 0x13U)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                        >> 0x10U)) 
                              | (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                          >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                        << 4U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                                       << 7U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                         >> 5U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                          >> 2U)) | 
                              (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                         << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                          >> 0xeU)) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                            >> 0xbU)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                          << 9U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                           << 0xcU)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                             << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU]) 
           | (0xfff00000U & ((0x400000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                              << 3U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xbU] 
                                            >> 6U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                               >> 3U)) 
                                | (0x800000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                             << 0x11U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                               << 0x14U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7aU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                             << 8U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                                << 0xbU)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                  << 0xeU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                     >> 1U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2cU] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                       >> 0x1bU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                       >> 0xaU)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                        >> 7U)) | (8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                        >> 0x13U)) 
                             | ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                          >> 0x10U)) 
                                | (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                            >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                        << 4U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                                       << 7U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4dU] 
                                                         >> 0x16U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                         >> 5U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                          >> 2U)) | 
                              (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6eU] 
                                          >> 0xeU)) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                             >> 0xbU)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                              >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                           << 9U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                             << 0xcU)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                               << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU]) 
           | (0xffe00000U & ((0x800000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                              << 3U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                                            << 0x1aU)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                               >> 3U)) 
                                | (0x1000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                             << 0x11U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                                << 0x14U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                                 << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7bU]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                             << 0xbU)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                               << 0xeU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                    >> 0x18U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                    >> 1U)) | ((4U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                                   << 2U)) 
                                               | (2U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                     >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                       >> 0xaU)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                        >> 7U)) | (0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                        >> 0x13U)) 
                             | ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                           >> 0x10U)) 
                                | (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                            >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                         << 4U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                         << 7U)) | 
                              (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                         << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                         >> 5U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                          >> 2U)) | 
                              (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                          << 0x12U)) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                             >> 0xbU)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                           << 9U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                              << 0xcU)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                               << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (0xffc00000U & ((0x1000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                              << 3U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                                            << 0x1aU)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                               >> 3U)) 
                                | (0x2000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                             << 0x11U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                                << 0x14U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                                  << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7cU]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                             << 0xeU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                    >> 0x18U)) | (1U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                                     >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                       >> 1U)) | ((8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                                      << 2U)) 
                                                  | (4U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                        >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                       >> 0xaU)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                        >> 7U)) | (0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                        >> 0x13U)) 
                             | ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                           >> 0x10U)) 
                                | (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                         << 4U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                          << 7U)) | 
                              (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                         << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                          >> 5U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                          >> 2U)) | 
                              (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                          << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                          << 0x12U)) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                             >> 0xbU)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                           << 9U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                              << 0xcU)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU]) 
           | (0xff800000U & ((0x2000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                               << 3U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                                << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                                             << 0x1aU)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                               >> 3U)) 
                                | (0x4000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7dU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                             << 0x11U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                                << 0x14U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                                  << 0x17U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                     >> 0x18U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                            >> 0x12U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                       >> 1U)) | ((0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                                      << 2U)) 
                                                  | (8U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                        >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                        >> 0xaU)) | 
                             ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                        >> 7U)) | (0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                                      >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                        >> 0x13U)) 
                             | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                           >> 0x10U)) 
                                | (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                         << 4U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                          << 7U)) | 
                              (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                          << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                          >> 5U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                           >> 2U)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                            << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                           << 0x12U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                             >> 0xbU)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                           << 9U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                              << 0xcU)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU]) 
           | (0xff000000U & ((0x4000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                               << 3U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                                             << 0x1aU)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[7U] 
                                                >> 3U)) 
                                | (0x8000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7eU]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                             << 0x14U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                               << 0x17U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                    >> 0xfU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                    >> 0x18U)) | ((4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                                      >> 0x15U)) 
                                                  | (2U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                        >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                       >> 1U)) | ((0x20U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                                      << 2U)) 
                                                  | (0x10U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x28U] 
                                                        >> 0x1bU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                        >> 0xaU)) | 
                             ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                         >> 7U)) | 
                              (0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                        >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x49U] 
                                         >> 0x13U)) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                           >> 0x10U)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                         << 4U)) | 
                             ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                          << 7U)) | 
                              (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                          << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                          >> 5U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                           >> 2U)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                             << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                           << 0x12U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6aU] 
                                              >> 0xbU)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                               >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                            << 9U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                              << 0xcU)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (0xfe000000U & ((0x8000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                               << 3U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                                             << 0x1aU)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[8U] 
                                                << 0x1dU)) 
                                | (0x10000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x7fU]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                             << 0x17U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                    >> 0xfU)) | (1U 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                                    >> 0xcU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                       >> 0x18U)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                     >> 0x15U)) | (4U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                      >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                       >> 1U)) | ((0x40U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                                      << 2U)) 
                                                  | (0x20U 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x29U] 
                                                        << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                        >> 0xaU)) | 
                             ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                         >> 7U)) | 
                              (0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                         >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4aU] 
                                         << 0xdU)) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                            >> 0x10U)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                             >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                          << 4U)) | 
                             ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                          << 7U)) | 
                              (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                          << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                          >> 5U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                           >> 2U)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                             << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                           << 0x12U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6bU] 
                                              << 0x15U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                            << 9U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                               << 0xcU)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                                << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U]) 
           | (0xfc000000U & ((0x10000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                               << 3U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x80U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                                             << 0x1aU)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[8U] 
                                                << 0x1dU)) 
                                | (0x20000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                     >> 0xfU)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                           >> 9U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                       >> 0x18U)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                        >> 0x15U)) 
                              | (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                       >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                        >> 1U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                                       << 2U)) 
                                                   | (0x40U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x29U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                        >> 0xaU)) | 
                             ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                         >> 7U)) | 
                              (0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                         >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4aU] 
                                         << 0xdU)) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                            >> 0x10U)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                          << 4U)) | 
                             ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                           << 7U)) 
                              | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                            << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                           >> 5U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                             >> 2U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                               << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                           << 0x12U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6bU] 
                                              << 0x15U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                            << 9U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                               << 0xcU)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U]) 
           | (0xf8000000U & ((0x20000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                                << 3U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                                 << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x81U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[8U] 
                                             << 0x1dU)) 
                             | (0x40000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                    >> 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                    >> 0xfU)) | ((4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                                     >> 0xcU)) 
                                                 | (2U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                                       >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                       >> 0x18U)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                        >> 0x15U)) 
                              | (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                          >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                        >> 1U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                                       << 2U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x29U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                         >> 0xaU)) 
                             | ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                           >> 7U)) 
                                | (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                             >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4aU] 
                                         << 0xdU)) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                            >> 0x10U)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                          << 4U)) | 
                             ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                           << 7U)) 
                              | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                             << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                           >> 5U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                              >> 2U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                               << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                            << 0x12U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6bU] 
                                              << 0x15U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                            << 9U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                               << 0xcU)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (0xf0000000U & ((0x40000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                                << 3U)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                                  << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x82U]) 
           | (0x80000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[3U]));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U]) 
           | (0x7fffffffU & ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                                    >> 6U)) | (1U & 
                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[8U] 
                                                >> 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                       >> 0xfU)) | 
                             ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                     >> 0xcU)) | (4U 
                                                  & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                                     >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x24U] 
                                       >> 0x18U)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                        >> 0x15U)) 
                              | (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                          >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                        >> 1U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                                       << 2U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x29U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                         >> 0xaU)) 
                             | ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                            >> 7U)) 
                                | (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                             >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4aU] 
                                          << 0xdU)) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x45U] 
                                            >> 0x10U)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                          << 4U)) | 
                             ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                           << 7U)) 
                              | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                             << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                           >> 5U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                              >> 2U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                            << 0x12U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6bU] 
                                               << 0x15U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x66U] 
                                                >> 8U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                             << 9U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                               << 0xcU)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x83U]) 
           | (0xe0000000U & ((0x80000000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x87U]) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                                << 3U)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                                  << 6U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U]) 
           | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                     >> 6U)) | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[8U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[4U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                       >> 0xfU)) | 
                             ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                        >> 0xcU)) | 
                              (8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                     >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x25U] 
                                        << 8U)) | (
                                                   (0x80U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                                       >> 0x15U)) 
                                                   | (0x40U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                        >> 1U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                                       << 2U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x29U] 
                                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                         >> 0xaU)) 
                             | ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                            >> 7U)) 
                                | (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4aU] 
                                          << 0xdU)) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x46U] 
                                             << 0x10U)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                              >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                           << 4U)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                             << 7U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                               << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                           >> 5U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                              >> 2U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                            << 0x12U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6bU] 
                                               << 0x15U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x67U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                             << 9U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                                << 0xcU)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                                 << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x84U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                             << 3U)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                               << 6U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x88U]));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0xfffffff1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (0xfffffffeU & ((8U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                                    >> 6U)) | ((4U 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[8U] 
                                                   >> 3U)) 
                                               | (2U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[4U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0xffffff8fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                       >> 0xfU)) | 
                             ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                        >> 0xcU)) | 
                              (0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0xfffffc7fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x25U] 
                                        << 8U)) | (
                                                   (0x100U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                                       >> 0x15U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0xffffe3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                         >> 1U)) | 
                             ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                         << 2U)) | 
                              (0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x29U] 
                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0xffff1fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                         >> 0xaU)) 
                             | ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                            >> 7U)) 
                                | (0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0xfff8ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4aU] 
                                          << 0xdU)) 
                             | ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x46U] 
                                             << 0x10U)) 
                                | (0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                               >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0xffc7ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                           << 4U)) 
                             | ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                              << 7U)) 
                                | (0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                               << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0xfe3fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                            >> 5U)) 
                             | ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                              >> 2U)) 
                                | (0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0xf1ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                            << 0x12U)) 
                             | ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6bU] 
                                               << 0x15U)) 
                                | (0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x67U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0x8fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                             << 9U)) 
                             | ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                                << 0xcU)) 
                                | (0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                                  << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U] 
        = ((0x7fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x85U]) 
           | (0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                             << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U] 
        = ((0xfffffffcU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U]) 
           | (0x7fffffffU & ((2U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x88U]) 
                             | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                      >> 0x1dU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U] 
        = ((0xffffffe3U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                                       >> 6U)) | ((8U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[8U] 
                                                      >> 3U)) 
                                                  | (4U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[4U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U] 
        = ((0xffffff1fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                       >> 0xfU)) | 
                             ((0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                        >> 0xcU)) | 
                              (0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U] 
        = ((0xfffff8ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x25U] 
                                        << 8U)) | (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                                       >> 0x15U)) 
                                                   | (0x100U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U] 
        = ((0xffffc7ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                         >> 1U)) | 
                             ((0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                          << 2U)) | 
                              (0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x29U] 
                                         << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U] 
        = ((0xfffe3fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                          >> 0xaU)) 
                             | ((0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                            >> 7U)) 
                                | (0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U] 
        = ((0xfff1ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4aU] 
                                          << 0xdU)) 
                             | ((0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x46U] 
                                             << 0x10U)) 
                                | (0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                               >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U] 
        = ((0xff8fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                           << 4U)) 
                             | ((0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                              << 7U)) 
                                | (0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                                << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U] 
        = ((0xfc7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                            >> 5U)) 
                             | ((0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                               >> 2U)) 
                                | (0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U] 
        = ((0xe3ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                             << 0x12U)) 
                             | ((0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6bU] 
                                               << 0x15U)) 
                                | (0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x67U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U] 
        = ((0x1fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x86U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                                             << 9U)) 
                             | ((0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                                << 0xcU)) 
                                | (0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                                  << 0xfU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U] 
        = ((0xfffffff8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U]) 
           | ((4U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x88U]) 
              | ((2U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                        >> 0x1dU)) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                            >> 0x1aU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U] 
        = ((0xffffffc7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0xcU] 
                                       >> 6U)) | ((0x10U 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[8U] 
                                                      >> 3U)) 
                                                  | (8U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[4U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U] 
        = ((0xfffffe3fU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x18U] 
                                        >> 0xfU)) | 
                             ((0x80U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x14U] 
                                        >> 0xcU)) | 
                              (0x40U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x10U] 
                                        >> 9U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U] 
        = ((0xfffff1ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x25U] 
                                        << 8U)) | (
                                                   (0x400U 
                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x20U] 
                                                       >> 0x15U)) 
                                                   | (0x200U 
                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x1cU] 
                                                         >> 0x12U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U] 
        = ((0xffff8fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x31U] 
                                         >> 1U)) | 
                             ((0x2000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x2dU] 
                                          << 2U)) | 
                              (0x1000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x29U] 
                                          << 5U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U] 
        = ((0xfffc7fffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x3dU] 
                                          >> 0xaU)) 
                             | ((0x10000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x39U] 
                                             >> 7U)) 
                                | (0x8000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x35U] 
                                              >> 4U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U] 
        = ((0xffe3ffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4aU] 
                                           << 0xdU)) 
                             | ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x46U] 
                                             << 0x10U)) 
                                | (0x40000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x41U] 
                                               >> 0xdU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U] 
        = ((0xff1fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x56U] 
                                           << 4U)) 
                             | ((0x400000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x52U] 
                                              << 7U)) 
                                | (0x200000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x4eU] 
                                                << 0xaU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U] 
        = ((0xf8ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x62U] 
                                            >> 5U)) 
                             | ((0x2000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5eU] 
                                               >> 2U)) 
                                | (0x1000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x5aU] 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U] 
        = ((0xc7ffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6fU] 
                                             << 0x12U)) 
                             | ((0x10000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x6bU] 
                                                << 0x15U)) 
                                | (0x8000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x67U] 
                                                 << 0x18U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U] 
        = ((0x3fffffffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x87U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x77U] 
                                             << 0xcU)) 
                             | (0x40000000U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x73U] 
                                               << 0xfU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x88U] 
        = ((0xeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x88U]) 
           | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7bU] 
                    >> 0x17U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x88U] 
        = ((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc_i[0x88U]) 
           | (0xeU & ((8U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x88U]) 
                      | ((4U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x83U] 
                                >> 0x1dU)) | (2U & 
                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_mul[0x7fU] 
                                               >> 0x1aU))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_c 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_c 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_c 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_c 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_c 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0280__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[0U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[0U]) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l8_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l8_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l8_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l8_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l8_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[0U] 
        = ((0xfffffffeU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[0U]) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__w0__DOT__l8_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0280__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0280__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0280__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0280__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0280__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0280__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0280__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0281__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[0U] 
        = ((0xfffffffdU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[0U]) 
           | (2U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l8_add))) 
                      << 1U) | (0xfffffffeU & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l8_add) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l8_add) 
                                                  << 1U)))) 
                    | (0x7ffffffeU & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l8_add) 
                                       >> 1U) & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l8_add) 
                                                 << 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[0U] 
        = ((0xfffffffdU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[0U]) 
           | (2U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__1__KET____DOT__w1__DOT__l8_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0281__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c)) 
           | (0x20U & ((((0x30000U == (0x30000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                         | (0x18000U == (0x18000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                        | (0x28000U == (0x28000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                       << 5U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s)) 
           | (0x40U & (VL_REDXOR_32((0x1c0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c 
        = ((0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c)) 
           | (0x40U & ((((0x180000U == (0x180000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add)) 
                         | (0xc0000U == (0xc0000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                        | (0x140000U == (0x140000U 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_add))) 
                       << 6U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_s) 
            << 8U) | (0xffU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0281__029 
                               >> 0xaU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_s 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_c 
        = ((0x1eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_s 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_c 
        = ((0x1dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_s 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_c 
        = ((0x1bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_s 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_c 
        = ((0x17U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_c)) 
           | (8U & ((((0xc00U == (0xc00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add))) 
                      | (0x600U == (0x600U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add)))) 
                     | (0xa00U == (0xa00U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add)))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_s 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_c 
        = ((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add))) 
                         | (0x3000U == (0x3000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add)))) 
                        | (0x5000U == (0x5000U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_add)))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_s) 
            << 4U) | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0281__029 
                              >> 0x12U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_s 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_c 
        = ((6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_s 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_c 
        = ((5U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_s 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_c 
        = ((3U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_c)) 
           | (4U & ((((0x180U == (0x180U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add))) 
                      | (0xc0U == (0xc0U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add)))) 
                     | (0x140U == (0x140U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_add)))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_s) 
            << 3U) | (7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0281__029 
                            >> 0x16U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_s 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_s)) 
           | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_c 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_c)) 
           | (1U & (((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_add))) 
                     | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_add) 
                         >> 1U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_add))) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_add) 
                        >> 2U) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_add)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_s 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_s)) 
           | (2U & (VL_REDXOR_32((0x38U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_c 
        = ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_c)) 
           | (2U & ((((0x30U == (0x30U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_add))) 
                      | (0x18U == (0x18U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_add)))) 
                     | (0x28U == (0x28U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_add)))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l6_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_s) 
            << 1U) | (1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0281__029 
                            >> 0x19U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l7_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l6_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0281__029 
                                   >> 0x1aU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l8_add 
        = ((4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l7_add))) 
                  << 2U)) | (3U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0281__029 
                                   >> 0x1cU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0282__029 
        = ((0x20000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l7_add))) 
                             << 0x1dU) | (0xe0000000U 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1cU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU)))) 
                           | (0xe0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l7_add) 
                                              << 0x1bU) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l7_add) 
                                                << 0x1dU))))) 
           | ((0x10000000U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l6_add))) 
                                << 0x1cU) | (0xf0000000U 
                                             & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU)))) 
                              | (0xf0000000U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l6_add) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l6_add) 
                                                   << 0x1cU))))) 
              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l5_c) 
                  << 0x1aU) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l4_c) 
                                << 0x17U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l3_c) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l2_c) 
                                                 << 0xbU) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l1_c)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[0U] 
        = ((0xfffffffbU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op2[0U]) 
           | (4U & ((((6U == (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l8_add))) 
                      << 2U) | (0xfffffffcU & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l8_add) 
                                                << 1U) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l8_add) 
                                                  << 2U)))) 
                    | (0xfffffffcU & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l8_add) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l8_add) 
                                         << 2U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[0U] 
        = ((0xfffffffbU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__add_op1[0U]) 
           | (4U & (VL_REDXOR_32((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__2__KET____DOT__w1__DOT__l8_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l1_s) 
            << 0xaU) | (0x3ffU & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__c_mid__0282__029));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s)) 
           | (1U & VL_REDXOR_32((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_c 
        = ((0x7eU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_c)) 
           | (1U & (((6U == (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add)) 
                     | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add 
                         >> 1U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add)) 
                    | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add 
                        >> 2U) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s)) 
           | (2U & (VL_REDXOR_32((0x38U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add)) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_c 
        = ((0x7dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_c)) 
           | (2U & ((((0x30U == (0x30U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add)) 
                      | (0x18U == (0x18U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add))) 
                     | (0x28U == (0x28U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add))) 
                    << 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s)) 
           | (4U & (VL_REDXOR_32((0x1c0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add)) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_c 
        = ((0x7bU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_c)) 
           | (4U & ((((0x180U == (0x180U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add)) 
                      | (0xc0U == (0xc0U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add))) 
                     | (0x140U == (0x140U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add))) 
                    << 2U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s)) 
           | (8U & (VL_REDXOR_32((0xe00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add)) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_c 
        = ((0x77U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_c)) 
           | (8U & ((((0xc00U == (0xc00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add)) 
                      | (0x600U == (0x600U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add))) 
                     | (0xa00U == (0xa00U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add))) 
                    << 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s)) 
           | (0x10U & (VL_REDXOR_32((0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add)) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_c 
        = ((0x6fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_c)) 
           | (0x10U & ((((0x6000U == (0x6000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add)) 
                         | (0x3000U == (0x3000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add))) 
                        | (0x5000U == (0x5000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add))) 
                       << 4U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s 
        = ((0x5fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_s)) 
           | (0x20U & (VL_REDXOR_32((0x38000U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__3__KET____DOT__w1__DOT__l2_add)) 
                       << 5U)));
}
