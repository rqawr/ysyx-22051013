// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051013_rvcpu__Syms.h"


void Vysyx_22051013_rvcpu___024root__traceChgSub1(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 2767);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & VL_REDXOR_32(
                                                      (0xe00U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add) 
                                          >> 0xbU))));
            tracep->chgBit(oldp+2,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add) 
                                          >> 0xaU))));
            tracep->chgBit(oldp+3,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add) 
                                          >> 9U))));
            tracep->chgCData(oldp+4,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))),3);
            tracep->chgBit(oldp+5,((1U & (((0x6000U 
                                            == (0x6000U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add))) 
                                           | (0x3000U 
                                              == (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add)))) 
                                          | (0x5000U 
                                             == (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+6,((1U & VL_REDXOR_32(
                                                      (0x7000U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+7,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add) 
                                          >> 0xeU))));
            tracep->chgBit(oldp+8,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add) 
                                          >> 0xdU))));
            tracep->chgBit(oldp+9,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l3_add) 
                                          >> 0xcU))));
            tracep->chgCData(oldp+10,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+11,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+12,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+13,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
            tracep->chgBit(oldp+14,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
            tracep->chgBit(oldp+15,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+16,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
            tracep->chgBit(oldp+17,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+18,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+19,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
            tracep->chgBit(oldp+20,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
            tracep->chgBit(oldp+21,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
            tracep->chgCData(oldp+22,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
            tracep->chgBit(oldp+23,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+24,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+25,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
            tracep->chgBit(oldp+26,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
            tracep->chgBit(oldp+27,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__6__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
            tracep->chgQData(oldp+28,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U])) 
                                           << 0x19U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U])) 
                                             >> 7U)))),33);
            tracep->chgBit(oldp+30,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+31,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+32,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+34,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+36,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+38,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+42,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+44,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+45,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+46,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+47,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+48,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+49,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+50,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+51,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+52,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+53,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+54,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+55,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+56,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
            tracep->chgBit(oldp+57,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
            tracep->chgBit(oldp+58,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+59,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
            tracep->chgBit(oldp+60,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+61,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+62,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
            tracep->chgBit(oldp+63,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
            tracep->chgBit(oldp+64,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l5_add) 
                                           >> 3U))));
            tracep->chgBit(oldp+65,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l6_add) 
                                           >> 2U))));
            tracep->chgBit(oldp+66,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l6_add) 
                                           >> 1U))));
            tracep->chgBit(oldp+67,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+68,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l7_add) 
                                           >> 2U))));
            tracep->chgBit(oldp+69,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l7_add) 
                                           >> 1U))));
            tracep->chgBit(oldp+70,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+71,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l8_add) 
                                           >> 2U))));
            tracep->chgBit(oldp+72,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l8_add) 
                                           >> 1U))));
            tracep->chgBit(oldp+73,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+74,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                             >> 7U))),3);
            tracep->chgBit(oldp+75,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 9U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 8U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                  >> 7U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 7U))))));
            tracep->chgBit(oldp+76,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                             >> 9U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 8U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 7U)))));
            tracep->chgBit(oldp+77,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 9U))));
            tracep->chgBit(oldp+78,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 8U))));
            tracep->chgBit(oldp+79,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 7U))));
            tracep->chgCData(oldp+80,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                             >> 0xaU))),3);
            tracep->chgBit(oldp+81,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0xcU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0xbU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                  >> 0xaU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 0xaU))))));
            tracep->chgBit(oldp+82,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                             >> 0xcU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0xbU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+83,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 0xcU))));
            tracep->chgBit(oldp+84,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 0xbU))));
            tracep->chgBit(oldp+85,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 0xaU))));
            tracep->chgCData(oldp+86,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                             >> 0xdU))),3);
            tracep->chgBit(oldp+87,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0xfU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0xeU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                  >> 0xdU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 0xdU))))));
            tracep->chgBit(oldp+88,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                             >> 0xfU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0xeU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0xdU)))));
            tracep->chgBit(oldp+89,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 0xfU))));
            tracep->chgBit(oldp+90,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 0xeU))));
            tracep->chgBit(oldp+91,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 0xdU))));
            tracep->chgCData(oldp+92,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                             >> 0x10U))),3);
            tracep->chgBit(oldp+93,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0x12U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0x11U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                  >> 0x10U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 0x10U))))));
            tracep->chgBit(oldp+94,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                             >> 0x12U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0x11U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0x10U)))));
            tracep->chgBit(oldp+95,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 0x12U))));
            tracep->chgBit(oldp+96,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 0x11U))));
            tracep->chgBit(oldp+97,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                           >> 0x10U))));
            tracep->chgCData(oldp+98,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                             >> 0x13U))),3);
            tracep->chgBit(oldp+99,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0x15U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0x14U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                  >> 0x13U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 0x13U))))));
            tracep->chgBit(oldp+100,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0x15U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0x14U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0x13U)))));
            tracep->chgBit(oldp+101,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+102,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+103,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+104,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+105,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+106,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+107,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+108,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+109,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+110,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+111,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 0x1aU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                   >> 0x19U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+112,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0x1bU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0x1aU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+113,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+114,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+115,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+116,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+117,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+118,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+119,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+120,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+121,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+122,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+123,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U]) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+124,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U]) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+125,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 1U))));
            tracep->chgBit(oldp+126,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U])));
            tracep->chgBit(oldp+127,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[7U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+128,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+129,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+130,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+131,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 4U))));
            tracep->chgBit(oldp+132,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 3U))));
            tracep->chgBit(oldp+133,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 2U))));
            tracep->chgCData(oldp+134,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 5U))),3);
            tracep->chgBit(oldp+135,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 6U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                   >> 5U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                  >> 5U))))));
            tracep->chgBit(oldp+136,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 7U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 6U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 5U)))));
            tracep->chgBit(oldp+137,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 7U))));
            tracep->chgBit(oldp+138,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 6U))));
            tracep->chgBit(oldp+139,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 5U))));
            tracep->chgCData(oldp+140,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+141,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+142,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+143,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+144,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+145,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+146,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+147,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+148,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+149,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+150,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+151,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+152,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+153,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+154,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+155,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+156,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+157,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+158,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+159,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+160,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+161,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+162,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+163,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+164,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+165,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+166,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+167,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+168,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+169,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+170,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+171,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+172,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+173,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+174,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+175,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+176,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+177,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+178,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+179,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+180,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+181,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+182,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+183,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+184,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+185,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+186,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+187,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+188,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+189,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+190,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+191,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+192,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+193,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+194,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+195,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+196,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+197,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+198,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+199,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+200,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+201,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+202,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+203,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+204,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+205,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+206,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+207,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+208,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+209,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+210,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+211,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+212,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+213,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+214,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+215,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+216,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+217,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+218,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+219,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+220,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+221,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+222,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+223,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+224,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+225,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+226,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+227,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+228,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+229,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__7__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+230,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U])) 
                                              >> 8U)))),33);
            tracep->chgBit(oldp+232,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+233,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+234,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+235,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+236,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+237,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+238,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+239,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+240,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+241,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+242,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+243,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+244,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+245,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+246,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+247,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+248,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+249,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+250,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+251,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+252,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+253,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+254,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+255,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+256,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+257,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+258,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+259,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+260,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+261,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+262,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+263,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+265,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+266,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+268,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+269,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+270,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+272,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+273,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+274,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+275,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+276,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+277,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+278,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+279,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+280,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 9U))));
            tracep->chgBit(oldp+281,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 8U))));
            tracep->chgCData(oldp+282,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0xbU))),3);
            tracep->chgBit(oldp+283,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0xcU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                   >> 0xbU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+284,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0xdU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0xcU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0xbU)))));
            tracep->chgBit(oldp+285,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+286,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+287,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+288,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+289,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+290,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+291,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+292,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+293,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+294,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+295,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0x12U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                   >> 0x11U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                  >> 0x11U))))));
            tracep->chgBit(oldp+296,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0x13U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0x12U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0x11U)))));
            tracep->chgBit(oldp+297,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+298,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+299,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+300,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+301,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+302,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+303,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+304,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+305,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+306,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+307,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+308,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+309,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+310,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+311,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+312,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+313,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+314,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+315,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+316,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+317,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+318,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+319,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+320,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+321,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+322,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+323,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[8U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+324,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U])),3);
            tracep->chgBit(oldp+325,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U])) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U])))));
            tracep->chgBit(oldp+326,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U]))));
            tracep->chgBit(oldp+327,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 2U))));
            tracep->chgBit(oldp+328,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 1U))));
            tracep->chgBit(oldp+329,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U])));
            tracep->chgCData(oldp+330,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+331,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+332,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 3U)))));
            tracep->chgBit(oldp+333,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 5U))));
            tracep->chgBit(oldp+334,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 4U))));
            tracep->chgBit(oldp+335,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 3U))));
            tracep->chgCData(oldp+336,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+337,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+338,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+339,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 8U))));
            tracep->chgBit(oldp+340,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 7U))));
            tracep->chgBit(oldp+341,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 6U))));
            tracep->chgCData(oldp+342,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+343,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+344,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+345,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+346,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+347,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+348,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+349,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+350,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+351,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+352,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+353,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+354,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+355,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+356,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+357,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+358,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+359,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+360,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+361,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+362,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+363,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+364,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+365,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+366,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+367,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+368,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+369,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+370,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+371,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+372,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+373,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+374,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+375,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+376,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+377,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+378,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+379,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+380,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+381,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+382,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+383,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+384,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+385,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+386,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+387,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+388,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+389,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+390,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+391,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+392,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+393,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+394,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+395,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+396,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+397,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+398,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+399,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+400,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+401,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+402,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+403,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+404,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+405,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+406,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+407,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+408,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+409,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+410,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+411,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+412,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+413,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+414,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+415,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+416,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+417,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+418,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+419,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+420,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+421,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+422,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+423,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+424,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+425,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+426,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+427,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+428,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+429,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+430,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+431,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__8__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+432,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U])) 
                                              >> 9U)))),33);
            tracep->chgBit(oldp+434,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+435,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+436,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+437,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+438,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+439,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+440,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+441,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+442,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+443,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+444,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+445,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+446,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+447,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+448,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+449,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+450,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+451,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+452,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+453,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+454,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+455,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+456,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+457,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+458,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+459,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+460,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+461,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+462,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+463,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+464,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+465,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+466,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+467,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+468,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+469,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+470,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+471,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+472,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+473,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+474,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+475,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+476,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+477,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+478,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+479,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0xaU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                   >> 9U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                  >> 9U))))));
            tracep->chgBit(oldp+480,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0xbU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0xaU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 9U)))));
            tracep->chgBit(oldp+481,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+482,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+483,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 9U))));
            tracep->chgCData(oldp+484,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+485,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+486,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+487,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+488,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+489,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+490,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+491,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x10U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                   >> 0xfU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                  >> 0xfU))))));
            tracep->chgBit(oldp+492,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0x11U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0x10U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0xfU)))));
            tracep->chgBit(oldp+493,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+494,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+495,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+496,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+497,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+498,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+499,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+500,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+501,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+502,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0x15U))),3);
            tracep->chgBit(oldp+503,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x16U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                   >> 0x15U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+504,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0x17U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0x16U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+505,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+506,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+507,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+508,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+509,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+510,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+511,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+512,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+513,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+514,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+515,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+516,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+517,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+518,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+519,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+520,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+521,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+522,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+523,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU])));
            tracep->chgBit(oldp+524,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+525,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[9U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+526,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+527,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+528,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 1U)))));
            tracep->chgBit(oldp+529,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 3U))));
            tracep->chgBit(oldp+530,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 2U))));
            tracep->chgBit(oldp+531,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 1U))));
            tracep->chgCData(oldp+532,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+533,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+534,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 4U)))));
            tracep->chgBit(oldp+535,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 6U))));
            tracep->chgBit(oldp+536,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 5U))));
            tracep->chgBit(oldp+537,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 4U))));
            tracep->chgCData(oldp+538,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 7U))),3);
            tracep->chgBit(oldp+539,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 8U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                   >> 7U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                  >> 7U))))));
            tracep->chgBit(oldp+540,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 9U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 8U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 7U)))));
            tracep->chgBit(oldp+541,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 9U))));
            tracep->chgBit(oldp+542,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 8U))));
            tracep->chgBit(oldp+543,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 7U))));
            tracep->chgCData(oldp+544,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+545,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+546,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+547,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+548,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+549,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+550,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+551,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+552,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+553,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+554,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+555,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+556,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+557,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+558,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+559,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+560,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+561,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+562,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+563,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+564,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+565,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+566,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+567,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+568,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+569,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+570,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+571,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+572,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+573,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+574,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+575,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+576,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+577,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+578,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+579,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+580,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+581,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+582,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+583,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+584,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+585,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+586,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+587,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+588,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+589,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+590,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+591,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+592,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+593,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+594,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+595,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+596,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+597,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+598,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+599,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+600,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+601,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+602,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+603,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+604,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+605,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+606,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+607,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+608,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+609,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+610,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+611,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+612,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+613,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+614,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+615,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+616,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+617,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+618,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+619,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+620,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+621,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+622,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+623,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+624,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+625,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+626,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+627,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+628,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+629,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+630,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+631,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+632,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+633,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__9__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+634,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU])) 
                                              >> 0xaU)))),33);
            tracep->chgBit(oldp+636,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+637,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+638,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+639,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+640,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+641,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+642,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+643,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+644,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+645,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+646,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+647,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+648,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+649,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+650,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+651,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+652,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+653,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+654,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+655,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+656,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+657,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+658,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+659,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+660,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+661,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+662,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+663,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+664,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+665,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+666,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+667,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+668,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+669,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+670,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+671,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+672,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+673,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+674,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+675,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+676,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+677,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+678,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+679,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+680,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+681,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+682,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+683,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+684,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+685,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+686,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0xdU))),3);
            tracep->chgBit(oldp+687,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0xeU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                   >> 0xdU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                  >> 0xdU))))));
            tracep->chgBit(oldp+688,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0xfU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0xeU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0xdU)))));
            tracep->chgBit(oldp+689,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+690,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+691,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+692,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+693,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+694,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+695,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+696,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+697,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+698,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0x13U))),3);
            tracep->chgBit(oldp+699,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0x14U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                   >> 0x13U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                  >> 0x13U))))));
            tracep->chgBit(oldp+700,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0x15U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0x14U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0x13U)))));
            tracep->chgBit(oldp+701,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+702,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+703,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+704,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+705,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+706,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+707,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+708,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+709,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+710,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+711,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0x1aU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                   >> 0x19U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+712,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0x1bU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0x1aU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+713,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+714,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+715,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+716,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+717,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+718,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+719,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+720,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+721,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+722,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+723,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU]) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+724,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU]) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+725,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 1U))));
            tracep->chgBit(oldp+726,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU])));
            tracep->chgBit(oldp+727,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xaU] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+728,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+729,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+730,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 2U)))));
            tracep->chgBit(oldp+731,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 4U))));
            tracep->chgBit(oldp+732,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 3U))));
            tracep->chgBit(oldp+733,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 2U))));
            tracep->chgCData(oldp+734,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 5U))),3);
            tracep->chgBit(oldp+735,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 6U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                   >> 5U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                  >> 5U))))));
            tracep->chgBit(oldp+736,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 7U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 6U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 5U)))));
            tracep->chgBit(oldp+737,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 7U))));
            tracep->chgBit(oldp+738,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 6U))));
            tracep->chgBit(oldp+739,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 5U))));
            tracep->chgCData(oldp+740,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+741,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+742,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 8U)))));
            tracep->chgBit(oldp+743,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+744,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 9U))));
            tracep->chgBit(oldp+745,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 8U))));
            tracep->chgCData(oldp+746,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+747,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+748,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+749,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+750,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+751,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+752,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+753,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+754,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+755,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+756,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+757,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+758,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+759,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+760,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+761,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+762,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+763,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+764,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+765,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+766,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+767,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+768,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+769,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+770,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+771,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+772,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+773,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+774,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+775,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+776,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+777,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+778,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+779,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+780,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+781,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+782,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+783,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+784,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+785,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+786,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+787,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+788,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+789,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+790,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+791,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+792,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+793,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+794,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+795,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+796,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+797,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+798,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+799,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+800,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+801,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+802,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+803,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+804,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+805,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+806,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+807,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+808,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+809,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+810,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+811,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+812,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+813,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+814,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+815,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+816,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+817,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+818,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+819,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+820,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+821,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+822,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+823,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+824,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+825,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+826,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+827,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+828,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+829,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+830,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+831,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+832,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+833,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+834,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+835,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__10__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+836,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU])) 
                                              >> 0xbU)))),33);
            tracep->chgBit(oldp+838,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+839,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+840,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+841,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+842,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+843,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+844,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+845,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+846,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+847,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+848,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+849,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+850,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+851,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+852,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+853,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+854,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+855,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+856,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+857,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+858,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+859,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+860,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+861,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+862,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+863,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+864,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+865,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+866,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+867,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+868,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+869,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+870,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+871,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+872,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+873,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+874,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+875,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+876,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+877,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+878,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+879,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+880,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+881,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+882,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0xbU))),3);
            tracep->chgBit(oldp+883,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0xcU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                   >> 0xbU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+884,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0xdU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0xcU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0xbU)))));
            tracep->chgBit(oldp+885,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+886,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+887,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+888,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+889,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+890,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+891,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+892,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+893,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+894,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+895,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0x12U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                   >> 0x11U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                  >> 0x11U))))));
            tracep->chgBit(oldp+896,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0x13U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0x12U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0x11U)))));
            tracep->chgBit(oldp+897,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+898,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+899,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+900,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+901,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+902,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+903,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+904,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+905,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+906,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+907,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+908,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+909,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+910,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+911,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+912,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+913,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+914,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+915,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+916,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+917,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+918,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+919,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+920,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+921,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+922,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+923,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xbU] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+924,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU])),3);
            tracep->chgBit(oldp+925,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU])) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU])))));
            tracep->chgBit(oldp+926,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU]))));
            tracep->chgBit(oldp+927,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                            >> 2U))));
            tracep->chgBit(oldp+928,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                            >> 1U))));
            tracep->chgBit(oldp+929,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU])));
            tracep->chgCData(oldp+930,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+931,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+932,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 3U)))));
            tracep->chgBit(oldp+933,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                            >> 5U))));
            tracep->chgBit(oldp+934,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                            >> 4U))));
            tracep->chgBit(oldp+935,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                            >> 3U))));
            tracep->chgCData(oldp+936,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+937,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+938,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 6U)))));
            tracep->chgBit(oldp+939,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                            >> 8U))));
            tracep->chgBit(oldp+940,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                            >> 7U))));
            tracep->chgBit(oldp+941,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                            >> 6U))));
            tracep->chgCData(oldp+942,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+943,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0xaU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                   >> 9U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 9U))))));
            tracep->chgBit(oldp+944,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                              >> 0xbU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0xaU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 9U)))));
            tracep->chgBit(oldp+945,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+946,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+947,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                            >> 9U))));
            tracep->chgCData(oldp+948,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+949,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+950,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+951,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+952,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+953,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+954,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+955,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+956,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+957,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+958,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+959,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+960,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+961,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+962,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+963,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+964,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+965,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+966,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+967,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+968,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+969,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+970,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+971,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+972,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+973,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+974,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+975,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+976,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+977,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+978,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+979,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+980,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+981,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+982,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+983,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+984,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+985,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+986,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+987,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+988,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+989,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+990,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+991,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+992,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+993,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+994,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+995,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+996,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+997,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+998,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+999,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+1000,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1001,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1002,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1003,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1004,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1005,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1006,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1007,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1008,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1009,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1010,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1011,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1012,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1013,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1014,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1015,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1016,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1017,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1018,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1019,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1020,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1021,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1022,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1023,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1024,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1025,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1026,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1027,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1028,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1029,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1030,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1031,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1032,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1033,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1034,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1035,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1036,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1037,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__11__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1038,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU])) 
                                               >> 0xcU)))),33);
            tracep->chgBit(oldp+1040,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1041,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1042,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1043,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1044,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1045,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1046,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1047,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1048,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1049,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1050,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1051,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1052,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1053,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1054,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1055,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1056,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1057,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1058,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1059,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1060,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1061,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1062,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1063,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1064,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1065,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1066,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1067,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1068,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1069,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1070,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1071,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1072,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1073,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1074,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1075,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1076,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1077,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1078,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1079,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1080,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1081,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1082,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1083,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1084,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1085,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1086,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1087,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1088,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1089,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1090,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1091,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1092,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1093,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1094,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1095,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1096,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1097,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1098,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1099,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1100,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1101,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1102,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0x15U))),3);
            tracep->chgBit(oldp+1103,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x16U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x16U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                    >> 0x15U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                   >> 0x15U))))));
            tracep->chgBit(oldp+1104,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0x17U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0x16U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1105,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1106,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1107,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1108,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1109,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1110,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1111,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1112,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1113,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1114,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0x1bU))),3);
            tracep->chgBit(oldp+1115,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x1cU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x1cU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                    >> 0x1bU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+1116,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                               >> 0x1dU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0x1cU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1117,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1118,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1119,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1120,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1121,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1122,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1123,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU])));
            tracep->chgBit(oldp+1124,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1125,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xcU] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1126,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1127,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 2U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 2U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                    >> 1U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1128,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 3U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 2U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1129,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1130,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1131,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 1U))));
            tracep->chgCData(oldp+1132,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1133,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1134,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1135,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1136,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1137,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 4U))));
            tracep->chgCData(oldp+1138,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1139,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 8U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 8U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                    >> 7U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1140,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 9U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 8U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1141,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1142,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1143,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 7U))));
            tracep->chgCData(oldp+1144,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1145,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1146,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1147,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1148,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1149,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1150,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1151,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1152,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1153,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1154,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1155,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1156,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1157,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1158,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1159,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1160,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1161,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1162,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1163,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1164,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1165,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1166,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1167,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1168,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1169,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1170,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1171,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1172,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1173,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1174,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1175,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1176,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1177,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1178,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1179,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1180,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1181,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1182,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1183,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1184,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1185,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1186,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1187,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1188,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1189,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1190,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1191,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1192,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1193,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1194,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1195,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1196,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1197,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1198,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1199,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1200,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1201,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1202,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1203,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1204,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1205,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1206,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1207,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1208,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1209,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1210,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1211,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1212,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1213,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1214,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1215,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1216,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1217,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1218,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1219,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1220,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1221,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1222,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1223,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1224,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1225,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1226,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1227,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1228,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1229,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1230,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1231,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1232,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1233,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1234,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1235,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1236,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1237,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1238,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1239,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__12__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1240,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU])) 
                                             << 0x13U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU])) 
                                               >> 0xdU)))),33);
            tracep->chgBit(oldp+1242,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1243,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1244,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1245,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1246,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1247,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1248,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1249,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1250,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1251,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1252,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1253,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1254,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1255,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1256,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1257,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1258,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1259,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1260,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1261,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1262,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1263,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1264,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1265,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1266,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1267,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1268,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1269,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1270,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1271,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1272,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1273,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1274,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1275,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1276,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1277,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1278,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1279,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1280,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1281,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1282,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1283,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1284,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1285,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1286,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0xdU))),3);
            tracep->chgBit(oldp+1287,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0xeU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0xeU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                    >> 0xdU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                   >> 0xdU))))));
            tracep->chgBit(oldp+1288,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0xfU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0xeU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1289,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1290,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1291,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1292,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1293,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1294,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1295,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1296,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1297,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1298,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0x13U))),3);
            tracep->chgBit(oldp+1299,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0x14U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0x14U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                    >> 0x13U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                   >> 0x13U))))));
            tracep->chgBit(oldp+1300,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0x15U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0x14U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1301,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1302,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1303,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1304,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1305,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1306,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1307,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1308,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1309,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1310,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0x19U))),3);
            tracep->chgBit(oldp+1311,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0x1aU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                    >> 0x19U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                   >> 0x19U))))));
            tracep->chgBit(oldp+1312,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0x1bU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0x1aU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1313,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1314,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1315,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1316,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1317,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1318,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1319,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1320,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1321,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1322,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                << 1U) 
                                               | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                  >> 0x1fU)))),3);
            tracep->chgBit(oldp+1323,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU]) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 1U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                   >> 0x1fU))))));
            tracep->chgBit(oldp+1324,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 1U) 
                                              ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU]) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1325,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1326,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU])));
            tracep->chgBit(oldp+1327,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xdU] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1328,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1329,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1330,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1331,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1332,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1333,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 2U))));
            tracep->chgCData(oldp+1334,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1335,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1336,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1337,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1338,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1339,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 5U))));
            tracep->chgCData(oldp+1340,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1341,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1342,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1343,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1344,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1345,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 8U))));
            tracep->chgCData(oldp+1346,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1347,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1348,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1349,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1350,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1351,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1352,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1353,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1354,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1355,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1356,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1357,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1358,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1359,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1360,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1361,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1362,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1363,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1364,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1365,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1366,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1367,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1368,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1369,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1370,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1371,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1372,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1373,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1374,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1375,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1376,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1377,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1378,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1379,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1380,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1381,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1382,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1383,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1384,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1385,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1386,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1387,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1388,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1389,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1390,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1391,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1392,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1393,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1394,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1395,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1396,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1397,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1398,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1399,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1400,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1401,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1402,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1403,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1404,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1405,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1406,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1407,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1408,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1409,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1410,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1411,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1412,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1413,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1414,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1415,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1416,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1417,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1418,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1419,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1420,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1421,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1422,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1423,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1424,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1425,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1426,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1427,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1428,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1429,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1430,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1431,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1432,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1433,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1434,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1435,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1436,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1437,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1438,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1439,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1440,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1441,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__13__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1442,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU])) 
                                             << 0x12U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU])) 
                                               >> 0xeU)))),33);
            tracep->chgBit(oldp+1444,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1445,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1446,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1447,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1448,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1449,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1450,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1451,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1452,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1453,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1454,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1455,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1456,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1457,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1458,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1459,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1460,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1461,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1462,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1463,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1464,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1465,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1466,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1467,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1468,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1469,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1470,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1471,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1472,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1473,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1474,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1475,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1476,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1477,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1478,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1479,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1480,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1481,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1482,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1483,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1484,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1485,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1486,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1487,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1488,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1489,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1490,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1491,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1492,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1493,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1494,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1495,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0x12U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0x12U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                    >> 0x11U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1496,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0x13U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0x12U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1497,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1498,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1499,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1500,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1501,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1502,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1503,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1504,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1505,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1506,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0x17U))),3);
            tracep->chgBit(oldp+1507,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0x18U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0x18U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                    >> 0x17U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                   >> 0x17U))))));
            tracep->chgBit(oldp+1508,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0x19U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0x18U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1509,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1510,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1511,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1512,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1513,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1514,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1515,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1516,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1517,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1518,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                         >> 0x1dU)),3);
            tracep->chgBit(oldp+1519,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0x1eU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                  >> 0x1eU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                    >> 0x1dU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+1520,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                               >> 0x1fU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                 >> 0x1eU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1521,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1522,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1523,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xeU] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1524,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU])),3);
            tracep->chgBit(oldp+1525,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU])) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU])))));
            tracep->chgBit(oldp+1526,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU]))));
            tracep->chgBit(oldp+1527,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1528,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1529,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU])));
            tracep->chgCData(oldp+1530,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1531,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 4U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 4U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                    >> 3U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1532,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 5U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 4U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1533,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1534,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1535,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 3U))));
            tracep->chgCData(oldp+1536,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1537,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1538,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1539,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1540,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1541,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 6U))));
            tracep->chgCData(oldp+1542,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1543,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0xaU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0xaU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                    >> 9U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1544,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0xbU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0xaU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1545,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1546,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1547,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 9U))));
            tracep->chgCData(oldp+1548,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1549,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1550,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1551,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1552,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1553,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1554,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1555,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1556,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1557,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1558,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1559,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1560,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1561,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1562,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1563,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1564,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1565,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1566,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1567,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1568,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1569,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1570,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1571,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1572,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1573,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1574,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1575,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1576,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1577,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1578,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1579,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1580,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1581,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1582,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1583,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1584,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1585,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1586,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1587,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1588,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1589,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1590,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1591,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1592,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1593,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1594,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1595,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1596,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1597,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1598,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1599,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1600,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1601,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1602,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1603,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1604,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1605,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1606,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1607,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1608,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1609,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1610,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1611,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1612,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1613,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1614,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1615,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1616,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1617,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1618,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1619,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1620,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1621,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1622,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1623,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1624,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1625,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1626,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1627,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1628,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1629,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1630,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1631,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1632,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1633,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1634,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1635,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1636,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1637,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1638,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1639,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1640,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1641,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1642,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1643,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__14__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1644,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U])) 
                                             << 0x11U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU])) 
                                               >> 0xfU)))),33);
            tracep->chgBit(oldp+1646,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1647,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1648,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1649,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1650,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1651,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1652,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1653,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1654,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1655,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1656,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1657,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1658,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1659,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1660,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1661,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1662,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1663,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1664,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1665,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1666,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1667,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1668,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1669,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1670,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1671,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1672,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1673,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1674,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1675,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1676,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1677,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1678,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1679,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1680,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1681,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1682,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1683,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1684,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1685,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1686,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1687,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1688,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1689,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1690,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1691,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1692,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1693,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1694,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1695,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1696,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1697,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1698,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1699,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1700,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1701,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1702,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0x15U))),3);
            tracep->chgBit(oldp+1703,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x16U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x16U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                    >> 0x15U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                   >> 0x15U))))));
            tracep->chgBit(oldp+1704,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0x17U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0x16U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1705,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1706,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1707,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1708,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1709,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1710,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1711,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1712,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1713,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1714,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0x1bU))),3);
            tracep->chgBit(oldp+1715,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x1cU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x1cU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                    >> 0x1bU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+1716,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                               >> 0x1dU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0x1cU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1717,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1718,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1719,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1720,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1721,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1722,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1723,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U])));
            tracep->chgBit(oldp+1724,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1725,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0xfU] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1726,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1727,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 2U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 2U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                    >> 1U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1728,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 3U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 2U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1729,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1730,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1731,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 1U))));
            tracep->chgCData(oldp+1732,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1733,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1734,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1735,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1736,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1737,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1738,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1739,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 8U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 8U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                    >> 7U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1740,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 9U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 8U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1741,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1742,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1743,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 7U))));
            tracep->chgCData(oldp+1744,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1745,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1746,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1747,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1748,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1749,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1750,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0xdU))),3);
            tracep->chgBit(oldp+1751,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0xeU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0xeU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                    >> 0xdU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                   >> 0xdU))))));
            tracep->chgBit(oldp+1752,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0xfU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0xeU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1753,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1754,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1755,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1756,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1757,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1758,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1759,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1760,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1761,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1762,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1763,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1764,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1765,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1766,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1767,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1768,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1769,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1770,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1771,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1772,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1773,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1774,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1775,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1776,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1777,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1778,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1779,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1780,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1781,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1782,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1783,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1784,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1785,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1786,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1787,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1788,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1789,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1790,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1791,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1792,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1793,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1794,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1795,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1796,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1797,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1798,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1799,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1800,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1801,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1802,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1803,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1804,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1805,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1806,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1807,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1808,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1809,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1810,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1811,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1812,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1813,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1814,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1815,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1816,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1817,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1818,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1819,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1820,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1821,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1822,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1823,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1824,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1825,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1826,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1827,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1828,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1829,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1830,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1831,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1832,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1833,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1834,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1835,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1836,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1837,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1838,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1839,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1840,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1841,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1842,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1843,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1844,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1845,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__15__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1846,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U])) 
                                             << 0x10U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U])) 
                                               >> 0x10U)))),33);
            tracep->chgBit(oldp+1848,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1849,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1850,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1851,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1852,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1853,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1854,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1855,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1856,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1857,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1858,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1859,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1860,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1861,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1862,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1863,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1864,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1865,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1866,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1867,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1868,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1869,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1870,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1871,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1872,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1873,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1874,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1875,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1876,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1877,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1878,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1879,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1880,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1881,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1882,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1883,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1884,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1885,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1886,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1887,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1888,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1889,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1890,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1891,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1892,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1893,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1894,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1895,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1896,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1897,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1898,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0x13U))),3);
            tracep->chgBit(oldp+1899,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0x14U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0x14U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                    >> 0x13U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                   >> 0x13U))))));
            tracep->chgBit(oldp+1900,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0x15U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0x14U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1901,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1902,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1903,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1904,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1905,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1906,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1907,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1908,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1909,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1910,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0x19U))),3);
            tracep->chgBit(oldp+1911,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0x1aU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                    >> 0x19U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                   >> 0x19U))))));
            tracep->chgBit(oldp+1912,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0x1bU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0x1aU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1913,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1914,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1915,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1916,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1917,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1918,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1919,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1920,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1921,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1922,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                << 1U) 
                                               | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                  >> 0x1fU)))),3);
            tracep->chgBit(oldp+1923,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U]) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 1U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                   >> 0x1fU))))));
            tracep->chgBit(oldp+1924,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 1U) 
                                              ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U]) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1925,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1926,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U])));
            tracep->chgBit(oldp+1927,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x10U] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1928,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1929,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1930,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1931,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1932,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1933,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1934,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1935,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1936,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1937,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1938,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1939,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 5U))));
            tracep->chgCData(oldp+1940,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1941,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1942,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1943,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1944,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1945,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1946,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1947,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1948,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1949,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1950,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1951,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1952,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1953,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1954,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1955,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1956,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1957,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1958,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1959,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1960,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1961,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1962,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1963,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1964,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1965,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1966,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1967,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1968,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1969,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1970,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1971,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1972,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1973,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1974,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1975,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1976,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1977,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1978,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1979,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1980,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1981,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1982,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1983,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))))));
        }
    }
}
