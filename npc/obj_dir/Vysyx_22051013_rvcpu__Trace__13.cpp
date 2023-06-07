// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051013_rvcpu__Syms.h"


void Vysyx_22051013_rvcpu___024root__traceChgSub13(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp4751;
    VlWide<4>/*127:0*/ __Vtemp4764;
    VlWide<4>/*127:0*/ __Vtemp4768;
    VlWide<4>/*127:0*/ __Vtemp4785;
    VlWide<4>/*127:0*/ __Vtemp4822;
    VlWide<4>/*127:0*/ __Vtemp4833;
    VlWide<4>/*127:0*/ __Vtemp4870;
    VlWide<4>/*127:0*/ __Vtemp4871;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 26552);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                          >> 3U))));
            tracep->chgCData(oldp+1,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))),3);
            tracep->chgBit(oldp+2,((1U & (((0x180U 
                                            == (0x180U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                                           | (0xc0U 
                                              == (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                                          | (0x140U 
                                             == (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+3,((1U & VL_REDXOR_32(
                                                      (0x1c0U 
                                                       & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+4,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                          >> 8U))));
            tracep->chgBit(oldp+5,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                          >> 7U))));
            tracep->chgBit(oldp+6,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                          >> 6U))));
            tracep->chgCData(oldp+7,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))),3);
            tracep->chgBit(oldp+8,((1U & (((0xc00U 
                                            == (0xc00U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                                           | (0x600U 
                                              == (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                                          | (0xa00U 
                                             == (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+9,((1U & VL_REDXOR_32(
                                                      (0xe00U 
                                                       & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+10,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
            tracep->chgBit(oldp+11,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
            tracep->chgBit(oldp+12,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
            tracep->chgCData(oldp+13,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+14,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+15,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+16,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
            tracep->chgBit(oldp+17,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 0xdU))));
            tracep->chgBit(oldp+18,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 0xcU))));
            tracep->chgCData(oldp+19,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))),3);
            tracep->chgBit(oldp+20,((1U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28000U 
                                              == (0x28000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+21,((1U & VL_REDXOR_32(
                                                       (0x38000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+22,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 0x11U))));
            tracep->chgBit(oldp+23,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 0x10U))));
            tracep->chgBit(oldp+24,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 0xfU))));
            tracep->chgCData(oldp+25,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
            tracep->chgBit(oldp+26,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+27,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+28,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
            tracep->chgBit(oldp+29,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
            tracep->chgBit(oldp+30,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
            tracep->chgCData(oldp+31,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+32,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+33,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+34,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
            tracep->chgBit(oldp+35,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
            tracep->chgBit(oldp+36,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+37,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
            tracep->chgBit(oldp+38,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+39,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+40,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 5U))));
            tracep->chgBit(oldp+41,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 4U))));
            tracep->chgBit(oldp+42,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 3U))));
            tracep->chgCData(oldp+43,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))),3);
            tracep->chgBit(oldp+44,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+45,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+46,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 8U))));
            tracep->chgBit(oldp+47,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 7U))));
            tracep->chgBit(oldp+48,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 6U))));
            tracep->chgCData(oldp+49,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))),3);
            tracep->chgBit(oldp+50,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+51,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+52,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xbU))));
            tracep->chgBit(oldp+53,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xaU))));
            tracep->chgBit(oldp+54,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 9U))));
            tracep->chgCData(oldp+55,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+56,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+57,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+58,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xeU))));
            tracep->chgBit(oldp+59,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xdU))));
            tracep->chgBit(oldp+60,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xcU))));
            tracep->chgCData(oldp+61,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+62,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+63,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+64,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
            tracep->chgBit(oldp+65,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
            tracep->chgBit(oldp+66,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+67,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
            tracep->chgBit(oldp+68,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+69,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+70,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
            tracep->chgBit(oldp+71,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
            tracep->chgBit(oldp+72,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
            tracep->chgCData(oldp+73,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
            tracep->chgBit(oldp+74,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+75,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+76,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
            tracep->chgBit(oldp+77,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
            tracep->chgBit(oldp+78,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__124__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
            tracep->chgQData(oldp+79,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U])) 
                                           << 3U) | 
                                          ((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U])) 
                                           >> 0x1dU)))),33);
            tracep->chgBit(oldp+81,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+82,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+83,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+84,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+85,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+86,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+87,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+88,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+89,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+90,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+91,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+92,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+93,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+94,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+95,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+96,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+97,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+98,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+99,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+100,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+101,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+102,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+103,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+104,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+105,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+106,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+107,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+108,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+109,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+110,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+111,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+112,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+113,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+114,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+115,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+116,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+117,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+118,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+119,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+120,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+121,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+122,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+123,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+124,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+125,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+126,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+127,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+128,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+129,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+130,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x80U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+131,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U])),3);
            tracep->chgBit(oldp+132,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U])) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U])))));
            tracep->chgBit(oldp+133,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U]))));
            tracep->chgBit(oldp+134,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 2U))));
            tracep->chgBit(oldp+135,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 1U))));
            tracep->chgBit(oldp+136,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U])));
            tracep->chgCData(oldp+137,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+138,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+139,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 3U)))));
            tracep->chgBit(oldp+140,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 5U))));
            tracep->chgBit(oldp+141,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 4U))));
            tracep->chgBit(oldp+142,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 3U))));
            tracep->chgCData(oldp+143,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+144,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+145,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+146,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 8U))));
            tracep->chgBit(oldp+147,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 7U))));
            tracep->chgBit(oldp+148,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 6U))));
            tracep->chgCData(oldp+149,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+150,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0xaU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 9U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 9U))))));
            tracep->chgBit(oldp+151,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0xbU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0xaU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 9U)))));
            tracep->chgBit(oldp+152,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+153,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+154,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 9U))));
            tracep->chgCData(oldp+155,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+156,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+157,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+158,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+159,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+160,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+161,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+162,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x10U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0xfU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 0xfU))))));
            tracep->chgBit(oldp+163,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0x11U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0x10U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0xfU)))));
            tracep->chgBit(oldp+164,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+165,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+166,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+167,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+168,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+169,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+170,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+171,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+172,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+173,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0x15U))),3);
            tracep->chgBit(oldp+174,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x16U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0x15U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+175,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0x17U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0x16U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+176,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+177,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+178,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+179,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+180,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+181,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+182,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+183,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+184,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+185,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+186,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+187,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+188,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+189,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+190,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+191,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+192,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+193,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+194,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+195,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+196,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+197,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+198,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+199,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+200,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+201,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+202,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+203,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+204,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+205,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+206,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+207,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+208,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+209,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+210,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+211,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+212,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+213,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+214,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+215,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+216,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+217,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+218,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+219,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+220,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+221,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+222,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+223,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+224,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+225,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+226,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+227,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+228,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+229,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+230,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+231,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+232,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+233,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+234,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+235,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+236,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+237,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+238,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+239,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+240,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+241,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+242,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+243,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+244,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+245,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+246,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+247,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+248,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+249,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+250,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+251,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+252,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+253,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+254,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+255,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+256,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+257,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+258,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+259,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+260,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+261,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+262,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+263,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+264,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+265,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+266,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+268,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+269,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+270,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+271,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+272,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+273,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+274,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+275,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+276,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+277,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+278,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+279,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+280,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__125__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+281,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U])) 
                                              >> 0x1eU)))),33);
            tracep->chgBit(oldp+283,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+284,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+285,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+286,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+287,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+288,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+289,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+290,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+291,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+292,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+293,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+294,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+295,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+296,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+297,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+298,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+299,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+300,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+301,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+302,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+303,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+304,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+305,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+306,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+307,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+308,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+309,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+310,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+311,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+312,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+313,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+314,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+315,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+316,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+317,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+318,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+319,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+320,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+321,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+322,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+323,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+324,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+325,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+326,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+327,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+328,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+329,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+330,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U])));
            tracep->chgBit(oldp+331,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+332,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x81U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+333,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+334,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+335,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 1U)))));
            tracep->chgBit(oldp+336,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 3U))));
            tracep->chgBit(oldp+337,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 2U))));
            tracep->chgBit(oldp+338,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 1U))));
            tracep->chgCData(oldp+339,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+340,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+341,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+342,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 6U))));
            tracep->chgBit(oldp+343,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 5U))));
            tracep->chgBit(oldp+344,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 4U))));
            tracep->chgCData(oldp+345,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 7U))),3);
            tracep->chgBit(oldp+346,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 8U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 7U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 7U))))));
            tracep->chgBit(oldp+347,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 9U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 8U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 7U)))));
            tracep->chgBit(oldp+348,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 9U))));
            tracep->chgBit(oldp+349,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 8U))));
            tracep->chgBit(oldp+350,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 7U))));
            tracep->chgCData(oldp+351,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+352,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+353,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+354,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+355,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+356,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+357,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0xdU))),3);
            tracep->chgBit(oldp+358,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0xeU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0xdU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 0xdU))))));
            tracep->chgBit(oldp+359,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0xfU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0xeU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0xdU)))));
            tracep->chgBit(oldp+360,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+361,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+362,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+363,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+364,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+365,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+366,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+367,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+368,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+369,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0x13U))),3);
            tracep->chgBit(oldp+370,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0x14U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0x13U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 0x13U))))));
            tracep->chgBit(oldp+371,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0x15U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0x14U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0x13U)))));
            tracep->chgBit(oldp+372,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+373,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+374,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+375,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+376,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+377,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+378,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+379,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+380,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+381,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+382,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0x1aU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0x19U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+383,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0x1bU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0x1aU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+384,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+385,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+386,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+387,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+388,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+389,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+390,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+391,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+392,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+393,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+394,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+395,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+396,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+397,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+398,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+399,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+400,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+401,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+402,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+403,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+404,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+405,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+406,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+407,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+408,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+409,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+410,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+411,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+412,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+413,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+414,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+415,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+416,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+417,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+418,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+419,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+420,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+421,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+422,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+423,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+424,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+425,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+426,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+427,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+428,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+429,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+430,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+431,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+432,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+433,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+434,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+435,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+436,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+437,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+438,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+439,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+440,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+441,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+442,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+443,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+444,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+445,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+446,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+447,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+448,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+449,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+450,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+451,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+452,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+453,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+454,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+455,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+456,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+457,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+458,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+459,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+460,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+461,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+462,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+463,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+464,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+465,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+466,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+467,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+468,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+469,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+470,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+471,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+472,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+473,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+474,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+475,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+476,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+477,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+478,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+479,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+480,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+481,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+482,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__126__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+483,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U])) 
                                            << 1U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U])) 
                                              >> 0x1fU)))),33);
            tracep->chgBit(oldp+485,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+486,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+487,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+488,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+489,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+490,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+491,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+492,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+493,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+494,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+495,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+496,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+497,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+498,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+499,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+500,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+501,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+502,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+503,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+504,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+505,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+506,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+507,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+508,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+509,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+510,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+511,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+512,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+513,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+514,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+515,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+516,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+517,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+518,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+519,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+520,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+521,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+522,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+523,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+524,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+525,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+526,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+527,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+528,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+529,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+530,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U]) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+531,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U]) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+532,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 1U))));
            tracep->chgBit(oldp+533,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U])));
            tracep->chgBit(oldp+534,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x82U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+535,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+536,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+537,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+538,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 4U))));
            tracep->chgBit(oldp+539,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 3U))));
            tracep->chgBit(oldp+540,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 2U))));
            tracep->chgCData(oldp+541,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 5U))),3);
            tracep->chgBit(oldp+542,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 6U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 5U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 5U))))));
            tracep->chgBit(oldp+543,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 7U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 6U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 5U)))));
            tracep->chgBit(oldp+544,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 7U))));
            tracep->chgBit(oldp+545,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 6U))));
            tracep->chgBit(oldp+546,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 5U))));
            tracep->chgCData(oldp+547,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+548,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+549,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+550,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+551,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 9U))));
            tracep->chgBit(oldp+552,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 8U))));
            tracep->chgCData(oldp+553,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0xbU))),3);
            tracep->chgBit(oldp+554,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0xcU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0xbU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+555,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0xdU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0xcU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0xbU)))));
            tracep->chgBit(oldp+556,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+557,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+558,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+559,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+560,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+561,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+562,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+563,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+564,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+565,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+566,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0x12U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0x11U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 0x11U))))));
            tracep->chgBit(oldp+567,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0x13U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0x12U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0x11U)))));
            tracep->chgBit(oldp+568,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+569,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+570,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+571,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+572,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+573,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+574,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+575,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+576,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+577,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+578,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+579,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+580,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+581,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+582,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+583,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+584,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+585,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+586,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+587,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+588,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+589,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+590,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+591,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+592,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+593,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+594,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x83U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+595,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+596,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+597,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+598,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+599,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+600,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+601,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+602,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+603,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+604,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+605,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+606,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+607,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+608,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+609,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+610,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+611,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+612,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+613,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+614,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+615,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+616,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+617,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+618,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+619,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+620,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+621,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+622,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+623,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+624,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+625,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+626,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+627,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+628,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+629,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+630,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+631,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+632,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+633,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+634,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+635,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+636,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+637,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+638,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+639,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+640,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+641,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+642,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+643,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+644,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+645,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+646,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+647,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+648,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+649,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+650,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+651,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+652,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+653,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+654,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+655,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+656,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+657,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+658,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+659,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+660,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+661,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+662,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+663,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+664,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+665,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+666,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+667,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+668,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+669,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+670,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+671,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+672,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+673,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+674,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+675,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+676,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+677,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+678,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+679,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+680,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+681,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+682,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+683,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+684,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__127__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+685,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U]))))),33);
            tracep->chgBit(oldp+687,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+688,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+689,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+690,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+691,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+692,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+693,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+694,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+695,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+696,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+697,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+698,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+699,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+700,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+701,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+702,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+703,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+704,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+705,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+706,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+707,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+708,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+709,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+710,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+711,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+712,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+713,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+714,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+715,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+716,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+717,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+718,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+719,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+720,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+721,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+722,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+723,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+724,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+725,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+726,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+727,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+728,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+729,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+730,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+731,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U])),3);
            tracep->chgBit(oldp+732,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U])) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U])))));
            tracep->chgBit(oldp+733,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U]))));
            tracep->chgBit(oldp+734,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 2U))));
            tracep->chgBit(oldp+735,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 1U))));
            tracep->chgBit(oldp+736,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U])));
            tracep->chgCData(oldp+737,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+738,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+739,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 3U)))));
            tracep->chgBit(oldp+740,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 5U))));
            tracep->chgBit(oldp+741,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 4U))));
            tracep->chgBit(oldp+742,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 3U))));
            tracep->chgCData(oldp+743,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+744,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+745,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+746,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 8U))));
            tracep->chgBit(oldp+747,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 7U))));
            tracep->chgBit(oldp+748,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 6U))));
            tracep->chgCData(oldp+749,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+750,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0xaU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 9U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 9U))))));
            tracep->chgBit(oldp+751,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0xbU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0xaU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 9U)))));
            tracep->chgBit(oldp+752,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+753,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+754,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 9U))));
            tracep->chgCData(oldp+755,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+756,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+757,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+758,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+759,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+760,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+761,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+762,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x10U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0xfU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0xfU))))));
            tracep->chgBit(oldp+763,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0x11U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x10U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0xfU)))));
            tracep->chgBit(oldp+764,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+765,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+766,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+767,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+768,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+769,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+770,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+771,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+772,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+773,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0x15U))),3);
            tracep->chgBit(oldp+774,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x16U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0x15U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+775,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0x17U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x16U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+776,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+777,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+778,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+779,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+780,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+781,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+782,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+783,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+784,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+785,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+786,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+787,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+788,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+789,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+790,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+791,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+792,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+793,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+794,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U])));
            tracep->chgBit(oldp+795,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+796,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x84U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+797,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+798,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+799,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+800,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+801,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+802,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+803,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+804,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+805,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+806,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+807,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+808,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+809,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+810,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+811,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+812,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+813,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+814,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+815,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+816,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+817,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+818,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+819,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+820,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+821,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+822,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+823,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+824,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+825,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+826,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+827,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+828,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+829,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+830,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+831,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+832,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+833,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+834,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+835,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+836,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+837,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+838,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+839,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+840,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+841,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+842,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+843,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+844,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+845,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+846,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+847,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+848,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+849,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+850,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+851,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+852,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+853,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+854,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+855,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+856,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+857,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+858,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+859,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+860,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+861,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+862,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+863,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+864,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+865,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+866,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+867,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+868,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+869,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+870,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+871,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+872,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+873,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+874,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+875,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+876,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+877,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+878,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+879,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+880,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+881,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+882,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+883,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+884,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+885,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+886,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__128__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+887,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U])) 
                                              >> 1U)))),33);
            tracep->chgBit(oldp+889,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+890,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+891,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+892,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+893,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+894,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+895,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+896,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+897,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+898,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+899,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+900,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+901,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+902,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+903,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+904,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+905,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+906,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+907,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+908,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+909,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+910,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+911,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+912,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+913,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+914,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+915,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+916,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+917,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+918,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+919,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+920,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+921,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+922,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+923,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+924,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+925,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+926,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+927,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+928,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+929,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+930,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+931,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+932,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+933,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+934,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+935,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 1U)))));
            tracep->chgBit(oldp+936,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 3U))));
            tracep->chgBit(oldp+937,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 2U))));
            tracep->chgBit(oldp+938,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 1U))));
            tracep->chgCData(oldp+939,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+940,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+941,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+942,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 6U))));
            tracep->chgBit(oldp+943,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 5U))));
            tracep->chgBit(oldp+944,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 4U))));
            tracep->chgCData(oldp+945,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 7U))),3);
            tracep->chgBit(oldp+946,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 8U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 7U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 7U))))));
            tracep->chgBit(oldp+947,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 9U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 8U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 7U)))));
            tracep->chgBit(oldp+948,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 9U))));
            tracep->chgBit(oldp+949,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 8U))));
            tracep->chgBit(oldp+950,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 7U))));
            tracep->chgCData(oldp+951,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+952,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+953,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+954,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+955,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+956,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+957,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0xdU))),3);
            tracep->chgBit(oldp+958,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0xeU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0xdU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0xdU))))));
            tracep->chgBit(oldp+959,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0xfU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0xeU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0xdU)))));
            tracep->chgBit(oldp+960,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+961,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+962,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+963,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+964,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+965,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+966,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+967,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+968,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+969,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0x13U))),3);
            tracep->chgBit(oldp+970,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x14U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0x13U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0x13U))))));
            tracep->chgBit(oldp+971,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0x15U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0x14U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0x13U)))));
            tracep->chgBit(oldp+972,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+973,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+974,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+975,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+976,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+977,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+978,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+979,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+980,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+981,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+982,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x1aU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0x19U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+983,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0x1bU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0x1aU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+984,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+985,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+986,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+987,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+988,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+989,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+990,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+991,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+992,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+993,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+994,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U]) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+995,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U]) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+996,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                            >> 1U))));
            tracep->chgBit(oldp+997,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U])));
            tracep->chgBit(oldp+998,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x85U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+999,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1000,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1001,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1002,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1003,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1004,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1005,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1006,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1007,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1008,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1009,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1010,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1011,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1012,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1013,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1014,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1015,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1016,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1017,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1018,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1019,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1020,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1021,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1022,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1023,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1024,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1025,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1026,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1027,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1028,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1029,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1030,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1031,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1032,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1033,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1034,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1035,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1036,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1037,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1038,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1039,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1040,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1041,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1042,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1043,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1044,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1045,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1046,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1047,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1048,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1049,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1050,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1051,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1052,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1053,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1054,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1055,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1056,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1057,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1058,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1059,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1060,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1061,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1062,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1063,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1064,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1065,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1066,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1067,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1068,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1069,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1070,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1071,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1072,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1073,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1074,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1075,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1076,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1077,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1078,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1079,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1080,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1081,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1082,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1083,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1084,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1085,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1086,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1087,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1088,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__129__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1089,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U])) 
                                               >> 2U)))),33);
            tracep->chgBit(oldp+1091,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1092,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1093,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1094,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1095,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1096,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1097,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1098,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1099,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1100,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1101,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1102,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1103,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1104,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1105,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1106,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1107,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1108,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1109,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1110,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1111,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1112,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1113,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1114,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1115,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1116,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1117,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1118,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1119,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1120,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1121,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1122,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1123,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1124,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1125,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1126,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1127,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1128,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1129,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1130,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1131,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1132,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1133,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1134,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1135,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1136,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1137,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1138,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1139,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1140,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1141,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1142,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1143,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1144,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1145,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1146,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 5U))));
            tracep->chgCData(oldp+1147,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1148,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1149,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1150,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1151,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1152,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1153,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1154,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1155,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1156,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1157,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1158,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1159,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1160,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1161,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1162,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1163,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1164,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1165,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1166,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x12U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x12U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                    >> 0x11U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1167,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0x13U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0x12U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1168,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1169,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1170,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1171,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1172,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1173,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1174,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1175,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1176,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1177,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0x17U))),3);
            tracep->chgBit(oldp+1178,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x18U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x18U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                    >> 0x17U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0x17U))))));
            tracep->chgBit(oldp+1179,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0x19U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0x18U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1180,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1181,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1182,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1183,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1184,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1185,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1186,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1187,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1188,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1189,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                         >> 0x1dU)),3);
            tracep->chgBit(oldp+1190,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x1eU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                  >> 0x1eU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                    >> 0x1dU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+1191,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                               >> 0x1fU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                 >> 0x1eU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1192,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1193,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1194,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x86U] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1195,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U])),3);
            tracep->chgBit(oldp+1196,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U])) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U])))));
            tracep->chgBit(oldp+1197,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U]))));
            tracep->chgBit(oldp+1198,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1199,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1200,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U])));
            tracep->chgCData(oldp+1201,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1202,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1203,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1204,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1205,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1206,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1207,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1208,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1209,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1210,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1211,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1212,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1213,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1214,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1215,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1216,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1217,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1218,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1219,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1220,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1221,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1222,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1223,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1224,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1225,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1226,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1227,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1228,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1229,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1230,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1231,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1232,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1233,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1234,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1235,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1236,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1237,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1238,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1239,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1240,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1241,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1242,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1243,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1244,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1245,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1246,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1247,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1248,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1249,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1250,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1251,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1252,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1253,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1254,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1255,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1256,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1257,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1258,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1259,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1260,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1261,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1262,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1263,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1264,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1265,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1266,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1267,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1268,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1269,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1270,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1271,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1272,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1273,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1274,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1275,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1276,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1277,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1278,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1279,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1280,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1281,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1282,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1283,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1284,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1285,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1286,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1287,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1288,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1289,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1290,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__130__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1291,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U])) 
                                               >> 3U)))),33);
            tracep->chgBit(oldp+1293,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1294,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1295,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1296,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1297,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1298,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1299,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1300,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1301,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1302,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1303,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1304,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1305,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1306,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1307,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1308,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1309,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1310,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1311,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1312,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1313,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1314,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1315,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1316,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1317,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1318,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1319,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1320,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1321,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1322,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1323,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1324,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1325,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1326,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1327,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1328,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1329,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1330,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1331,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1332,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1333,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1334,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1335,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1336,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1337,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1338,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 4U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 4U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                    >> 3U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1339,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 5U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 4U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1340,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1341,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1342,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 3U))));
            tracep->chgCData(oldp+1343,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1344,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1345,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1346,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1347,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1348,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 6U))));
            tracep->chgCData(oldp+1349,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1350,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0xaU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0xaU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                    >> 9U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1351,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0xbU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0xaU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1352,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1353,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1354,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 9U))));
            tracep->chgCData(oldp+1355,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1356,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1357,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1358,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1359,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1360,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1361,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1362,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1363,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1364,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1365,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1366,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1367,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1368,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1369,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1370,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1371,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1372,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1373,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0x15U))),3);
            tracep->chgBit(oldp+1374,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x16U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x16U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                    >> 0x15U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0x15U))))));
            tracep->chgBit(oldp+1375,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0x17U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0x16U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1376,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1377,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1378,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1379,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1380,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1381,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1382,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1383,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1384,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1385,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0x1bU))),3);
            tracep->chgBit(oldp+1386,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x1cU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x1cU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                    >> 0x1bU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+1387,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                               >> 0x1dU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0x1cU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1388,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1389,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1390,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1391,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1392,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1393,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1394,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U])));
            tracep->chgBit(oldp+1395,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1396,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x87U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1397,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1398,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                  >> 2U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                  >> 2U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                    >> 1U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1399,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                               >> 3U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                 >> 2U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1400,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1401,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1402,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x88U] 
                                             >> 1U))));
            tracep->chgCData(oldp+1403,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1404,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1405,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1406,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1407,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1408,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1409,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1410,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1411,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1412,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1413,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1414,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1415,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1416,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1417,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1418,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1419,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1420,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1421,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1422,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1423,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1424,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1425,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1426,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1427,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1428,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1429,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1430,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1431,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1432,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1433,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1434,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1435,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1436,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1437,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1438,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1439,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1440,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1441,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1442,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1443,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1444,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1445,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1446,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1447,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1448,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1449,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1450,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1451,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1452,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1453,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1454,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1455,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1456,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1457,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1458,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1459,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1460,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1461,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1462,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1463,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1464,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1465,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1466,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1467,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1468,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1469,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1470,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1471,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1472,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1473,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1474,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1475,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1476,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1477,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1478,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1479,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1480,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1481,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1482,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1483,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1484,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1485,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1486,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1487,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1488,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1489,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1490,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1491,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1492,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__131__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgBit(oldp+1493,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing));
            tracep->chgQData(oldp+1494,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp),64);
            tracep->chgQData(oldp+1496,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp),64);
            tracep->chgBit(oldp+1498,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign));
            tracep->chgBit(oldp+1499,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign));
            tracep->chgQData(oldp+1500,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)
                                          ? (1ULL + 
                                             (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp))
                                          : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp)),64);
            tracep->chgQData(oldp+1502,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs),64);
            tracep->chgWData(oldp+1504,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend),128);
            VL_EXTEND_WQ(65,64, __Vtemp4751, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
            tracep->chgWData(oldp+1508,(__Vtemp4751),65);
            tracep->chgCData(oldp+1511,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt),7);
            tracep->chgQData(oldp+1512,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q),64);
            tracep->chgBit(oldp+1514,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign));
            tracep->chgQData(oldp+1515,(((((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                           << 0x21U) 
                                          | (((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])) 
                                              << 1U) 
                                             | ((QData)((IData)(
                                                                vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                                >> 0x1fU))) 
                                         - vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs)),64);
            tracep->chgBit(oldp+1517,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                          >> 2U))));
            tracep->chgBit(oldp+1518,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr));
            tracep->chgBit(oldp+1519,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie));
            tracep->chgBit(oldp+1520,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie));
            tracep->chgCData(oldp+1521,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp),2);
            tracep->chgQData(oldp+1522,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus),64);
            tracep->chgBit(oldp+1524,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena));
            tracep->chgBit(oldp+1525,((1U & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                 >> 1U)) 
                                             & ((1U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                                 ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)
                                                 : 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                  ? (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                             >> 3U))
                                                  : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)))))));
            tracep->chgBit(oldp+1526,((1U & ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                              ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)
                                              : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                 | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                     ? (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                                >> 7U))
                                                     : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)))))));
            tracep->chgCData(oldp+1527,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                          ? 3U : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                       ? (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                                  >> 0xdU))
                                                       : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
            tracep->chgBit(oldp+1528,((1U & (((0x305U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1529,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                          >> 3U))));
            tracep->chgQData(oldp+1530,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base),62);
            tracep->chgQData(oldp+1532,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
                                         << 2U)),64);
            tracep->chgBit(oldp+1534,((1U & (((0x341U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                 >> 2U)) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl)))));
            tracep->chgBit(oldp+1535,((1U & (((0x341U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                 >> 3U)) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 1U)))));
            tracep->chgQData(oldp+1536,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc),64);
            tracep->chgBit(oldp+1538,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                          >> 2U))));
            tracep->chgBit(oldp+1539,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                          >> 3U))));
            tracep->chgQData(oldp+1540,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause),64);
            tracep->chgBit(oldp+1542,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok));
            tracep->chgQData(oldp+1543,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i),64);
            tracep->chgCData(oldp+1545,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),3);
            tracep->chgCData(oldp+1546,((3U & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                       >> 1U)))),2);
            tracep->chgBit(oldp+1547,((1U & (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                     >> 2U)))));
            tracep->chgIData(oldp+1548,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word),32);
            tracep->chgBit(oldp+1549,((0x100073U == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst)));
            tracep->chgBit(oldp+1550,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag));
            tracep->chgQData(oldp+1551,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0]),64);
            tracep->chgQData(oldp+1553,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1]),64);
            tracep->chgQData(oldp+1555,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2]),64);
            tracep->chgQData(oldp+1557,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3]),64);
            tracep->chgQData(oldp+1559,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4]),64);
            tracep->chgQData(oldp+1561,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5]),64);
            tracep->chgQData(oldp+1563,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6]),64);
            tracep->chgQData(oldp+1565,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7]),64);
            tracep->chgQData(oldp+1567,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8]),64);
            tracep->chgQData(oldp+1569,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9]),64);
            tracep->chgQData(oldp+1571,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[10]),64);
            tracep->chgQData(oldp+1573,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[11]),64);
            tracep->chgQData(oldp+1575,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[12]),64);
            tracep->chgQData(oldp+1577,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[13]),64);
            tracep->chgQData(oldp+1579,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[14]),64);
            tracep->chgQData(oldp+1581,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[15]),64);
            tracep->chgQData(oldp+1583,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[16]),64);
            tracep->chgQData(oldp+1585,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[17]),64);
            tracep->chgQData(oldp+1587,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[18]),64);
            tracep->chgQData(oldp+1589,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[19]),64);
            tracep->chgQData(oldp+1591,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[20]),64);
            tracep->chgQData(oldp+1593,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[21]),64);
            tracep->chgQData(oldp+1595,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[22]),64);
            tracep->chgQData(oldp+1597,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[23]),64);
            tracep->chgQData(oldp+1599,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[24]),64);
            tracep->chgQData(oldp+1601,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[25]),64);
            tracep->chgQData(oldp+1603,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[26]),64);
            tracep->chgQData(oldp+1605,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[27]),64);
            tracep->chgQData(oldp+1607,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[28]),64);
            tracep->chgQData(oldp+1609,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[29]),64);
            tracep->chgQData(oldp+1611,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[30]),64);
            tracep->chgQData(oldp+1613,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[31]),64);
            tracep->chgIData(oldp+1615,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+1616,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
                                          : ((0x10U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data
                                              : ((0x21U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data
                                                  : 0ULL)))),64);
            tracep->chgQData(oldp+1618,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                          ? (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))
                                              ? (0xfffffffffffffff8ULL 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc)
                                              : 0ULL)
                                          : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc
                                              : 0ULL))),64);
            tracep->chgBit(oldp+1620,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                       | ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re)))));
            tracep->chgQData(oldp+1621,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i
                                          : vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data)),64);
            tracep->chgBit(oldp+1623,((1U & ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                              ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid))
                                              : ((4U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                  ? 
                                                 (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we)))))));
            tracep->chgBit(oldp+1624,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                                        : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena)))));
            tracep->chgQData(oldp+1625,(((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data
                                          : ((0x21U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data
                                              : 0ULL))),64);
            tracep->chgQData(oldp+1627,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc
                                          : ((0x10U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                              ? (((0x10U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty)
                                                   ? 
                                                  (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                                    << 9U) 
                                                   | (QData)((IData)(
                                                                     (0x1f8U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                         << 3U)))))
                                                   : 
                                                  (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                                    << 9U) 
                                                   | (QData)((IData)(
                                                                     (0x1f8U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                         << 3U))))))
                                                  : 0ULL)
                                              : ((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc
                                                  : 
                                                 ((0x21U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                   ? 
                                                  (((0x21U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty)
                                                     ? 
                                                    (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                                      << 9U) 
                                                     | (QData)((IData)(
                                                                       (0x1f8U 
                                                                        & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                           << 3U)))))
                                                     : 
                                                    (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                                      << 9U) 
                                                     | (QData)((IData)(
                                                                       (0x1f8U 
                                                                        & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                           << 3U))))))
                                                    : 0ULL)
                                                   : 0ULL))))),64);
            tracep->chgQData(oldp+1629,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                          ? ((0x42U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                              ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                                 + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)
                                              : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)
                                                  : 
                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc 
                                                  + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)))
                                          : 0ULL)),64);
            tracep->chgCData(oldp+1631,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                          ? (0x1fU 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                >> 7U))
                                          : 0U)),5);
            tracep->chgQData(oldp+1632,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                          : 0ULL)),64);
            tracep->chgBit(oldp+1634,(((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))) 
                                       & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))))));
            tracep->chgCData(oldp+1635,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                          ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand)
                                              ? 2U : 1U)
                                          : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                              ? ((2U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                                  ? 1U
                                                  : 2U)
                                              : 1U))),2);
            tracep->chgBit(oldp+1636,(((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                           >> 3U)))] 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                           >> 3U)))]) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild))));
            tracep->chgBit(oldp+1637,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready))));
            tracep->chgBit(oldp+1638,(((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                       & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                          & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                             | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))])))));
            tracep->chgBit(oldp+1639,(((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                       & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                          & ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                 | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))])) 
                                             & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 3U)))]))))));
            if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) {
                __Vtemp4764[0U] = 0U;
                __Vtemp4764[1U] = 0U;
                __Vtemp4764[2U] = 0U;
                __Vtemp4764[3U] = 0U;
            } else {
                __Vtemp4764[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                    ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                              | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                           >> 3U)))]))
                                        ? 0xffffffffU
                                        : 0U) : 0U);
                __Vtemp4764[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                    ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                              | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                           >> 3U)))]))
                                        ? 0xffffffffU
                                        : 0U) : 0U);
                __Vtemp4764[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                    ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                              | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                           >> 3U)))]))
                                        ? 0U : ((1U 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))
                                                 ? 0xffffffffU
                                                 : 0U))
                                    : 0U);
                __Vtemp4764[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                    ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                              | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                           >> 3U)))]))
                                        ? 0U : ((1U 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))
                                                 ? 0xffffffffU
                                                 : 0U))
                                    : 0U);
            }
            tracep->chgWData(oldp+1640,(__Vtemp4764),128);
            tracep->chgQData(oldp+1644,((((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))
                                          ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty)
                                              ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                                  << 9U) 
                                                 | (QData)((IData)(
                                                                   (0x1f8U 
                                                                    & ((IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                       << 3U)))))
                                              : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                                  << 9U) 
                                                 | (QData)((IData)(
                                                                   (0x1f8U 
                                                                    & ((IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                       << 3U))))))
                                          : 0ULL)),64);
            tracep->chgBit(oldp+1646,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready))));
            if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))) {
                __Vtemp4768[0U] = (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data));
                __Vtemp4768[1U] = (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                           >> 0x20U));
                __Vtemp4768[2U] = (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data));
                __Vtemp4768[3U] = (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                           >> 0x20U));
            } else {
                __Vtemp4768[0U] = 0U;
                __Vtemp4768[1U] = 0U;
                __Vtemp4768[2U] = 0U;
                __Vtemp4768[3U] = 0U;
            }
            tracep->chgWData(oldp+1647,(__Vtemp4768),128);
            tracep->chgBit(oldp+1651,(((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                       & (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                          & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild) 
                                                & ((~ 
                                                    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]) 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))])))))));
            tracep->chgBit(oldp+1652,(((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                       & (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild) 
                                             & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 3U)))]))))));
            if (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) {
                __Vtemp4785[0U] = 0U;
                __Vtemp4785[1U] = 0U;
                __Vtemp4785[2U] = 0U;
                __Vtemp4785[3U] = 0U;
            } else {
                __Vtemp4785[0U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                        ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))]
                                                ? 0U
                                                : (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U))
                                            : 0U) : 0xffffffffU)
                                    : 0U);
                __Vtemp4785[1U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                        ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))]
                                                ? 0U
                                                : (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U))
                                            : 0U) : 0xffffffffU)
                                    : 0U);
                __Vtemp4785[2U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                        ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))]
                                                ? 0xffffffffU
                                                : 0U)
                                            : 0xffffffffU)
                                        : 0U) : 0U);
                __Vtemp4785[3U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                        ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))]
                                                ? 0xffffffffU
                                                : 0U)
                                            : 0xffffffffU)
                                        : 0U) : 0U);
            }
            tracep->chgWData(oldp+1653,(__Vtemp4785),128);
            tracep->chgQData(oldp+1657,((((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))
                                          ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty)
                                              ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                                  << 9U) 
                                                 | (QData)((IData)(
                                                                   (0x1f8U 
                                                                    & ((IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                       << 3U)))))
                                              : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                                  << 9U) 
                                                 | (QData)((IData)(
                                                                   (0x1f8U 
                                                                    & ((IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                       << 3U))))))
                                          : 0ULL)),64);
            tracep->chgBit(oldp+1659,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                        ? ((~ ((8U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                           & (((8U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                              & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                 | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))])))
                                        : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & ((~ ((0x20U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                              & (((0x20U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                    | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild) 
                                                       & ((~ 
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                           [
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                       >> 3U)))]) 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                          [
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                      >> 3U)))])))))))));
            tracep->chgBit(oldp+1660,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                        ? ((~ ((8U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                           & (((8U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                              & ((~ 
                                                  ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))])) 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))))
                                        : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & ((~ ((0x20U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                              & (((0x20U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild) 
                                                    & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                       | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                       [
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                   >> 3U)))]))))))));
            if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
                __Vtemp4822[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                    ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((1U 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))
                                                 ? 0xffffffffU
                                                 : 0U)
                                             : 0U));
                __Vtemp4822[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                    ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((1U 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))
                                                 ? 0xffffffffU
                                                 : 0U)
                                             : 0U));
                __Vtemp4822[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                    ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((1U 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))
                                                 ? 0U
                                                 : 
                                                ((1U 
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
                __Vtemp4822[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                    ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((1U 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))
                                                 ? 0U
                                                 : 
                                                ((1U 
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
            } else {
                __Vtemp4822[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                                 : 0U))
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U]
                                        : 0U));
                __Vtemp4822[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                                 : 0U))
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U]
                                        : 0U));
                __Vtemp4822[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                                 : 0U))
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U]
                                        : 0U));
                __Vtemp4822[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                                 : 0U))
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U]
                                        : 0U));
            }
            tracep->chgWData(oldp+1661,(__Vtemp4822),128);
            tracep->chgBit(oldp+1665,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                        : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                            : ((4U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))));
            if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
                __Vtemp4833[0U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U];
                __Vtemp4833[1U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U];
                __Vtemp4833[2U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U];
                __Vtemp4833[3U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U];
            } else {
                __Vtemp4833[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[0U]
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                            ? (IData)(
                                                      ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                                            : 0U) : 0U));
                __Vtemp4833[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[1U]
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                            ? (IData)(
                                                      (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                         ? 0ULL
                                                         : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                                       >> 0x20U))
                                            : 0U) : 0U));
                __Vtemp4833[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U]
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                            ? (IData)(
                                                      ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                                            : 0U) : 0U));
                __Vtemp4833[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[3U]
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                            ? (IData)(
                                                      (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                         ? 0ULL
                                                         : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                                       >> 0x20U))
                                            : 0U) : 0U));
            }
            tracep->chgWData(oldp+1666,(__Vtemp4833),128);
            tracep->chgBit(oldp+1670,((1U & (~ ((8U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                                 ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                                 : 
                                                ((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                  ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))))));
            if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
                __Vtemp4870[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                    ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((1U 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))
                                                 ? 0xffffffffU
                                                 : 0U)
                                             : 0U));
                __Vtemp4870[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                    ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((1U 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))
                                                 ? 0xffffffffU
                                                 : 0U)
                                             : 0U));
                __Vtemp4870[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                    ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((1U 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))
                                                 ? 0U
                                                 : 
                                                ((1U 
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
                __Vtemp4870[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                    & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                    ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((1U 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))
                                                 ? 0U
                                                 : 
                                                ((1U 
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
            } else {
                __Vtemp4870[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                                 : 0U))
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U]
                                        : 0U));
                __Vtemp4870[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                                 : 0U))
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U]
                                        : 0U));
                __Vtemp4870[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                                 : 0U))
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U]
                                        : 0U));
                __Vtemp4870[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                                 : 0U))
                                    : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U]
                                        : 0U));
            }
            __Vtemp4871[0U] = (~ __Vtemp4870[0U]);
            __Vtemp4871[1U] = (~ __Vtemp4870[1U]);
            __Vtemp4871[2U] = (~ __Vtemp4870[2U]);
            __Vtemp4871[3U] = (~ __Vtemp4870[3U]);
            tracep->chgWData(oldp+1671,(__Vtemp4871),128);
            tracep->chgBit(oldp+1675,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                            | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))) 
                                           | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                          == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+1676,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                           | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                          == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+1677,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                           | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                          == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+1678,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                            | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))) 
                                           | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                          == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+1679,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                           | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                          == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+1680,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                           | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                          == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+1681,(((0x10U == (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                       & (0U == (0x7000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
            tracep->chgBit(oldp+1682,(((0x10U == (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                       & (0x2000U == 
                                          (0x7000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
            tracep->chgBit(oldp+1683,(((0x10U == (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                       & (0x3000U == 
                                          (0x7000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
            tracep->chgBit(oldp+1684,(((0x10U == (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                       & (0x4000U == 
                                          (0x7000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
            tracep->chgBit(oldp+1685,(((0x10U == (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                       & (0x6000U == 
                                          (0x7000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
            tracep->chgBit(oldp+1686,(((0x10U == (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                       & (0x7000U == 
                                          (0x7000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
            tracep->chgBit(oldp+1687,(((0x10U == (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                       & (0x1000U == 
                                          (0x7000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
            tracep->chgBit(oldp+1688,(((0x10U == (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                       & (0x5000U == 
                                          (0x40007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
            tracep->chgQData(oldp+1689,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo
                                          : 0ULL)),64);
            tracep->chgQData(oldp+1691,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem
                                          : 0ULL)),64);
            tracep->chgQData(oldp+1693,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                          ? (((((0x98U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                                | (0x23U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                               | (0x8cU 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                              | (0x46U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                              ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo
                                                  : 0ULL)
                                              : (((
                                                   ((0x43U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                                    | (0x86U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                                   | (0x15U 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                                  | (0x83U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem
                                                   : 0ULL)
                                                  : 0ULL))
                                          : 0ULL)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+1695,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc),64);
            tracep->chgCData(oldp+1697,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask)
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                              ? 0U : 0xffU))),8);
            tracep->chgBit(oldp+1698,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid));
            tracep->chgIData(oldp+1699,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst),32);
            tracep->chgBit(oldp+1700,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we));
            tracep->chgBit(oldp+1701,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re));
            tracep->chgCData(oldp+1702,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask),8);
            tracep->chgQData(oldp+1703,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc),64);
            tracep->chgQData(oldp+1705,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data),64);
            tracep->chgBit(oldp+1707,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid));
            tracep->chgBit(oldp+1708,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re));
            tracep->chgBit(oldp+1709,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we));
            tracep->chgBit(oldp+1710,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re));
            tracep->chgBit(oldp+1711,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we));
            tracep->chgCData(oldp+1712,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask),8);
            tracep->chgQData(oldp+1713,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                          ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data)),64);
            tracep->chgQData(oldp+1715,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data),64);
            tracep->chgQData(oldp+1717,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc),64);
            tracep->chgBit(oldp+1719,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready));
            tracep->chgQData(oldp+1720,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data),64);
            tracep->chgBit(oldp+1722,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid));
            tracep->chgBit(oldp+1723,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready));
            tracep->chgCData(oldp+1724,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr),5);
            tracep->chgCData(oldp+1725,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr),5);
            tracep->chgBit(oldp+1726,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
            tracep->chgBit(oldp+1727,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
            tracep->chgBit(oldp+1728,(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel));
            tracep->chgBit(oldp+1729,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                             >> 1U))));
            tracep->chgBit(oldp+1730,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
            tracep->chgQData(oldp+1731,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1),64);
            tracep->chgQData(oldp+1733,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2),64);
            tracep->chgQData(oldp+1735,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm),64);
            tracep->chgBit(oldp+1737,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena));
            tracep->chgCData(oldp+1738,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl),4);
            tracep->chgCData(oldp+1739,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl),2);
            tracep->chgCData(oldp+1740,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena) 
                                          << 3U) | 
                                         (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena) 
                                            << 1U) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena))))),4);
            tracep->chgCData(oldp+1741,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel),8);
            tracep->chgQData(oldp+1742,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata),64);
            tracep->chgBit(oldp+1744,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel));
            tracep->chgQData(oldp+1745,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward),64);
            tracep->chgQData(oldp+1747,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data),64);
            tracep->chgBit(oldp+1749,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)))));
            tracep->chgBit(oldp+1750,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid));
            tracep->chgBit(oldp+1751,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid));
            tracep->chgBit(oldp+1752,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready));
            tracep->chgCData(oldp+1753,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state_next),3);
            tracep->chgBit(oldp+1754,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand));
            tracep->chgCData(oldp+1755,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next),4);
            tracep->chgBit(oldp+1756,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena));
            tracep->chgIData(oldp+1757,((0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                    >> 9U)))),23);
            tracep->chgCData(oldp+1758,((0x3fU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))),6);
            tracep->chgCData(oldp+1759,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next),6);
            tracep->chgBit(oldp+1760,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit));
            tracep->chgBit(oldp+1761,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit));
            tracep->chgBit(oldp+1762,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty));
            tracep->chgBit(oldp+1763,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready));
            tracep->chgBit(oldp+1764,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid));
            tracep->chgBit(oldp+1765,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid));
            tracep->chgQData(oldp+1766,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc),64);
            tracep->chgBit(oldp+1768,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena));
            tracep->chgWData(oldp+1769,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data),128);
            tracep->chgQData(oldp+1773,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data),64);
            tracep->chgCData(oldp+1775,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next),6);
            tracep->chgBit(oldp+1776,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit));
            tracep->chgBit(oldp+1777,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit));
            tracep->chgBit(oldp+1778,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty));
            tracep->chgBit(oldp+1779,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready));
            tracep->chgBit(oldp+1780,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid));
            tracep->chgWData(oldp+1781,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb),128);
            tracep->chgQData(oldp+1785,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64),64);
            tracep->chgBit(oldp+1787,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid));
            tracep->chgQData(oldp+1788,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc),64);
            tracep->chgBit(oldp+1790,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena));
            tracep->chgWData(oldp+1791,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data),128);
            tracep->chgQData(oldp+1795,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data),64);
            tracep->chgIData(oldp+1797,((0x800000U 
                                         | (0x7fffffU 
                                            & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                       >> 9U))))),24);
            tracep->chgIData(oldp+1798,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm),20);
            tracep->chgSData(oldp+1799,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm),12);
            tracep->chgCData(oldp+1800,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)),7);
            tracep->chgBit(oldp+1801,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx));
            tracep->chgBit(oldp+1802,((1U & (((0U != 
                                               (0xb3U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
            tracep->chgBit(oldp+1803,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                             >> 2U))));
            tracep->chgBit(oldp+1804,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                        >> 2U) & ((0xeU 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                                   ? 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                                   == vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                                    != vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                                                    : 
                                                   ((0xe0U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                                     ? 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                                     < vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                                      ? 
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                                      >= vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                                                      : 
                                                     ((0x38U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2)
                                                       : 
                                                      ((0x70U 
                                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2)))))))))));
            tracep->chgQData(oldp+1805,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+1807,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2));
            tracep->chgBit(oldp+1808,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena));
            tracep->chgBit(oldp+1809,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena));
            tracep->chgBit(oldp+1810,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena));
            tracep->chgBit(oldp+1811,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena));
            tracep->chgCData(oldp+1812,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type),8);
            tracep->chgBit(oldp+1813,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui));
            tracep->chgBit(oldp+1814,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc));
            tracep->chgBit(oldp+1815,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal));
            tracep->chgBit(oldp+1816,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
            tracep->chgBit(oldp+1817,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb));
            tracep->chgBit(oldp+1818,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh));
            tracep->chgBit(oldp+1819,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw));
            tracep->chgBit(oldp+1820,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd));
            tracep->chgBit(oldp+1821,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb));
            tracep->chgBit(oldp+1822,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh));
            tracep->chgBit(oldp+1823,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw));
            tracep->chgBit(oldp+1824,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld));
            tracep->chgBit(oldp+1825,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu));
            tracep->chgBit(oldp+1826,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu));
            tracep->chgBit(oldp+1827,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu));
            tracep->chgBit(oldp+1828,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq));
            tracep->chgBit(oldp+1829,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne));
            tracep->chgBit(oldp+1830,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt));
            tracep->chgBit(oldp+1831,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge));
            tracep->chgBit(oldp+1832,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu));
            tracep->chgBit(oldp+1833,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu));
            tracep->chgBit(oldp+1834,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add));
            tracep->chgBit(oldp+1835,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub));
            tracep->chgBit(oldp+1836,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll));
            tracep->chgBit(oldp+1837,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt));
            tracep->chgBit(oldp+1838,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu));
            tracep->chgBit(oldp+1839,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor));
            tracep->chgBit(oldp+1840,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl));
            tracep->chgBit(oldp+1841,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra));
            tracep->chgBit(oldp+1842,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or));
            tracep->chgBit(oldp+1843,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and));
            tracep->chgBit(oldp+1844,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div));
            tracep->chgBit(oldp+1845,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu));
            tracep->chgBit(oldp+1846,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul));
            tracep->chgBit(oldp+1847,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh));
            tracep->chgBit(oldp+1848,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
            tracep->chgBit(oldp+1849,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu));
            tracep->chgBit(oldp+1850,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem));
            tracep->chgBit(oldp+1851,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu));
            tracep->chgBit(oldp+1852,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai));
            tracep->chgBit(oldp+1853,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw));
            tracep->chgBit(oldp+1854,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw));
            tracep->chgBit(oldp+1855,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw));
            tracep->chgBit(oldp+1856,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw));
            tracep->chgBit(oldp+1857,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw));
            tracep->chgBit(oldp+1858,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw));
            tracep->chgBit(oldp+1859,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw));
            tracep->chgBit(oldp+1860,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw));
            tracep->chgBit(oldp+1861,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw));
            tracep->chgBit(oldp+1862,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw));
            tracep->chgBit(oldp+1863,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw));
            tracep->chgBit(oldp+1864,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw));
            tracep->chgBit(oldp+1865,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw));
            tracep->chgBit(oldp+1866,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw));
            tracep->chgBit(oldp+1867,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall));
            tracep->chgBit(oldp+1868,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret));
            tracep->chgBit(oldp+1869,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw));
            tracep->chgBit(oldp+1870,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs));
            tracep->chgBit(oldp+1871,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc));
            tracep->chgBit(oldp+1872,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
            tracep->chgBit(oldp+1873,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
            tracep->chgBit(oldp+1874,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci));
            tracep->chgBit(oldp+1875,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak));
            tracep->chgBit(oldp+1876,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
            tracep->chgBit(oldp+1877,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr))));
            tracep->chgQData(oldp+1878,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res),64);
            tracep->chgQData(oldp+1880,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo),64);
            tracep->chgQData(oldp+1882,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem),64);
            tracep->chgQData(oldp+1884,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data),64);
            tracep->chgCData(oldp+1886,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte),8);
            tracep->chgSData(oldp+1887,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half),16);
        }
        tracep->chgBit(oldp+1888,(vlSelf->clk));
        tracep->chgBit(oldp+1889,(vlSelf->rst));
        tracep->chgBit(oldp+1890,(((~ (IData)(vlSelf->rst)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                         >> 0xbU)))));
        tracep->chgQData(oldp+1891,(((IData)(vlSelf->rst)
                                      ? 0ULL : (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                + (
                                                   ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)))
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
                                                      : 4ULL)))))),64);
        tracep->chgIData(oldp+1893,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),32);
        tracep->chgQData(oldp+1894,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->chgQData(oldp+1896,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data)),64);
        tracep->chgQData(oldp+1898,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                      : 0ULL)),64);
        tracep->chgQData(oldp+1900,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                      : 0ULL)),64);
        tracep->chgBit(oldp+1902,(((IData)(vlSelf->rst)
                                    ? 0U : (0x6fU == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)))));
        tracep->chgQData(oldp+1903,((((IData)(vlSelf->rst)
                                       ? 0U : (0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)))
                                      ? (((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                                                 >> 0x13U))))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           (0xfffffU 
                                                            & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                                               << 1U)))))
                                      : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                             >> 0xbU))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                                     >> 0xbU))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfffU 
                                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                                   << 1U)))))
                                          : ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : 4ULL)))),64);
        tracep->chgQData(oldp+1905,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                     + (((IData)(vlSelf->rst)
                                          ? 0U : (0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                                                    >> 0x13U))))) 
                                             << 0x14U) 
                                            | (QData)((IData)(
                                                              (0xfffffU 
                                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                                                  << 1U)))))
                                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                >> 0xbU))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                                        >> 0xbU))))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                                      << 1U)))))
                                             : ((IData)(vlSelf->rst)
                                                 ? 0ULL
                                                 : 4ULL))))),64);
        tracep->chgBit(oldp+1907,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgBit(oldp+1908,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgQData(oldp+1909,(((IData)(vlSelf->rst)
                                      ? 0ULL : (0xfffffffffffffff8ULL 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),64);
        tracep->chgQData(oldp+1911,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)),64);
        tracep->chgCData(oldp+1913,(((IData)(vlSelf->rst)
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
                                                    : 1U))))),8);
        tracep->chgCData(oldp+1914,(((IData)(vlSelf->rst)
                                      ? 0U : ((0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                           >> 1U))))
                                               ? 3U
                                               : ((1U 
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
                                                    : 0xc0U))))),8);
        tracep->chgCData(oldp+1915,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->chgQData(oldp+1916,(((IData)(vlSelf->rst)
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
                                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))))))),64);
        tracep->chgQData(oldp+1918,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))),64);
        tracep->chgQData(oldp+1920,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0U 
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
                                                   << 0x30U)))))),64);
    }
}

void Vysyx_22051013_rvcpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22051013_rvcpu___024root* const __restrict vlSelf = static_cast<Vysyx_22051013_rvcpu___024root*>(voidSelf);
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
