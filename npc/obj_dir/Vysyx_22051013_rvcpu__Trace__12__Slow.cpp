// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051013_rvcpu__Syms.h"


void Vysyx_22051013_rvcpu___024root__traceFullSub11(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+22587,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+22588,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+22589,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+22590,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
        tracep->fullQData(oldp+22591,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU])) 
                                           << 0x17U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU])) 
                                             >> 9U)))),33);
        tracep->fullBit(oldp+22593,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullBit(oldp+22594,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullSData(oldp+22595,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_s),11);
        tracep->fullSData(oldp+22596,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l1_c),11);
        tracep->fullCData(oldp+22597,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_s),7);
        tracep->fullCData(oldp+22598,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_c),7);
        tracep->fullIData(oldp+22599,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add),21);
        tracep->fullCData(oldp+22600,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_s),5);
        tracep->fullCData(oldp+22601,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_c),5);
        tracep->fullSData(oldp+22602,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add),15);
        tracep->fullCData(oldp+22603,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_c),3);
        tracep->fullCData(oldp+22604,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_s),3);
        tracep->fullSData(oldp+22605,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add),9);
        tracep->fullCData(oldp+22606,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_s),2);
        tracep->fullCData(oldp+22607,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_c),2);
        tracep->fullCData(oldp+22608,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add),6);
        tracep->fullBit(oldp+22609,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullBit(oldp+22610,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullCData(oldp+22611,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l6_add),3);
        tracep->fullBit(oldp+22612,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullBit(oldp+22613,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullCData(oldp+22614,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l7_add),3);
        tracep->fullCData(oldp+22615,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l8_add),3);
        tracep->fullCData(oldp+22616,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add))),3);
        tracep->fullBit(oldp+22617,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+22618,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+22619,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22620,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22621,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add))));
        tracep->fullCData(oldp+22622,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+22623,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add)))))));
        tracep->fullBit(oldp+22624,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+22625,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+22626,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+22627,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l5_add) 
                                           >> 3U))));
        tracep->fullBit(oldp+22628,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l6_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22629,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l6_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22630,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l6_add))));
        tracep->fullBit(oldp+22631,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l7_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22632,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l7_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22633,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l7_add))));
        tracep->fullBit(oldp+22634,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l8_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22635,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l8_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22636,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l8_add))));
        tracep->fullCData(oldp+22637,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 9U))),3);
        tracep->fullBit(oldp+22638,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0xbU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0xaU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 9U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 9U))))));
        tracep->fullBit(oldp+22639,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0xbU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0xaU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 9U)))));
        tracep->fullBit(oldp+22640,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+22641,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+22642,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 9U))));
        tracep->fullCData(oldp+22643,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+22644,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0xeU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0xdU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0xcU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0xcU))))));
        tracep->fullBit(oldp+22645,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0xeU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0xdU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0xcU)))));
        tracep->fullBit(oldp+22646,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+22647,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+22648,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0xcU))));
        tracep->fullCData(oldp+22649,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+22650,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0x11U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x10U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0xfU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0xfU))))));
        tracep->fullBit(oldp+22651,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0x11U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x10U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0xfU)))));
        tracep->fullBit(oldp+22652,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+22653,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+22654,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0xfU))));
        tracep->fullCData(oldp+22655,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+22656,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0x14U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x13U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0x12U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0x12U))))));
        tracep->fullBit(oldp+22657,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0x14U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x13U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0x12U)))));
        tracep->fullBit(oldp+22658,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+22659,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+22660,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x12U))));
        tracep->fullCData(oldp+22661,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0x15U))),3);
        tracep->fullBit(oldp+22662,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0x17U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x16U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0x15U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0x15U))))));
        tracep->fullBit(oldp+22663,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0x17U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x16U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0x15U)))));
        tracep->fullBit(oldp+22664,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+22665,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+22666,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+22667,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0x18U))),3);
        tracep->fullBit(oldp+22668,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0x1aU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x19U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0x18U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0x18U))))));
        tracep->fullBit(oldp+22669,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0x1aU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x19U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0x18U)))));
        tracep->fullBit(oldp+22670,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+22671,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+22672,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x18U))));
        tracep->fullCData(oldp+22673,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0x1bU))),3);
        tracep->fullBit(oldp+22674,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0x1dU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x1cU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0x1bU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0x1bU))))));
        tracep->fullBit(oldp+22675,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 0x1dU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x1cU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0x1bU)))));
        tracep->fullBit(oldp+22676,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+22677,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+22678,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x1bU))));
        tracep->fullCData(oldp+22679,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              << 2U) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x1eU)))),3);
        tracep->fullBit(oldp+22680,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x1fU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 0x1eU))) 
                                           | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 0x1eU))))));
        tracep->fullBit(oldp+22681,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 0x1fU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                              >> 0x1eU)))));
        tracep->fullBit(oldp+22682,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU])));
        tracep->fullBit(oldp+22683,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+22684,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                           >> 0x1eU))));
        tracep->fullCData(oldp+22685,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 1U))),3);
        tracep->fullBit(oldp+22686,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 3U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 2U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 1U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 1U))))));
        tracep->fullBit(oldp+22687,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 3U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 2U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 1U)))));
        tracep->fullBit(oldp+22688,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 3U))));
        tracep->fullBit(oldp+22689,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 2U))));
        tracep->fullBit(oldp+22690,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 1U))));
        tracep->fullCData(oldp+22691,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 4U))),3);
        tracep->fullBit(oldp+22692,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 6U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 5U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 4U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 4U))))));
        tracep->fullBit(oldp+22693,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 6U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 5U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 4U)))));
        tracep->fullBit(oldp+22694,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 6U))));
        tracep->fullBit(oldp+22695,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 5U))));
        tracep->fullBit(oldp+22696,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 4U))));
        tracep->fullCData(oldp+22697,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 7U))),3);
        tracep->fullBit(oldp+22698,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 9U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 8U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 7U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 7U))))));
        tracep->fullBit(oldp+22699,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 9U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 8U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 7U)))));
        tracep->fullBit(oldp+22700,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 9U))));
        tracep->fullBit(oldp+22701,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 8U))));
        tracep->fullBit(oldp+22702,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 7U))));
        tracep->fullCData(oldp+22703,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)),3);
        tracep->fullBit(oldp+22704,((1U & (((6U == 
                                             (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22705,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22706,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 2U))));
        tracep->fullBit(oldp+22707,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 1U))));
        tracep->fullBit(oldp+22708,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)));
        tracep->fullCData(oldp+22709,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))),3);
        tracep->fullBit(oldp+22710,((1U & (((0x30U 
                                             == (0x30U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22711,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22712,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 5U))));
        tracep->fullBit(oldp+22713,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 4U))));
        tracep->fullBit(oldp+22714,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 3U))));
        tracep->fullCData(oldp+22715,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))),3);
        tracep->fullBit(oldp+22716,((1U & (((0x180U 
                                             == (0x180U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22717,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22718,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 8U))));
        tracep->fullBit(oldp+22719,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 7U))));
        tracep->fullBit(oldp+22720,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 6U))));
        tracep->fullCData(oldp+22721,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))),3);
        tracep->fullBit(oldp+22722,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22723,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22724,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
        tracep->fullBit(oldp+22725,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
        tracep->fullBit(oldp+22726,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
        tracep->fullCData(oldp+22727,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+22728,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22729,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22730,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
        tracep->fullBit(oldp+22731,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 0xdU))));
        tracep->fullBit(oldp+22732,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 0xcU))));
        tracep->fullCData(oldp+22733,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+22734,((1U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28000U 
                                              == (0x28000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22735,((1U & VL_REDXOR_32(
                                                       (0x38000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22736,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 0x11U))));
        tracep->fullBit(oldp+22737,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 0x10U))));
        tracep->fullBit(oldp+22738,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 0xfU))));
        tracep->fullCData(oldp+22739,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+22740,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22741,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22742,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
        tracep->fullBit(oldp+22743,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
        tracep->fullBit(oldp+22744,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
        tracep->fullCData(oldp+22745,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))),3);
        tracep->fullBit(oldp+22746,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22747,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22748,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22749,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22750,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))));
        tracep->fullCData(oldp+22751,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+22752,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+22753,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22754,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+22755,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+22756,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+22757,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+22758,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+22759,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22760,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+22761,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+22762,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 6U))));
        tracep->fullCData(oldp+22763,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))),3);
        tracep->fullBit(oldp+22764,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+22765,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22766,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+22767,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+22768,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 9U))));
        tracep->fullCData(oldp+22769,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+22770,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+22771,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22772,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+22773,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+22774,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xcU))));
        tracep->fullCData(oldp+22775,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add))),3);
        tracep->fullBit(oldp+22776,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+22777,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+22778,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22779,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22780,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add))));
        tracep->fullCData(oldp+22781,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+22782,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+22783,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+22784,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+22785,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+22786,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+22787,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+22788,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+22789,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+22790,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+22791,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+22792,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__105__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
        tracep->fullQData(oldp+22793,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU])) 
                                           << 0x16U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU])) 
                                             >> 0xaU)))),33);
        tracep->fullBit(oldp+22795,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullBit(oldp+22796,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullSData(oldp+22797,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_s),11);
        tracep->fullSData(oldp+22798,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l1_c),11);
        tracep->fullCData(oldp+22799,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_s),7);
        tracep->fullCData(oldp+22800,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_c),7);
        tracep->fullIData(oldp+22801,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add),21);
        tracep->fullCData(oldp+22802,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_s),5);
        tracep->fullCData(oldp+22803,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_c),5);
        tracep->fullSData(oldp+22804,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add),15);
        tracep->fullCData(oldp+22805,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_c),3);
        tracep->fullCData(oldp+22806,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_s),3);
        tracep->fullSData(oldp+22807,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add),9);
        tracep->fullCData(oldp+22808,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_s),2);
        tracep->fullCData(oldp+22809,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_c),2);
        tracep->fullCData(oldp+22810,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add),6);
        tracep->fullBit(oldp+22811,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullBit(oldp+22812,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullCData(oldp+22813,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l6_add),3);
        tracep->fullBit(oldp+22814,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullBit(oldp+22815,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullCData(oldp+22816,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l7_add),3);
        tracep->fullCData(oldp+22817,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l8_add),3);
        tracep->fullCData(oldp+22818,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add))),3);
        tracep->fullBit(oldp+22819,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+22820,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+22821,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22822,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22823,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add))));
        tracep->fullCData(oldp+22824,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+22825,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add)))))));
        tracep->fullBit(oldp+22826,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+22827,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+22828,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+22829,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l5_add) 
                                           >> 3U))));
        tracep->fullBit(oldp+22830,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l6_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22831,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l6_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22832,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l6_add))));
        tracep->fullBit(oldp+22833,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l7_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22834,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l7_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22835,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l7_add))));
        tracep->fullBit(oldp+22836,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l8_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22837,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l8_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22838,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l8_add))));
        tracep->fullCData(oldp+22839,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0xaU))),3);
        tracep->fullBit(oldp+22840,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0xcU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0xbU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0xaU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0xaU))))));
        tracep->fullBit(oldp+22841,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0xcU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0xbU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0xaU)))));
        tracep->fullBit(oldp+22842,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+22843,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+22844,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0xaU))));
        tracep->fullCData(oldp+22845,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0xdU))),3);
        tracep->fullBit(oldp+22846,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0xfU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0xeU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0xdU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0xdU))))));
        tracep->fullBit(oldp+22847,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0xfU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0xeU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0xdU)))));
        tracep->fullBit(oldp+22848,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+22849,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+22850,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0xdU))));
        tracep->fullCData(oldp+22851,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0x10U))),3);
        tracep->fullBit(oldp+22852,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x12U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x11U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0x10U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0x10U))))));
        tracep->fullBit(oldp+22853,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0x12U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x11U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x10U)))));
        tracep->fullBit(oldp+22854,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+22855,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+22856,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x10U))));
        tracep->fullCData(oldp+22857,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0x13U))),3);
        tracep->fullBit(oldp+22858,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x15U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x14U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0x13U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0x13U))))));
        tracep->fullBit(oldp+22859,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0x15U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x14U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x13U)))));
        tracep->fullBit(oldp+22860,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+22861,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+22862,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x13U))));
        tracep->fullCData(oldp+22863,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0x16U))),3);
        tracep->fullBit(oldp+22864,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x18U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x17U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0x16U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0x16U))))));
        tracep->fullBit(oldp+22865,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0x18U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x17U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x16U)))));
        tracep->fullBit(oldp+22866,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+22867,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+22868,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x16U))));
        tracep->fullCData(oldp+22869,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0x19U))),3);
        tracep->fullBit(oldp+22870,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x1bU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x1aU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0x19U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0x19U))))));
        tracep->fullBit(oldp+22871,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0x1bU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x1aU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+22872,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+22873,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+22874,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x19U))));
        tracep->fullCData(oldp+22875,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0x1cU))),3);
        tracep->fullBit(oldp+22876,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x1eU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x1dU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0x1cU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0x1cU))))));
        tracep->fullBit(oldp+22877,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                             >> 0x1eU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                               >> 0x1dU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x1cU)))));
        tracep->fullBit(oldp+22878,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+22879,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+22880,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                           >> 0x1cU))));
        tracep->fullCData(oldp+22881,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              << 1U) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                >> 0x1fU)))),3);
        tracep->fullBit(oldp+22882,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 1U) 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU]) 
                                            | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                  >> 0x1fU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 1U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                                 >> 0x1fU))))));
        tracep->fullBit(oldp+22883,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 1U) 
                                            ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU]) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                              >> 0x1fU)))));
        tracep->fullBit(oldp+22884,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 1U))));
        tracep->fullBit(oldp+22885,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU])));
        tracep->fullBit(oldp+22886,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6dU] 
                                     >> 0x1fU)));
        tracep->fullCData(oldp+22887,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 2U))),3);
        tracep->fullBit(oldp+22888,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 4U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 3U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 2U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 2U))))));
        tracep->fullBit(oldp+22889,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 4U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 3U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 2U)))));
        tracep->fullBit(oldp+22890,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 4U))));
        tracep->fullBit(oldp+22891,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 3U))));
        tracep->fullBit(oldp+22892,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 2U))));
        tracep->fullCData(oldp+22893,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 5U))),3);
        tracep->fullBit(oldp+22894,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 7U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 6U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 5U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 5U))))));
        tracep->fullBit(oldp+22895,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 7U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 6U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 5U)))));
        tracep->fullBit(oldp+22896,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 7U))));
        tracep->fullBit(oldp+22897,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 6U))));
        tracep->fullBit(oldp+22898,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 5U))));
        tracep->fullCData(oldp+22899,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 8U))),3);
        tracep->fullBit(oldp+22900,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0xaU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 9U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 8U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 8U))))));
        tracep->fullBit(oldp+22901,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0xaU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 9U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 8U)))));
        tracep->fullBit(oldp+22902,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+22903,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 9U))));
        tracep->fullBit(oldp+22904,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 8U))));
        tracep->fullCData(oldp+22905,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)),3);
        tracep->fullBit(oldp+22906,((1U & (((6U == 
                                             (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22907,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22908,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 2U))));
        tracep->fullBit(oldp+22909,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 1U))));
        tracep->fullBit(oldp+22910,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)));
        tracep->fullCData(oldp+22911,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))),3);
        tracep->fullBit(oldp+22912,((1U & (((0x30U 
                                             == (0x30U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22913,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22914,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 5U))));
        tracep->fullBit(oldp+22915,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 4U))));
        tracep->fullBit(oldp+22916,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 3U))));
        tracep->fullCData(oldp+22917,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))),3);
        tracep->fullBit(oldp+22918,((1U & (((0x180U 
                                             == (0x180U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22919,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22920,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 8U))));
        tracep->fullBit(oldp+22921,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 7U))));
        tracep->fullBit(oldp+22922,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 6U))));
        tracep->fullCData(oldp+22923,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))),3);
        tracep->fullBit(oldp+22924,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22925,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22926,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
        tracep->fullBit(oldp+22927,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
        tracep->fullBit(oldp+22928,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
        tracep->fullCData(oldp+22929,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+22930,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22931,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22932,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
        tracep->fullBit(oldp+22933,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 0xdU))));
        tracep->fullBit(oldp+22934,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 0xcU))));
        tracep->fullCData(oldp+22935,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+22936,((1U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28000U 
                                              == (0x28000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22937,((1U & VL_REDXOR_32(
                                                       (0x38000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22938,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 0x11U))));
        tracep->fullBit(oldp+22939,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 0x10U))));
        tracep->fullBit(oldp+22940,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 0xfU))));
        tracep->fullCData(oldp+22941,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+22942,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+22943,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+22944,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
        tracep->fullBit(oldp+22945,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
        tracep->fullBit(oldp+22946,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
        tracep->fullCData(oldp+22947,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))),3);
        tracep->fullBit(oldp+22948,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22949,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22950,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22951,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22952,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))));
        tracep->fullCData(oldp+22953,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+22954,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+22955,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22956,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+22957,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+22958,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+22959,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+22960,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+22961,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22962,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+22963,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+22964,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 6U))));
        tracep->fullCData(oldp+22965,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))),3);
        tracep->fullBit(oldp+22966,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+22967,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22968,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+22969,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+22970,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 9U))));
        tracep->fullCData(oldp+22971,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+22972,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+22973,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+22974,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+22975,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+22976,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xcU))));
        tracep->fullCData(oldp+22977,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add))),3);
        tracep->fullBit(oldp+22978,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+22979,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+22980,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+22981,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+22982,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add))));
        tracep->fullCData(oldp+22983,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+22984,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+22985,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+22986,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+22987,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+22988,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+22989,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+22990,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+22991,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+22992,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+22993,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+22994,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__106__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
        tracep->fullQData(oldp+22995,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU])) 
                                           << 0x15U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU])) 
                                             >> 0xbU)))),33);
        tracep->fullBit(oldp+22997,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullBit(oldp+22998,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullSData(oldp+22999,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_s),11);
        tracep->fullSData(oldp+23000,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l1_c),11);
        tracep->fullCData(oldp+23001,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_s),7);
        tracep->fullCData(oldp+23002,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_c),7);
        tracep->fullIData(oldp+23003,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add),21);
        tracep->fullCData(oldp+23004,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_s),5);
        tracep->fullCData(oldp+23005,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_c),5);
        tracep->fullSData(oldp+23006,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add),15);
        tracep->fullCData(oldp+23007,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_c),3);
        tracep->fullCData(oldp+23008,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_s),3);
        tracep->fullSData(oldp+23009,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add),9);
        tracep->fullCData(oldp+23010,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_s),2);
        tracep->fullCData(oldp+23011,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_c),2);
        tracep->fullCData(oldp+23012,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add),6);
        tracep->fullBit(oldp+23013,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullBit(oldp+23014,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullCData(oldp+23015,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l6_add),3);
        tracep->fullBit(oldp+23016,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullBit(oldp+23017,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullCData(oldp+23018,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l7_add),3);
        tracep->fullCData(oldp+23019,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l8_add),3);
        tracep->fullCData(oldp+23020,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add))),3);
        tracep->fullBit(oldp+23021,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23022,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23023,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23024,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23025,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add))));
        tracep->fullCData(oldp+23026,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23027,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add)))))));
        tracep->fullBit(oldp+23028,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23029,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23030,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23031,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l5_add) 
                                           >> 3U))));
        tracep->fullBit(oldp+23032,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l6_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23033,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l6_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23034,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l6_add))));
        tracep->fullBit(oldp+23035,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l7_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23036,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l7_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23037,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l7_add))));
        tracep->fullBit(oldp+23038,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l8_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23039,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l8_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23040,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l8_add))));
        tracep->fullCData(oldp+23041,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0xbU))),3);
        tracep->fullBit(oldp+23042,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0xdU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0xcU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0xbU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0xbU))))));
        tracep->fullBit(oldp+23043,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0xdU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0xcU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0xbU)))));
        tracep->fullBit(oldp+23044,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23045,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+23046,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0xbU))));
        tracep->fullCData(oldp+23047,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0xeU))),3);
        tracep->fullBit(oldp+23048,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0x10U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0xfU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0xeU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0xeU))))));
        tracep->fullBit(oldp+23049,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0x10U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0xfU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0xeU)))));
        tracep->fullBit(oldp+23050,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+23051,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+23052,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0xeU))));
        tracep->fullCData(oldp+23053,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0x11U))),3);
        tracep->fullBit(oldp+23054,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0x13U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x12U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0x11U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0x11U))))));
        tracep->fullBit(oldp+23055,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0x13U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x12U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0x11U)))));
        tracep->fullBit(oldp+23056,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+23057,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+23058,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x11U))));
        tracep->fullCData(oldp+23059,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0x14U))),3);
        tracep->fullBit(oldp+23060,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0x16U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x15U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0x14U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0x14U))))));
        tracep->fullBit(oldp+23061,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0x16U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x15U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0x14U)))));
        tracep->fullBit(oldp+23062,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+23063,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+23064,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x14U))));
        tracep->fullCData(oldp+23065,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0x17U))),3);
        tracep->fullBit(oldp+23066,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0x19U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x18U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0x17U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0x17U))))));
        tracep->fullBit(oldp+23067,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0x19U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x18U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0x17U)))));
        tracep->fullBit(oldp+23068,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+23069,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+23070,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x17U))));
        tracep->fullCData(oldp+23071,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0x1aU))),3);
        tracep->fullBit(oldp+23072,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0x1cU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x1bU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0x1aU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0x1aU))))));
        tracep->fullBit(oldp+23073,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0x1cU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x1bU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0x1aU)))));
        tracep->fullBit(oldp+23074,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+23075,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+23076,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x1aU))));
        tracep->fullCData(oldp+23077,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                       >> 0x1dU)),3);
        tracep->fullBit(oldp+23078,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0x1fU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x1eU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                  >> 0x1dU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                                 >> 0x1dU))))));
        tracep->fullBit(oldp+23079,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                             >> 0x1fU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                               >> 0x1eU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+23080,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+23081,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+23082,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6eU] 
                                           >> 0x1dU))));
        tracep->fullCData(oldp+23083,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU])),3);
        tracep->fullBit(oldp+23084,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 2U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 1U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU])) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU])))));
        tracep->fullBit(oldp+23085,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 2U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 1U)) 
                                           ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU]))));
        tracep->fullBit(oldp+23086,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 2U))));
        tracep->fullBit(oldp+23087,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 1U))));
        tracep->fullBit(oldp+23088,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU])));
        tracep->fullCData(oldp+23089,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23090,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 5U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 4U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 3U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 3U))))));
        tracep->fullBit(oldp+23091,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 5U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 4U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 3U)))));
        tracep->fullBit(oldp+23092,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 5U))));
        tracep->fullBit(oldp+23093,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 4U))));
        tracep->fullBit(oldp+23094,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 3U))));
        tracep->fullCData(oldp+23095,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23096,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 8U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 7U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 6U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 6U))))));
        tracep->fullBit(oldp+23097,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 8U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 7U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 6U)))));
        tracep->fullBit(oldp+23098,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 8U))));
        tracep->fullBit(oldp+23099,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 7U))));
        tracep->fullBit(oldp+23100,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 6U))));
        tracep->fullCData(oldp+23101,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23102,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0xbU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0xaU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 9U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 9U))))));
        tracep->fullBit(oldp+23103,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0xbU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0xaU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 9U)))));
        tracep->fullBit(oldp+23104,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23105,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23106,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 9U))));
        tracep->fullCData(oldp+23107,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)),3);
        tracep->fullBit(oldp+23108,((1U & (((6U == 
                                             (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23109,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23110,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 2U))));
        tracep->fullBit(oldp+23111,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 1U))));
        tracep->fullBit(oldp+23112,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)));
        tracep->fullCData(oldp+23113,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23114,((1U & (((0x30U 
                                             == (0x30U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23115,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23116,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 5U))));
        tracep->fullBit(oldp+23117,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 4U))));
        tracep->fullBit(oldp+23118,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 3U))));
        tracep->fullCData(oldp+23119,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23120,((1U & (((0x180U 
                                             == (0x180U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23121,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23122,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 8U))));
        tracep->fullBit(oldp+23123,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 7U))));
        tracep->fullBit(oldp+23124,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 6U))));
        tracep->fullCData(oldp+23125,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23126,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23127,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23128,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23129,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23130,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
        tracep->fullCData(oldp+23131,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23132,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23133,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23134,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23135,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23136,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23137,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+23138,((1U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28000U 
                                              == (0x28000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23139,((1U & VL_REDXOR_32(
                                                       (0x38000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23140,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 0x11U))));
        tracep->fullBit(oldp+23141,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 0x10U))));
        tracep->fullBit(oldp+23142,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 0xfU))));
        tracep->fullCData(oldp+23143,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+23144,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23145,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23146,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
        tracep->fullBit(oldp+23147,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
        tracep->fullBit(oldp+23148,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
        tracep->fullCData(oldp+23149,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))),3);
        tracep->fullBit(oldp+23150,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23151,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23152,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23153,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23154,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))));
        tracep->fullCData(oldp+23155,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23156,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23157,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23158,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23159,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23160,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+23161,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23162,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23163,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23164,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+23165,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+23166,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 6U))));
        tracep->fullCData(oldp+23167,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23168,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23169,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23170,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23171,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23172,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 9U))));
        tracep->fullCData(oldp+23173,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23174,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23175,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23176,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23177,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23178,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23179,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add))),3);
        tracep->fullBit(oldp+23180,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23181,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23182,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23183,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23184,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add))));
        tracep->fullCData(oldp+23185,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23186,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+23187,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23188,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23189,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23190,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+23191,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23192,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+23193,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23194,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+23195,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+23196,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__107__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
        tracep->fullQData(oldp+23197,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U])) 
                                           << 0x14U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU])) 
                                             >> 0xcU)))),33);
        tracep->fullBit(oldp+23199,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullBit(oldp+23200,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullSData(oldp+23201,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_s),11);
        tracep->fullSData(oldp+23202,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l1_c),11);
        tracep->fullCData(oldp+23203,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_s),7);
        tracep->fullCData(oldp+23204,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_c),7);
        tracep->fullIData(oldp+23205,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add),21);
        tracep->fullCData(oldp+23206,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_s),5);
        tracep->fullCData(oldp+23207,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_c),5);
        tracep->fullSData(oldp+23208,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add),15);
        tracep->fullCData(oldp+23209,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_c),3);
        tracep->fullCData(oldp+23210,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_s),3);
        tracep->fullSData(oldp+23211,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add),9);
        tracep->fullCData(oldp+23212,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_s),2);
        tracep->fullCData(oldp+23213,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_c),2);
        tracep->fullCData(oldp+23214,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add),6);
        tracep->fullBit(oldp+23215,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullBit(oldp+23216,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullCData(oldp+23217,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l6_add),3);
        tracep->fullBit(oldp+23218,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullBit(oldp+23219,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullCData(oldp+23220,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l7_add),3);
        tracep->fullCData(oldp+23221,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l8_add),3);
        tracep->fullCData(oldp+23222,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add))),3);
        tracep->fullBit(oldp+23223,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23224,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23225,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23226,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23227,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add))));
        tracep->fullCData(oldp+23228,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23229,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add)))))));
        tracep->fullBit(oldp+23230,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23231,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23232,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23233,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l5_add) 
                                           >> 3U))));
        tracep->fullBit(oldp+23234,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l6_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23235,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l6_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23236,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l6_add))));
        tracep->fullBit(oldp+23237,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l7_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23238,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l7_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23239,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l7_add))));
        tracep->fullBit(oldp+23240,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l8_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23241,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l8_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23242,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l8_add))));
        tracep->fullCData(oldp+23243,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23244,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0xeU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0xdU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 0xcU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0xcU))))));
        tracep->fullBit(oldp+23245,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0xeU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0xdU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0xcU)))));
        tracep->fullBit(oldp+23246,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23247,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23248,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23249,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+23250,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x11U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x10U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 0xfU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0xfU))))));
        tracep->fullBit(oldp+23251,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0x11U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x10U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0xfU)))));
        tracep->fullBit(oldp+23252,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+23253,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+23254,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0xfU))));
        tracep->fullCData(oldp+23255,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+23256,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x14U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x13U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 0x12U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0x12U))))));
        tracep->fullBit(oldp+23257,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0x14U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x13U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x12U)))));
        tracep->fullBit(oldp+23258,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+23259,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+23260,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x12U))));
        tracep->fullCData(oldp+23261,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0x15U))),3);
        tracep->fullBit(oldp+23262,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x17U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x16U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 0x15U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0x15U))))));
        tracep->fullBit(oldp+23263,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0x17U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x16U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x15U)))));
        tracep->fullBit(oldp+23264,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+23265,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+23266,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+23267,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0x18U))),3);
        tracep->fullBit(oldp+23268,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x1aU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x19U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 0x18U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0x18U))))));
        tracep->fullBit(oldp+23269,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0x1aU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x19U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x18U)))));
        tracep->fullBit(oldp+23270,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+23271,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+23272,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x18U))));
        tracep->fullCData(oldp+23273,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0x1bU))),3);
        tracep->fullBit(oldp+23274,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x1dU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x1cU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 0x1bU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0x1bU))))));
        tracep->fullBit(oldp+23275,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                             >> 0x1dU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x1cU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x1bU)))));
        tracep->fullBit(oldp+23276,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+23277,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+23278,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x1bU))));
        tracep->fullCData(oldp+23279,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              << 2U) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x1eU)))),3);
        tracep->fullBit(oldp+23280,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x1fU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                  >> 0x1eU))) 
                                           | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                                 >> 0x1eU))))));
        tracep->fullBit(oldp+23281,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                               >> 0x1fU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                              >> 0x1eU)))));
        tracep->fullBit(oldp+23282,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U])));
        tracep->fullBit(oldp+23283,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+23284,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6fU] 
                                           >> 0x1eU))));
        tracep->fullCData(oldp+23285,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 1U))),3);
        tracep->fullBit(oldp+23286,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 3U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 2U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 1U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 1U))))));
        tracep->fullBit(oldp+23287,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 3U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 2U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 1U)))));
        tracep->fullBit(oldp+23288,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 3U))));
        tracep->fullBit(oldp+23289,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 2U))));
        tracep->fullBit(oldp+23290,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 1U))));
        tracep->fullCData(oldp+23291,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 4U))),3);
        tracep->fullBit(oldp+23292,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 6U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 5U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 4U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 4U))))));
        tracep->fullBit(oldp+23293,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 6U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 5U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 4U)))));
        tracep->fullBit(oldp+23294,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 6U))));
        tracep->fullBit(oldp+23295,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 5U))));
        tracep->fullBit(oldp+23296,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 4U))));
        tracep->fullCData(oldp+23297,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 7U))),3);
        tracep->fullBit(oldp+23298,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 9U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 8U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 7U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 7U))))));
        tracep->fullBit(oldp+23299,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 9U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 8U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 7U)))));
        tracep->fullBit(oldp+23300,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 9U))));
        tracep->fullBit(oldp+23301,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 8U))));
        tracep->fullBit(oldp+23302,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 7U))));
        tracep->fullCData(oldp+23303,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0xaU))),3);
        tracep->fullBit(oldp+23304,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0xcU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0xbU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0xaU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0xaU))))));
        tracep->fullBit(oldp+23305,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0xcU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0xbU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0xaU)))));
        tracep->fullBit(oldp+23306,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+23307,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23308,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0xaU))));
        tracep->fullCData(oldp+23309,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)),3);
        tracep->fullBit(oldp+23310,((1U & (((6U == 
                                             (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23311,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23312,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 2U))));
        tracep->fullBit(oldp+23313,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 1U))));
        tracep->fullBit(oldp+23314,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)));
        tracep->fullCData(oldp+23315,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23316,((1U & (((0x30U 
                                             == (0x30U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23317,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23318,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 5U))));
        tracep->fullBit(oldp+23319,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 4U))));
        tracep->fullBit(oldp+23320,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 3U))));
        tracep->fullCData(oldp+23321,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23322,((1U & (((0x180U 
                                             == (0x180U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23323,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23324,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 8U))));
        tracep->fullBit(oldp+23325,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 7U))));
        tracep->fullBit(oldp+23326,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 6U))));
        tracep->fullCData(oldp+23327,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23328,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23329,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23330,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23331,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23332,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
        tracep->fullCData(oldp+23333,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23334,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23335,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23336,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23337,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23338,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23339,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+23340,((1U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28000U 
                                              == (0x28000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23341,((1U & VL_REDXOR_32(
                                                       (0x38000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23342,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 0x11U))));
        tracep->fullBit(oldp+23343,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 0x10U))));
        tracep->fullBit(oldp+23344,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 0xfU))));
        tracep->fullCData(oldp+23345,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+23346,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23347,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23348,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
        tracep->fullBit(oldp+23349,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
        tracep->fullBit(oldp+23350,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
        tracep->fullCData(oldp+23351,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))),3);
        tracep->fullBit(oldp+23352,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23353,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23354,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23355,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23356,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))));
        tracep->fullCData(oldp+23357,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23358,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23359,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23360,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23361,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23362,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+23363,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23364,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23365,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23366,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+23367,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+23368,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 6U))));
        tracep->fullCData(oldp+23369,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23370,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23371,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23372,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23373,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23374,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 9U))));
        tracep->fullCData(oldp+23375,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23376,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23377,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23378,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23379,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23380,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23381,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add))),3);
        tracep->fullBit(oldp+23382,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23383,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23384,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23385,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23386,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add))));
        tracep->fullCData(oldp+23387,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23388,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+23389,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23390,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23391,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23392,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+23393,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23394,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+23395,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23396,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+23397,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+23398,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__108__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
        tracep->fullQData(oldp+23399,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U])) 
                                           << 0x13U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U])) 
                                             >> 0xdU)))),33);
        tracep->fullBit(oldp+23401,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullBit(oldp+23402,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullSData(oldp+23403,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_s),11);
        tracep->fullSData(oldp+23404,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l1_c),11);
        tracep->fullCData(oldp+23405,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_s),7);
        tracep->fullCData(oldp+23406,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_c),7);
        tracep->fullIData(oldp+23407,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add),21);
        tracep->fullCData(oldp+23408,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_s),5);
        tracep->fullCData(oldp+23409,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_c),5);
        tracep->fullSData(oldp+23410,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add),15);
        tracep->fullCData(oldp+23411,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_c),3);
        tracep->fullCData(oldp+23412,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_s),3);
        tracep->fullSData(oldp+23413,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add),9);
        tracep->fullCData(oldp+23414,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_s),2);
        tracep->fullCData(oldp+23415,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_c),2);
        tracep->fullCData(oldp+23416,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add),6);
        tracep->fullBit(oldp+23417,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullBit(oldp+23418,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullCData(oldp+23419,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l6_add),3);
        tracep->fullBit(oldp+23420,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullBit(oldp+23421,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullCData(oldp+23422,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l7_add),3);
        tracep->fullCData(oldp+23423,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l8_add),3);
        tracep->fullCData(oldp+23424,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add))),3);
        tracep->fullBit(oldp+23425,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23426,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23427,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23428,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23429,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add))));
        tracep->fullCData(oldp+23430,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23431,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add)))))));
        tracep->fullBit(oldp+23432,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23433,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23434,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23435,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l5_add) 
                                           >> 3U))));
        tracep->fullBit(oldp+23436,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l6_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23437,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l6_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23438,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l6_add))));
        tracep->fullBit(oldp+23439,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l7_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23440,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l7_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23441,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l7_add))));
        tracep->fullBit(oldp+23442,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l8_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23443,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l8_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23444,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l8_add))));
        tracep->fullCData(oldp+23445,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0xdU))),3);
        tracep->fullBit(oldp+23446,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0xfU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0xeU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0xdU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0xdU))))));
        tracep->fullBit(oldp+23447,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0xfU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0xeU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0xdU)))));
        tracep->fullBit(oldp+23448,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+23449,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23450,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0xdU))));
        tracep->fullCData(oldp+23451,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0x10U))),3);
        tracep->fullBit(oldp+23452,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x12U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x11U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0x10U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0x10U))))));
        tracep->fullBit(oldp+23453,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0x12U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x11U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x10U)))));
        tracep->fullBit(oldp+23454,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+23455,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+23456,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x10U))));
        tracep->fullCData(oldp+23457,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0x13U))),3);
        tracep->fullBit(oldp+23458,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x15U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x14U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0x13U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0x13U))))));
        tracep->fullBit(oldp+23459,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0x15U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x14U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x13U)))));
        tracep->fullBit(oldp+23460,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+23461,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+23462,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x13U))));
        tracep->fullCData(oldp+23463,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0x16U))),3);
        tracep->fullBit(oldp+23464,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x18U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x17U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0x16U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0x16U))))));
        tracep->fullBit(oldp+23465,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0x18U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x17U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x16U)))));
        tracep->fullBit(oldp+23466,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+23467,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+23468,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x16U))));
        tracep->fullCData(oldp+23469,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0x19U))),3);
        tracep->fullBit(oldp+23470,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x1bU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x1aU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0x19U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0x19U))))));
        tracep->fullBit(oldp+23471,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0x1bU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x1aU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+23472,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+23473,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+23474,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x19U))));
        tracep->fullCData(oldp+23475,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0x1cU))),3);
        tracep->fullBit(oldp+23476,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x1eU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x1dU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0x1cU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0x1cU))))));
        tracep->fullBit(oldp+23477,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                             >> 0x1eU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                               >> 0x1dU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x1cU)))));
        tracep->fullBit(oldp+23478,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+23479,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+23480,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                           >> 0x1cU))));
        tracep->fullCData(oldp+23481,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              << 1U) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                >> 0x1fU)))),3);
        tracep->fullBit(oldp+23482,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 1U) 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U]) 
                                            | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                  >> 0x1fU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 1U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                                 >> 0x1fU))))));
        tracep->fullBit(oldp+23483,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 1U) 
                                            ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U]) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                              >> 0x1fU)))));
        tracep->fullBit(oldp+23484,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 1U))));
        tracep->fullBit(oldp+23485,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U])));
        tracep->fullBit(oldp+23486,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x70U] 
                                     >> 0x1fU)));
        tracep->fullCData(oldp+23487,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 2U))),3);
        tracep->fullBit(oldp+23488,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 4U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 3U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 2U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 2U))))));
        tracep->fullBit(oldp+23489,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 4U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 3U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 2U)))));
        tracep->fullBit(oldp+23490,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 4U))));
        tracep->fullBit(oldp+23491,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 3U))));
        tracep->fullBit(oldp+23492,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 2U))));
        tracep->fullCData(oldp+23493,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 5U))),3);
        tracep->fullBit(oldp+23494,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 7U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 6U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 5U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 5U))))));
        tracep->fullBit(oldp+23495,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 7U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 6U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 5U)))));
        tracep->fullBit(oldp+23496,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 7U))));
        tracep->fullBit(oldp+23497,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 6U))));
        tracep->fullBit(oldp+23498,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 5U))));
        tracep->fullCData(oldp+23499,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 8U))),3);
        tracep->fullBit(oldp+23500,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0xaU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 9U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 8U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 8U))))));
        tracep->fullBit(oldp+23501,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0xaU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 9U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 8U)))));
        tracep->fullBit(oldp+23502,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23503,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 9U))));
        tracep->fullBit(oldp+23504,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 8U))));
        tracep->fullCData(oldp+23505,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0xbU))),3);
        tracep->fullBit(oldp+23506,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0xdU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0xcU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 0xbU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0xbU))))));
        tracep->fullBit(oldp+23507,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0xdU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0xcU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0xbU)))));
        tracep->fullBit(oldp+23508,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23509,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+23510,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0xbU))));
        tracep->fullCData(oldp+23511,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)),3);
        tracep->fullBit(oldp+23512,((1U & (((6U == 
                                             (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23513,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23514,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 2U))));
        tracep->fullBit(oldp+23515,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 1U))));
        tracep->fullBit(oldp+23516,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)));
        tracep->fullCData(oldp+23517,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23518,((1U & (((0x30U 
                                             == (0x30U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23519,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23520,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 5U))));
        tracep->fullBit(oldp+23521,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 4U))));
        tracep->fullBit(oldp+23522,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 3U))));
        tracep->fullCData(oldp+23523,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23524,((1U & (((0x180U 
                                             == (0x180U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23525,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23526,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 8U))));
        tracep->fullBit(oldp+23527,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 7U))));
        tracep->fullBit(oldp+23528,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 6U))));
        tracep->fullCData(oldp+23529,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23530,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23531,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23532,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23533,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23534,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
        tracep->fullCData(oldp+23535,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23536,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23537,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23538,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23539,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23540,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23541,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+23542,((1U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28000U 
                                              == (0x28000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23543,((1U & VL_REDXOR_32(
                                                       (0x38000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23544,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 0x11U))));
        tracep->fullBit(oldp+23545,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 0x10U))));
        tracep->fullBit(oldp+23546,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 0xfU))));
        tracep->fullCData(oldp+23547,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+23548,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23549,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23550,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
        tracep->fullBit(oldp+23551,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
        tracep->fullBit(oldp+23552,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
        tracep->fullCData(oldp+23553,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))),3);
        tracep->fullBit(oldp+23554,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23555,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23556,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23557,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23558,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))));
        tracep->fullCData(oldp+23559,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23560,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23561,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23562,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23563,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23564,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+23565,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23566,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23567,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23568,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+23569,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+23570,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 6U))));
        tracep->fullCData(oldp+23571,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23572,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23573,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23574,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23575,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23576,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 9U))));
        tracep->fullCData(oldp+23577,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23578,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23579,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23580,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23581,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23582,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23583,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add))),3);
        tracep->fullBit(oldp+23584,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23585,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23586,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23587,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23588,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add))));
        tracep->fullCData(oldp+23589,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23590,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+23591,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23592,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23593,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23594,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+23595,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23596,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+23597,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23598,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+23599,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+23600,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__109__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
        tracep->fullQData(oldp+23601,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U])) 
                                           << 0x12U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U])) 
                                             >> 0xeU)))),33);
        tracep->fullBit(oldp+23603,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullBit(oldp+23604,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullSData(oldp+23605,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_s),11);
        tracep->fullSData(oldp+23606,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l1_c),11);
        tracep->fullCData(oldp+23607,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_s),7);
        tracep->fullCData(oldp+23608,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_c),7);
        tracep->fullIData(oldp+23609,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add),21);
        tracep->fullCData(oldp+23610,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_s),5);
        tracep->fullCData(oldp+23611,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_c),5);
        tracep->fullSData(oldp+23612,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add),15);
        tracep->fullCData(oldp+23613,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_c),3);
        tracep->fullCData(oldp+23614,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_s),3);
        tracep->fullSData(oldp+23615,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add),9);
        tracep->fullCData(oldp+23616,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_s),2);
        tracep->fullCData(oldp+23617,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_c),2);
        tracep->fullCData(oldp+23618,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add),6);
        tracep->fullBit(oldp+23619,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullBit(oldp+23620,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullCData(oldp+23621,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l6_add),3);
        tracep->fullBit(oldp+23622,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullBit(oldp+23623,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullCData(oldp+23624,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l7_add),3);
        tracep->fullCData(oldp+23625,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l8_add),3);
        tracep->fullCData(oldp+23626,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add))),3);
        tracep->fullBit(oldp+23627,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23628,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23629,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23630,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23631,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add))));
        tracep->fullCData(oldp+23632,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23633,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add)))))));
        tracep->fullBit(oldp+23634,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23635,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23636,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23637,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l5_add) 
                                           >> 3U))));
        tracep->fullBit(oldp+23638,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l6_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23639,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l6_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23640,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l6_add))));
        tracep->fullBit(oldp+23641,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l7_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23642,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l7_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23643,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l7_add))));
        tracep->fullBit(oldp+23644,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l8_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23645,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l8_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23646,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l8_add))));
        tracep->fullCData(oldp+23647,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0xeU))),3);
        tracep->fullBit(oldp+23648,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x10U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0xfU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 0xeU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0xeU))))));
        tracep->fullBit(oldp+23649,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0x10U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0xfU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0xeU)))));
        tracep->fullBit(oldp+23650,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+23651,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+23652,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0xeU))));
        tracep->fullCData(oldp+23653,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0x11U))),3);
        tracep->fullBit(oldp+23654,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x13U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x12U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 0x11U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0x11U))))));
        tracep->fullBit(oldp+23655,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0x13U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x12U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x11U)))));
        tracep->fullBit(oldp+23656,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+23657,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+23658,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x11U))));
        tracep->fullCData(oldp+23659,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0x14U))),3);
        tracep->fullBit(oldp+23660,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x16U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x15U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 0x14U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0x14U))))));
        tracep->fullBit(oldp+23661,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0x16U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x15U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x14U)))));
        tracep->fullBit(oldp+23662,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+23663,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+23664,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x14U))));
        tracep->fullCData(oldp+23665,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0x17U))),3);
        tracep->fullBit(oldp+23666,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x19U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x18U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 0x17U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0x17U))))));
        tracep->fullBit(oldp+23667,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0x19U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x18U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x17U)))));
        tracep->fullBit(oldp+23668,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+23669,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+23670,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x17U))));
        tracep->fullCData(oldp+23671,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0x1aU))),3);
        tracep->fullBit(oldp+23672,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x1cU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x1bU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 0x1aU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0x1aU))))));
        tracep->fullBit(oldp+23673,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0x1cU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x1bU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x1aU)))));
        tracep->fullBit(oldp+23674,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+23675,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+23676,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x1aU))));
        tracep->fullCData(oldp+23677,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                       >> 0x1dU)),3);
        tracep->fullBit(oldp+23678,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x1fU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x1eU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                  >> 0x1dU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                                 >> 0x1dU))))));
        tracep->fullBit(oldp+23679,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                             >> 0x1fU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                               >> 0x1eU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+23680,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+23681,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+23682,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x71U] 
                                           >> 0x1dU))));
        tracep->fullCData(oldp+23683,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U])),3);
        tracep->fullBit(oldp+23684,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 2U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 1U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U])) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U])))));
        tracep->fullBit(oldp+23685,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 2U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 1U)) 
                                           ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U]))));
        tracep->fullBit(oldp+23686,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 2U))));
        tracep->fullBit(oldp+23687,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 1U))));
        tracep->fullBit(oldp+23688,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U])));
        tracep->fullCData(oldp+23689,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23690,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 5U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 4U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 3U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 3U))))));
        tracep->fullBit(oldp+23691,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 5U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 4U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 3U)))));
        tracep->fullBit(oldp+23692,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 5U))));
        tracep->fullBit(oldp+23693,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 4U))));
        tracep->fullBit(oldp+23694,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 3U))));
        tracep->fullCData(oldp+23695,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23696,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 8U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 7U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 6U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 6U))))));
        tracep->fullBit(oldp+23697,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 8U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 7U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 6U)))));
        tracep->fullBit(oldp+23698,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 8U))));
        tracep->fullBit(oldp+23699,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 7U))));
        tracep->fullBit(oldp+23700,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 6U))));
        tracep->fullCData(oldp+23701,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23702,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0xbU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0xaU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 9U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 9U))))));
        tracep->fullBit(oldp+23703,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0xbU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0xaU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 9U)))));
        tracep->fullBit(oldp+23704,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23705,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23706,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 9U))));
        tracep->fullCData(oldp+23707,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23708,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0xeU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0xdU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 0xcU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0xcU))))));
        tracep->fullBit(oldp+23709,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0xeU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0xdU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0xcU)))));
        tracep->fullBit(oldp+23710,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23711,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23712,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23713,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)),3);
        tracep->fullBit(oldp+23714,((1U & (((6U == 
                                             (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23715,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23716,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 2U))));
        tracep->fullBit(oldp+23717,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 1U))));
        tracep->fullBit(oldp+23718,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)));
        tracep->fullCData(oldp+23719,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23720,((1U & (((0x30U 
                                             == (0x30U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23721,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23722,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 5U))));
        tracep->fullBit(oldp+23723,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 4U))));
        tracep->fullBit(oldp+23724,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 3U))));
        tracep->fullCData(oldp+23725,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23726,((1U & (((0x180U 
                                             == (0x180U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23727,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23728,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 8U))));
        tracep->fullBit(oldp+23729,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 7U))));
        tracep->fullBit(oldp+23730,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 6U))));
        tracep->fullCData(oldp+23731,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23732,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23733,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23734,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23735,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23736,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
        tracep->fullCData(oldp+23737,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23738,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23739,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23740,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23741,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23742,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23743,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+23744,((1U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28000U 
                                              == (0x28000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23745,((1U & VL_REDXOR_32(
                                                       (0x38000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23746,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 0x11U))));
        tracep->fullBit(oldp+23747,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 0x10U))));
        tracep->fullBit(oldp+23748,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 0xfU))));
        tracep->fullCData(oldp+23749,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+23750,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23751,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23752,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
        tracep->fullBit(oldp+23753,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
        tracep->fullBit(oldp+23754,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
        tracep->fullCData(oldp+23755,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))),3);
        tracep->fullBit(oldp+23756,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23757,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23758,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23759,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23760,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))));
        tracep->fullCData(oldp+23761,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23762,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23763,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23764,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23765,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23766,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+23767,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23768,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23769,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23770,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+23771,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+23772,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 6U))));
        tracep->fullCData(oldp+23773,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23774,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23775,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23776,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23777,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23778,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 9U))));
        tracep->fullCData(oldp+23779,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23780,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23781,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23782,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23783,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23784,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23785,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add))),3);
        tracep->fullBit(oldp+23786,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23787,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23788,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23789,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23790,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add))));
        tracep->fullCData(oldp+23791,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23792,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+23793,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23794,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23795,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23796,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+23797,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23798,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+23799,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23800,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+23801,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+23802,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__110__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
        tracep->fullQData(oldp+23803,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U])) 
                                           << 0x11U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U])) 
                                             >> 0xfU)))),33);
        tracep->fullBit(oldp+23805,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullBit(oldp+23806,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullSData(oldp+23807,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_s),11);
        tracep->fullSData(oldp+23808,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l1_c),11);
        tracep->fullCData(oldp+23809,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_s),7);
        tracep->fullCData(oldp+23810,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_c),7);
        tracep->fullIData(oldp+23811,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add),21);
        tracep->fullCData(oldp+23812,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_s),5);
        tracep->fullCData(oldp+23813,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_c),5);
        tracep->fullSData(oldp+23814,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add),15);
        tracep->fullCData(oldp+23815,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_c),3);
        tracep->fullCData(oldp+23816,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_s),3);
        tracep->fullSData(oldp+23817,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add),9);
        tracep->fullCData(oldp+23818,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_s),2);
        tracep->fullCData(oldp+23819,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_c),2);
        tracep->fullCData(oldp+23820,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add),6);
        tracep->fullBit(oldp+23821,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullBit(oldp+23822,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullCData(oldp+23823,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add),3);
        tracep->fullBit(oldp+23824,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullBit(oldp+23825,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullCData(oldp+23826,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add),3);
        tracep->fullCData(oldp+23827,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add),3);
        tracep->fullCData(oldp+23828,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))),3);
        tracep->fullBit(oldp+23829,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23830,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23831,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23832,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23833,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))));
        tracep->fullCData(oldp+23834,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23835,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add)))))));
        tracep->fullBit(oldp+23836,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+23837,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23838,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23839,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l5_add) 
                                           >> 3U))));
        tracep->fullBit(oldp+23840,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23841,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23842,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l6_add))));
        tracep->fullBit(oldp+23843,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23844,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23845,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l7_add))));
        tracep->fullBit(oldp+23846,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23847,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23848,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l8_add))));
        tracep->fullCData(oldp+23849,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+23850,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x11U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x10U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 0xfU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0xfU))))));
        tracep->fullBit(oldp+23851,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0x11U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x10U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0xfU)))));
        tracep->fullBit(oldp+23852,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+23853,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+23854,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0xfU))));
        tracep->fullCData(oldp+23855,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+23856,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x14U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x13U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 0x12U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0x12U))))));
        tracep->fullBit(oldp+23857,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0x14U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x13U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x12U)))));
        tracep->fullBit(oldp+23858,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+23859,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+23860,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x12U))));
        tracep->fullCData(oldp+23861,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0x15U))),3);
        tracep->fullBit(oldp+23862,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x17U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x16U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 0x15U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0x15U))))));
        tracep->fullBit(oldp+23863,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0x17U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x16U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x15U)))));
        tracep->fullBit(oldp+23864,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+23865,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+23866,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+23867,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0x18U))),3);
        tracep->fullBit(oldp+23868,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x1aU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x19U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 0x18U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0x18U))))));
        tracep->fullBit(oldp+23869,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0x1aU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x19U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x18U)))));
        tracep->fullBit(oldp+23870,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+23871,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+23872,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x18U))));
        tracep->fullCData(oldp+23873,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0x1bU))),3);
        tracep->fullBit(oldp+23874,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x1dU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x1cU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 0x1bU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0x1bU))))));
        tracep->fullBit(oldp+23875,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                             >> 0x1dU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x1cU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x1bU)))));
        tracep->fullBit(oldp+23876,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+23877,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+23878,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x1bU))));
        tracep->fullCData(oldp+23879,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              << 2U) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x1eU)))),3);
        tracep->fullBit(oldp+23880,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x1fU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                  >> 0x1eU))) 
                                           | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                                 >> 0x1eU))))));
        tracep->fullBit(oldp+23881,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                               >> 0x1fU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                              >> 0x1eU)))));
        tracep->fullBit(oldp+23882,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U])));
        tracep->fullBit(oldp+23883,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+23884,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x72U] 
                                           >> 0x1eU))));
        tracep->fullCData(oldp+23885,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 1U))),3);
        tracep->fullBit(oldp+23886,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 3U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 2U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 1U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 1U))))));
        tracep->fullBit(oldp+23887,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 3U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 2U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 1U)))));
        tracep->fullBit(oldp+23888,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 3U))));
        tracep->fullBit(oldp+23889,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 2U))));
        tracep->fullBit(oldp+23890,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 1U))));
        tracep->fullCData(oldp+23891,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 4U))),3);
        tracep->fullBit(oldp+23892,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 6U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 5U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 4U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 4U))))));
        tracep->fullBit(oldp+23893,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 6U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 5U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 4U)))));
        tracep->fullBit(oldp+23894,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 6U))));
        tracep->fullBit(oldp+23895,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 5U))));
        tracep->fullBit(oldp+23896,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 4U))));
        tracep->fullCData(oldp+23897,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 7U))),3);
        tracep->fullBit(oldp+23898,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 9U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 8U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 7U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 7U))))));
        tracep->fullBit(oldp+23899,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 9U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 8U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 7U)))));
        tracep->fullBit(oldp+23900,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 9U))));
        tracep->fullBit(oldp+23901,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 8U))));
        tracep->fullBit(oldp+23902,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 7U))));
        tracep->fullCData(oldp+23903,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0xaU))),3);
        tracep->fullBit(oldp+23904,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0xcU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0xbU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 0xaU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0xaU))))));
        tracep->fullBit(oldp+23905,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0xcU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0xbU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0xaU)))));
        tracep->fullBit(oldp+23906,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+23907,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23908,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0xaU))));
        tracep->fullCData(oldp+23909,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0xdU))),3);
        tracep->fullBit(oldp+23910,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0xfU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0xeU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 0xdU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0xdU))))));
        tracep->fullBit(oldp+23911,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0xfU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0xeU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0xdU)))));
        tracep->fullBit(oldp+23912,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+23913,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23914,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0xdU))));
        tracep->fullCData(oldp+23915,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)),3);
        tracep->fullBit(oldp+23916,((1U & (((6U == 
                                             (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23917,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23918,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 2U))));
        tracep->fullBit(oldp+23919,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 1U))));
        tracep->fullBit(oldp+23920,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)));
        tracep->fullCData(oldp+23921,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23922,((1U & (((0x30U 
                                             == (0x30U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23923,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23924,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 5U))));
        tracep->fullBit(oldp+23925,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 4U))));
        tracep->fullBit(oldp+23926,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 3U))));
        tracep->fullCData(oldp+23927,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23928,((1U & (((0x180U 
                                             == (0x180U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23929,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23930,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 8U))));
        tracep->fullBit(oldp+23931,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 7U))));
        tracep->fullBit(oldp+23932,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 6U))));
        tracep->fullCData(oldp+23933,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23934,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23935,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23936,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23937,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23938,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
        tracep->fullCData(oldp+23939,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23940,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23941,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23942,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23943,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23944,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23945,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+23946,((1U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28000U 
                                              == (0x28000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23947,((1U & VL_REDXOR_32(
                                                       (0x38000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23948,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 0x11U))));
        tracep->fullBit(oldp+23949,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 0x10U))));
        tracep->fullBit(oldp+23950,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 0xfU))));
        tracep->fullCData(oldp+23951,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+23952,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+23953,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+23954,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
        tracep->fullBit(oldp+23955,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
        tracep->fullBit(oldp+23956,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
        tracep->fullCData(oldp+23957,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))),3);
        tracep->fullBit(oldp+23958,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23959,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23960,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23961,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23962,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))));
        tracep->fullCData(oldp+23963,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23964,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23965,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23966,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23967,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23968,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+23969,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+23970,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23971,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23972,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+23973,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+23974,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 6U))));
        tracep->fullCData(oldp+23975,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))),3);
        tracep->fullBit(oldp+23976,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23977,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23978,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+23979,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+23980,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 9U))));
        tracep->fullCData(oldp+23981,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+23982,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+23983,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+23984,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+23985,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+23986,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xcU))));
        tracep->fullCData(oldp+23987,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add))),3);
        tracep->fullBit(oldp+23988,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23989,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23990,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+23991,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+23992,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add))));
        tracep->fullCData(oldp+23993,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+23994,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+23995,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+23996,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+23997,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+23998,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+23999,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+24000,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+24001,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+24002,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+24003,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+24004,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__111__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
        tracep->fullQData(oldp+24005,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U])) 
                                           << 0x10U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U])) 
                                             >> 0x10U)))),33);
        tracep->fullBit(oldp+24007,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullBit(oldp+24008,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullSData(oldp+24009,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_s),11);
        tracep->fullSData(oldp+24010,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l1_c),11);
        tracep->fullCData(oldp+24011,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_s),7);
        tracep->fullCData(oldp+24012,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_c),7);
        tracep->fullIData(oldp+24013,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add),21);
        tracep->fullCData(oldp+24014,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_s),5);
        tracep->fullCData(oldp+24015,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_c),5);
        tracep->fullSData(oldp+24016,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add),15);
        tracep->fullCData(oldp+24017,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_c),3);
        tracep->fullCData(oldp+24018,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_s),3);
        tracep->fullSData(oldp+24019,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add),9);
        tracep->fullCData(oldp+24020,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_s),2);
        tracep->fullCData(oldp+24021,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_c),2);
        tracep->fullCData(oldp+24022,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add),6);
        tracep->fullBit(oldp+24023,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullBit(oldp+24024,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullCData(oldp+24025,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add),3);
        tracep->fullBit(oldp+24026,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullBit(oldp+24027,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullCData(oldp+24028,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add),3);
        tracep->fullCData(oldp+24029,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add),3);
        tracep->fullCData(oldp+24030,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))),3);
        tracep->fullBit(oldp+24031,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+24032,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+24033,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24034,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24035,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))));
        tracep->fullCData(oldp+24036,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24037,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add)))))));
        tracep->fullBit(oldp+24038,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+24039,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+24040,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+24041,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l5_add) 
                                           >> 3U))));
        tracep->fullBit(oldp+24042,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24043,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24044,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l6_add))));
        tracep->fullBit(oldp+24045,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24046,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24047,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l7_add))));
        tracep->fullBit(oldp+24048,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24049,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24050,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l8_add))));
        tracep->fullCData(oldp+24051,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0x10U))),3);
        tracep->fullBit(oldp+24052,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x12U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x11U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 0x10U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0x10U))))));
        tracep->fullBit(oldp+24053,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0x12U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x11U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x10U)))));
        tracep->fullBit(oldp+24054,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+24055,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+24056,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x10U))));
        tracep->fullCData(oldp+24057,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0x13U))),3);
        tracep->fullBit(oldp+24058,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x15U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x14U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 0x13U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0x13U))))));
        tracep->fullBit(oldp+24059,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0x15U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x14U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x13U)))));
        tracep->fullBit(oldp+24060,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+24061,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+24062,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x13U))));
        tracep->fullCData(oldp+24063,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0x16U))),3);
        tracep->fullBit(oldp+24064,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x18U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x17U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 0x16U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0x16U))))));
        tracep->fullBit(oldp+24065,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0x18U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x17U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x16U)))));
        tracep->fullBit(oldp+24066,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+24067,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+24068,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x16U))));
        tracep->fullCData(oldp+24069,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0x19U))),3);
        tracep->fullBit(oldp+24070,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x1bU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x1aU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 0x19U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0x19U))))));
        tracep->fullBit(oldp+24071,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0x1bU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x1aU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+24072,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+24073,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+24074,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x19U))));
        tracep->fullCData(oldp+24075,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0x1cU))),3);
        tracep->fullBit(oldp+24076,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x1eU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x1dU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 0x1cU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0x1cU))))));
        tracep->fullBit(oldp+24077,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                             >> 0x1eU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                               >> 0x1dU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x1cU)))));
        tracep->fullBit(oldp+24078,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+24079,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+24080,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                           >> 0x1cU))));
        tracep->fullCData(oldp+24081,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              << 1U) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                >> 0x1fU)))),3);
        tracep->fullBit(oldp+24082,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 1U) 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U]) 
                                            | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                  >> 0x1fU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 1U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                                 >> 0x1fU))))));
        tracep->fullBit(oldp+24083,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 1U) 
                                            ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U]) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                              >> 0x1fU)))));
        tracep->fullBit(oldp+24084,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 1U))));
        tracep->fullBit(oldp+24085,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U])));
        tracep->fullBit(oldp+24086,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x73U] 
                                     >> 0x1fU)));
        tracep->fullCData(oldp+24087,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 2U))),3);
        tracep->fullBit(oldp+24088,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 4U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 3U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  >> 2U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 2U))))));
        tracep->fullBit(oldp+24089,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 4U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 3U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 2U)))));
        tracep->fullBit(oldp+24090,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 4U))));
        tracep->fullBit(oldp+24091,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 3U))));
        tracep->fullBit(oldp+24092,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 2U))));
        tracep->fullCData(oldp+24093,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 5U))),3);
        tracep->fullBit(oldp+24094,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 7U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 6U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  >> 5U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 5U))))));
        tracep->fullBit(oldp+24095,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 7U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 6U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 5U)))));
        tracep->fullBit(oldp+24096,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 7U))));
        tracep->fullBit(oldp+24097,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 6U))));
        tracep->fullBit(oldp+24098,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 5U))));
        tracep->fullCData(oldp+24099,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 8U))),3);
        tracep->fullBit(oldp+24100,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0xaU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 9U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  >> 8U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 8U))))));
        tracep->fullBit(oldp+24101,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0xaU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 9U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 8U)))));
        tracep->fullBit(oldp+24102,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+24103,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 9U))));
        tracep->fullBit(oldp+24104,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 8U))));
        tracep->fullCData(oldp+24105,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0xbU))),3);
        tracep->fullBit(oldp+24106,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0xdU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0xcU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  >> 0xbU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 0xbU))))));
        tracep->fullBit(oldp+24107,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0xdU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0xcU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0xbU)))));
        tracep->fullBit(oldp+24108,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+24109,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+24110,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0xbU))));
        tracep->fullCData(oldp+24111,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0xeU))),3);
        tracep->fullBit(oldp+24112,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x10U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0xfU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  >> 0xeU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 0xeU))))));
        tracep->fullBit(oldp+24113,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0x10U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0xfU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0xeU)))));
        tracep->fullBit(oldp+24114,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+24115,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+24116,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0xeU))));
        tracep->fullCData(oldp+24117,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)),3);
        tracep->fullBit(oldp+24118,((1U & (((6U == 
                                             (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24119,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24120,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 2U))));
        tracep->fullBit(oldp+24121,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 1U))));
        tracep->fullBit(oldp+24122,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)));
        tracep->fullCData(oldp+24123,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24124,((1U & (((0x30U 
                                             == (0x30U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24125,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24126,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 5U))));
        tracep->fullBit(oldp+24127,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 4U))));
        tracep->fullBit(oldp+24128,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 3U))));
        tracep->fullCData(oldp+24129,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))),3);
        tracep->fullBit(oldp+24130,((1U & (((0x180U 
                                             == (0x180U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24131,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24132,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 8U))));
        tracep->fullBit(oldp+24133,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 7U))));
        tracep->fullBit(oldp+24134,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 6U))));
        tracep->fullCData(oldp+24135,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))),3);
        tracep->fullBit(oldp+24136,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24137,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24138,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
        tracep->fullBit(oldp+24139,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
        tracep->fullBit(oldp+24140,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
        tracep->fullCData(oldp+24141,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+24142,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24143,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24144,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
        tracep->fullBit(oldp+24145,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 0xdU))));
        tracep->fullBit(oldp+24146,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 0xcU))));
        tracep->fullCData(oldp+24147,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+24148,((1U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28000U 
                                              == (0x28000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24149,((1U & VL_REDXOR_32(
                                                       (0x38000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24150,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 0x11U))));
        tracep->fullBit(oldp+24151,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 0x10U))));
        tracep->fullBit(oldp+24152,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 0xfU))));
        tracep->fullCData(oldp+24153,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+24154,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24155,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24156,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
        tracep->fullBit(oldp+24157,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
        tracep->fullBit(oldp+24158,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
        tracep->fullCData(oldp+24159,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))),3);
        tracep->fullBit(oldp+24160,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24161,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24162,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24163,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24164,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))));
        tracep->fullCData(oldp+24165,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24166,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+24167,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24168,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+24169,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+24170,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+24171,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+24172,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+24173,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24174,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+24175,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+24176,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 6U))));
        tracep->fullCData(oldp+24177,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))),3);
        tracep->fullBit(oldp+24178,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+24179,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24180,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+24181,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+24182,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 9U))));
        tracep->fullCData(oldp+24183,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+24184,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+24185,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24186,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+24187,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+24188,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xcU))));
        tracep->fullCData(oldp+24189,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))),3);
        tracep->fullBit(oldp+24190,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+24191,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+24192,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24193,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24194,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))));
        tracep->fullCData(oldp+24195,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24196,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+24197,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+24198,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+24199,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+24200,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+24201,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+24202,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+24203,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+24204,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+24205,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+24206,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__112__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
        tracep->fullQData(oldp+24207,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U])) 
                                           << 0xfU) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U])) 
                                             >> 0x11U)))),33);
        tracep->fullBit(oldp+24209,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullBit(oldp+24210,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullSData(oldp+24211,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_s),11);
        tracep->fullSData(oldp+24212,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l1_c),11);
        tracep->fullCData(oldp+24213,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_s),7);
        tracep->fullCData(oldp+24214,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_c),7);
        tracep->fullIData(oldp+24215,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add),21);
        tracep->fullCData(oldp+24216,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_s),5);
        tracep->fullCData(oldp+24217,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_c),5);
        tracep->fullSData(oldp+24218,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add),15);
        tracep->fullCData(oldp+24219,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_c),3);
        tracep->fullCData(oldp+24220,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_s),3);
        tracep->fullSData(oldp+24221,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add),9);
        tracep->fullCData(oldp+24222,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_s),2);
        tracep->fullCData(oldp+24223,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_c),2);
        tracep->fullCData(oldp+24224,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add),6);
        tracep->fullBit(oldp+24225,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullBit(oldp+24226,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullCData(oldp+24227,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add),3);
        tracep->fullBit(oldp+24228,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullBit(oldp+24229,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullCData(oldp+24230,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add),3);
        tracep->fullCData(oldp+24231,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add),3);
        tracep->fullCData(oldp+24232,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))),3);
        tracep->fullBit(oldp+24233,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+24234,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+24235,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24236,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24237,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))));
        tracep->fullCData(oldp+24238,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24239,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add)))))));
        tracep->fullBit(oldp+24240,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+24241,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+24242,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+24243,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l5_add) 
                                           >> 3U))));
        tracep->fullBit(oldp+24244,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24245,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24246,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l6_add))));
        tracep->fullBit(oldp+24247,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24248,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24249,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l7_add))));
        tracep->fullBit(oldp+24250,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24251,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24252,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l8_add))));
        tracep->fullCData(oldp+24253,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0x11U))),3);
        tracep->fullBit(oldp+24254,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x13U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x12U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  >> 0x11U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 0x11U))))));
        tracep->fullBit(oldp+24255,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0x13U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x12U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x11U)))));
        tracep->fullBit(oldp+24256,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+24257,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+24258,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x11U))));
        tracep->fullCData(oldp+24259,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0x14U))),3);
        tracep->fullBit(oldp+24260,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x16U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x15U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  >> 0x14U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 0x14U))))));
        tracep->fullBit(oldp+24261,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0x16U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x15U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x14U)))));
        tracep->fullBit(oldp+24262,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+24263,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+24264,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x14U))));
        tracep->fullCData(oldp+24265,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0x17U))),3);
        tracep->fullBit(oldp+24266,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x19U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x18U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  >> 0x17U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 0x17U))))));
        tracep->fullBit(oldp+24267,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0x19U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x18U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x17U)))));
        tracep->fullBit(oldp+24268,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+24269,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+24270,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x17U))));
        tracep->fullCData(oldp+24271,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0x1aU))),3);
        tracep->fullBit(oldp+24272,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x1cU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x1bU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  >> 0x1aU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 0x1aU))))));
        tracep->fullBit(oldp+24273,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0x1cU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x1bU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x1aU)))));
        tracep->fullBit(oldp+24274,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+24275,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+24276,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x1aU))));
        tracep->fullCData(oldp+24277,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                       >> 0x1dU)),3);
        tracep->fullBit(oldp+24278,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x1fU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x1eU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                  >> 0x1dU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                                 >> 0x1dU))))));
        tracep->fullBit(oldp+24279,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                             >> 0x1fU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                               >> 0x1eU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+24280,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+24281,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+24282,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x74U] 
                                           >> 0x1dU))));
        tracep->fullCData(oldp+24283,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U])),3);
        tracep->fullBit(oldp+24284,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 2U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 1U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U])) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U])))));
        tracep->fullBit(oldp+24285,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 2U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 1U)) 
                                           ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U]))));
        tracep->fullBit(oldp+24286,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 2U))));
        tracep->fullBit(oldp+24287,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 1U))));
        tracep->fullBit(oldp+24288,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U])));
        tracep->fullCData(oldp+24289,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24290,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 5U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 4U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  >> 3U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 3U))))));
        tracep->fullBit(oldp+24291,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 5U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 4U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 3U)))));
        tracep->fullBit(oldp+24292,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 5U))));
        tracep->fullBit(oldp+24293,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 4U))));
        tracep->fullBit(oldp+24294,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 3U))));
        tracep->fullCData(oldp+24295,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 6U))),3);
        tracep->fullBit(oldp+24296,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 8U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 7U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  >> 6U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 6U))))));
        tracep->fullBit(oldp+24297,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 8U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 7U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 6U)))));
        tracep->fullBit(oldp+24298,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 8U))));
        tracep->fullBit(oldp+24299,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 7U))));
        tracep->fullBit(oldp+24300,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 6U))));
        tracep->fullCData(oldp+24301,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 9U))),3);
        tracep->fullBit(oldp+24302,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0xbU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0xaU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  >> 9U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 9U))))));
        tracep->fullBit(oldp+24303,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0xbU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0xaU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 9U)))));
        tracep->fullBit(oldp+24304,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+24305,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+24306,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 9U))));
        tracep->fullCData(oldp+24307,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+24308,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0xeU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0xdU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  >> 0xcU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 0xcU))))));
        tracep->fullBit(oldp+24309,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0xeU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0xdU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0xcU)))));
        tracep->fullBit(oldp+24310,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+24311,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+24312,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0xcU))));
        tracep->fullCData(oldp+24313,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+24314,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x11U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x10U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  >> 0xfU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 0xfU))))));
        tracep->fullBit(oldp+24315,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x11U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x10U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0xfU)))));
        tracep->fullBit(oldp+24316,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+24317,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+24318,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0xfU))));
        tracep->fullCData(oldp+24319,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)),3);
        tracep->fullBit(oldp+24320,((1U & (((6U == 
                                             (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24321,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24322,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 2U))));
        tracep->fullBit(oldp+24323,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 1U))));
        tracep->fullBit(oldp+24324,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)));
        tracep->fullCData(oldp+24325,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24326,((1U & (((0x30U 
                                             == (0x30U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24327,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24328,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 5U))));
        tracep->fullBit(oldp+24329,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 4U))));
        tracep->fullBit(oldp+24330,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 3U))));
        tracep->fullCData(oldp+24331,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))),3);
        tracep->fullBit(oldp+24332,((1U & (((0x180U 
                                             == (0x180U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24333,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24334,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 8U))));
        tracep->fullBit(oldp+24335,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 7U))));
        tracep->fullBit(oldp+24336,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 6U))));
        tracep->fullCData(oldp+24337,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))),3);
        tracep->fullBit(oldp+24338,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24339,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24340,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
        tracep->fullBit(oldp+24341,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
        tracep->fullBit(oldp+24342,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
        tracep->fullCData(oldp+24343,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+24344,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24345,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24346,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
        tracep->fullBit(oldp+24347,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 0xdU))));
        tracep->fullBit(oldp+24348,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 0xcU))));
        tracep->fullCData(oldp+24349,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+24350,((1U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28000U 
                                              == (0x28000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24351,((1U & VL_REDXOR_32(
                                                       (0x38000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24352,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 0x11U))));
        tracep->fullBit(oldp+24353,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 0x10U))));
        tracep->fullBit(oldp+24354,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 0xfU))));
        tracep->fullCData(oldp+24355,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+24356,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24357,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24358,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
        tracep->fullBit(oldp+24359,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
        tracep->fullBit(oldp+24360,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
        tracep->fullCData(oldp+24361,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))),3);
        tracep->fullBit(oldp+24362,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24363,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24364,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24365,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24366,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))));
        tracep->fullCData(oldp+24367,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24368,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+24369,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24370,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+24371,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+24372,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+24373,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+24374,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+24375,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24376,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+24377,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+24378,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 6U))));
        tracep->fullCData(oldp+24379,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))),3);
        tracep->fullBit(oldp+24380,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+24381,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24382,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xbU))));
        tracep->fullBit(oldp+24383,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xaU))));
        tracep->fullBit(oldp+24384,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 9U))));
        tracep->fullCData(oldp+24385,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+24386,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+24387,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24388,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xeU))));
        tracep->fullBit(oldp+24389,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xdU))));
        tracep->fullBit(oldp+24390,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xcU))));
        tracep->fullCData(oldp+24391,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))),3);
        tracep->fullBit(oldp+24392,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+24393,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+24394,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24395,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24396,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))));
        tracep->fullCData(oldp+24397,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24398,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+24399,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+24400,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+24401,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+24402,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
        tracep->fullCData(oldp+24403,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
        tracep->fullBit(oldp+24404,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add)))))));
        tracep->fullBit(oldp+24405,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add))))));
        tracep->fullBit(oldp+24406,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
        tracep->fullBit(oldp+24407,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
        tracep->fullBit(oldp+24408,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__113__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
        tracep->fullQData(oldp+24409,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U])) 
                                           << 0xeU) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U])) 
                                             >> 0x12U)))),33);
        tracep->fullBit(oldp+24411,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullBit(oldp+24412,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add))))));
        tracep->fullSData(oldp+24413,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_s),11);
        tracep->fullSData(oldp+24414,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l1_c),11);
        tracep->fullCData(oldp+24415,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_s),7);
        tracep->fullCData(oldp+24416,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_c),7);
        tracep->fullIData(oldp+24417,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add),21);
        tracep->fullCData(oldp+24418,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_s),5);
        tracep->fullCData(oldp+24419,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_c),5);
        tracep->fullSData(oldp+24420,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add),15);
        tracep->fullCData(oldp+24421,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_c),3);
        tracep->fullCData(oldp+24422,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_s),3);
        tracep->fullSData(oldp+24423,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l4_add),9);
        tracep->fullCData(oldp+24424,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_s),2);
        tracep->fullCData(oldp+24425,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_c),2);
        tracep->fullCData(oldp+24426,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add),6);
        tracep->fullBit(oldp+24427,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullBit(oldp+24428,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add))))));
        tracep->fullCData(oldp+24429,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add),3);
        tracep->fullBit(oldp+24430,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullBit(oldp+24431,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add))))));
        tracep->fullCData(oldp+24432,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add),3);
        tracep->fullCData(oldp+24433,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add),3);
        tracep->fullCData(oldp+24434,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))),3);
        tracep->fullBit(oldp+24435,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+24436,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+24437,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24438,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24439,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))));
        tracep->fullCData(oldp+24440,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24441,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add)))))));
        tracep->fullBit(oldp+24442,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add))))));
        tracep->fullBit(oldp+24443,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
        tracep->fullBit(oldp+24444,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
        tracep->fullBit(oldp+24445,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l5_add) 
                                           >> 3U))));
        tracep->fullBit(oldp+24446,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24447,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24448,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l6_add))));
        tracep->fullBit(oldp+24449,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24450,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24451,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l7_add))));
        tracep->fullBit(oldp+24452,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24453,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24454,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l8_add))));
        tracep->fullCData(oldp+24455,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+24456,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x14U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x13U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  >> 0x12U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 0x12U))))));
        tracep->fullBit(oldp+24457,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x14U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x13U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x12U)))));
        tracep->fullBit(oldp+24458,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+24459,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+24460,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x12U))));
        tracep->fullCData(oldp+24461,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x15U))),3);
        tracep->fullBit(oldp+24462,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x17U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x16U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  >> 0x15U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 0x15U))))));
        tracep->fullBit(oldp+24463,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x17U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x16U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x15U)))));
        tracep->fullBit(oldp+24464,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+24465,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+24466,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+24467,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x18U))),3);
        tracep->fullBit(oldp+24468,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x1aU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x19U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  >> 0x18U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 0x18U))))));
        tracep->fullBit(oldp+24469,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x1aU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x19U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x18U)))));
        tracep->fullBit(oldp+24470,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+24471,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+24472,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x18U))));
        tracep->fullCData(oldp+24473,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x1bU))),3);
        tracep->fullBit(oldp+24474,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x1dU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x1cU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  >> 0x1bU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 0x1bU))))));
        tracep->fullBit(oldp+24475,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                             >> 0x1dU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x1cU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x1bU)))));
        tracep->fullBit(oldp+24476,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+24477,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+24478,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x1bU))));
        tracep->fullCData(oldp+24479,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              << 2U) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x1eU)))),3);
        tracep->fullBit(oldp+24480,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x1fU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                  >> 0x1eU))) 
                                           | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                                 >> 0x1eU))))));
        tracep->fullBit(oldp+24481,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                               >> 0x1fU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                              >> 0x1eU)))));
        tracep->fullBit(oldp+24482,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U])));
        tracep->fullBit(oldp+24483,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+24484,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x75U] 
                                           >> 0x1eU))));
        tracep->fullCData(oldp+24485,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 1U))),3);
        tracep->fullBit(oldp+24486,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 3U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 2U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                  >> 1U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                 >> 1U))))));
        tracep->fullBit(oldp+24487,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 3U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 2U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 1U)))));
        tracep->fullBit(oldp+24488,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 3U))));
        tracep->fullBit(oldp+24489,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 2U))));
        tracep->fullBit(oldp+24490,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 1U))));
        tracep->fullCData(oldp+24491,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 4U))),3);
        tracep->fullBit(oldp+24492,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 6U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 5U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                  >> 4U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                 >> 4U))))));
        tracep->fullBit(oldp+24493,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 6U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 5U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 4U)))));
        tracep->fullBit(oldp+24494,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 6U))));
        tracep->fullBit(oldp+24495,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 5U))));
        tracep->fullBit(oldp+24496,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 4U))));
        tracep->fullCData(oldp+24497,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 7U))),3);
        tracep->fullBit(oldp+24498,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 9U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 8U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                  >> 7U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                 >> 7U))))));
        tracep->fullBit(oldp+24499,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 9U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 8U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 7U)))));
        tracep->fullBit(oldp+24500,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 9U))));
        tracep->fullBit(oldp+24501,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 8U))));
        tracep->fullBit(oldp+24502,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 7U))));
        tracep->fullCData(oldp+24503,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 0xaU))),3);
        tracep->fullBit(oldp+24504,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 0xcU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 0xbU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                  >> 0xaU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                 >> 0xaU))))));
        tracep->fullBit(oldp+24505,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 0xcU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 0xbU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 0xaU)))));
        tracep->fullBit(oldp+24506,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+24507,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+24508,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 0xaU))));
        tracep->fullCData(oldp+24509,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 0xdU))),3);
        tracep->fullBit(oldp+24510,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 0xfU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 0xeU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                  >> 0xdU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                 >> 0xdU))))));
        tracep->fullBit(oldp+24511,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 0xfU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 0xeU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 0xdU)))));
        tracep->fullBit(oldp+24512,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+24513,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+24514,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 0xdU))));
        tracep->fullCData(oldp+24515,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 0x10U))),3);
        tracep->fullBit(oldp+24516,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 0x12U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 0x11U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                  >> 0x10U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                                 >> 0x10U))))));
        tracep->fullBit(oldp+24517,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                             >> 0x12U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                               >> 0x11U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                              >> 0x10U)))));
        tracep->fullBit(oldp+24518,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+24519,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+24520,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x76U] 
                                           >> 0x10U))));
        tracep->fullCData(oldp+24521,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)),3);
        tracep->fullBit(oldp+24522,((1U & (((6U == 
                                             (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24523,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24524,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 2U))));
        tracep->fullBit(oldp+24525,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 1U))));
        tracep->fullBit(oldp+24526,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)));
        tracep->fullCData(oldp+24527,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24528,((1U & (((0x30U 
                                             == (0x30U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24529,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24530,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 5U))));
        tracep->fullBit(oldp+24531,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 4U))));
        tracep->fullBit(oldp+24532,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 3U))));
        tracep->fullCData(oldp+24533,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))),3);
        tracep->fullBit(oldp+24534,((1U & (((0x180U 
                                             == (0x180U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24535,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24536,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 8U))));
        tracep->fullBit(oldp+24537,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 7U))));
        tracep->fullBit(oldp+24538,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 6U))));
        tracep->fullCData(oldp+24539,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))),3);
        tracep->fullBit(oldp+24540,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24541,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24542,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
        tracep->fullBit(oldp+24543,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
        tracep->fullBit(oldp+24544,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
        tracep->fullCData(oldp+24545,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
        tracep->fullBit(oldp+24546,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24547,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24548,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
        tracep->fullBit(oldp+24549,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 0xdU))));
        tracep->fullBit(oldp+24550,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 0xcU))));
        tracep->fullCData(oldp+24551,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))),3);
        tracep->fullBit(oldp+24552,((1U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28000U 
                                              == (0x28000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24553,((1U & VL_REDXOR_32(
                                                       (0x38000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24554,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 0x11U))));
        tracep->fullBit(oldp+24555,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 0x10U))));
        tracep->fullBit(oldp+24556,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 0xfU))));
        tracep->fullCData(oldp+24557,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
        tracep->fullBit(oldp+24558,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add))))));
        tracep->fullBit(oldp+24559,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add)))));
        tracep->fullBit(oldp+24560,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
        tracep->fullBit(oldp+24561,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
        tracep->fullBit(oldp+24562,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
        tracep->fullCData(oldp+24563,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))),3);
        tracep->fullBit(oldp+24564,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24565,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))))));
        tracep->fullBit(oldp+24566,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
        tracep->fullBit(oldp+24567,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
        tracep->fullBit(oldp+24568,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))));
        tracep->fullCData(oldp+24569,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
        tracep->fullBit(oldp+24570,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add)))))));
        tracep->fullBit(oldp+24571,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__114__KET____DOT__w1__DOT__l3_add))))));
    }
}
