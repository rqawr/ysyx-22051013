// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051013_rvcpu__Syms.h"


void Vysyx_22051013_rvcpu___024root__traceChgSub2(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 4751);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & VL_REDXOR_32(
                                                      (0x7000U 
                                                       & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                          >> 0xeU))));
            tracep->chgBit(oldp+2,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                          >> 0xdU))));
            tracep->chgBit(oldp+3,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                          >> 0xcU))));
            tracep->chgCData(oldp+4,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))),3);
            tracep->chgBit(oldp+5,((1U & (((0x30000U 
                                            == (0x30000U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)) 
                                           | (0x18000U 
                                              == (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))) 
                                          | (0x28000U 
                                             == (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+6,((1U & VL_REDXOR_32(
                                                      (0x38000U 
                                                       & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+7,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                          >> 0x11U))));
            tracep->chgBit(oldp+8,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                          >> 0x10U))));
            tracep->chgBit(oldp+9,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                          >> 0xfU))));
            tracep->chgCData(oldp+10,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))),3);
            tracep->chgBit(oldp+11,((1U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140000U 
                                              == (0x140000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+12,((1U & VL_REDXOR_32(
                                                       (0x1c0000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+13,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                           >> 0x14U))));
            tracep->chgBit(oldp+14,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                           >> 0x13U))));
            tracep->chgBit(oldp+15,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l2_add 
                                           >> 0x12U))));
            tracep->chgCData(oldp+16,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+17,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+18,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+19,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 2U))));
            tracep->chgBit(oldp+20,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 1U))));
            tracep->chgBit(oldp+21,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+22,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))),3);
            tracep->chgBit(oldp+23,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+24,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+25,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 5U))));
            tracep->chgBit(oldp+26,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 4U))));
            tracep->chgBit(oldp+27,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 3U))));
            tracep->chgCData(oldp+28,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))),3);
            tracep->chgBit(oldp+29,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+30,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+31,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 8U))));
            tracep->chgBit(oldp+32,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 7U))));
            tracep->chgBit(oldp+33,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 6U))));
            tracep->chgCData(oldp+34,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))),3);
            tracep->chgBit(oldp+35,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+36,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+37,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xbU))));
            tracep->chgBit(oldp+38,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xaU))));
            tracep->chgBit(oldp+39,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 9U))));
            tracep->chgCData(oldp+40,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+41,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add)))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+42,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+43,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xeU))));
            tracep->chgBit(oldp+44,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xdU))));
            tracep->chgBit(oldp+45,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l3_add) 
                                           >> 0xcU))));
            tracep->chgCData(oldp+46,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+47,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+48,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+49,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                           >> 2U))));
            tracep->chgBit(oldp+50,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                           >> 1U))));
            tracep->chgBit(oldp+51,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+52,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))),3);
            tracep->chgBit(oldp+53,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+54,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+55,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                           >> 5U))));
            tracep->chgBit(oldp+56,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                           >> 4U))));
            tracep->chgBit(oldp+57,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                           >> 3U))));
            tracep->chgCData(oldp+58,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))),3);
            tracep->chgBit(oldp+59,((1U & (((0x180U 
                                             == (0x180U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add))) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add)))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+60,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+61,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                           >> 8U))));
            tracep->chgBit(oldp+62,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                           >> 7U))));
            tracep->chgBit(oldp+63,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__16__KET____DOT__w1__DOT__l4_add) 
                                           >> 6U))));
            tracep->chgQData(oldp+64,((0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U])) 
                                           << 0xfU) 
                                          | ((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U])) 
                                             >> 0x11U)))),33);
            tracep->chgBit(oldp+66,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+67,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l8_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l8_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l8_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+68,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+69,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+70,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+71,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+72,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+73,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+74,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+75,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+76,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+77,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+78,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+79,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+80,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+82,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+83,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l6_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l6_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l6_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+84,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+85,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+86,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l7_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l7_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l7_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+87,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+88,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+89,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+90,((1U & (((6U == 
                                             (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add))) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+91,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+92,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add) 
                                           >> 2U))));
            tracep->chgBit(oldp+93,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add) 
                                           >> 1U))));
            tracep->chgBit(oldp+94,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+95,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))),3);
            tracep->chgBit(oldp+96,((1U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add))) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add)))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+97,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+98,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add) 
                                           >> 5U))));
            tracep->chgBit(oldp+99,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add) 
                                           >> 4U))));
            tracep->chgBit(oldp+100,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+101,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+102,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+103,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+104,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+105,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+106,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+107,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+108,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+109,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+110,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+111,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0x12U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                   >> 0x11U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 0x11U))))));
            tracep->chgBit(oldp+112,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                              >> 0x13U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0x12U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0x11U)))));
            tracep->chgBit(oldp+113,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+114,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+115,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+116,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+117,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+118,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+119,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+120,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+121,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+122,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+123,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+124,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+125,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+126,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+127,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+128,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+129,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+130,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+131,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+132,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+133,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+134,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+135,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+136,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+137,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+138,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+139,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x11U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+140,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U])),3);
            tracep->chgBit(oldp+141,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U])) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U])))));
            tracep->chgBit(oldp+142,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U]))));
            tracep->chgBit(oldp+143,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 2U))));
            tracep->chgBit(oldp+144,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 1U))));
            tracep->chgBit(oldp+145,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U])));
            tracep->chgCData(oldp+146,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+147,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+148,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 3U)))));
            tracep->chgBit(oldp+149,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 5U))));
            tracep->chgBit(oldp+150,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 4U))));
            tracep->chgBit(oldp+151,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 3U))));
            tracep->chgCData(oldp+152,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+153,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+154,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+155,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 8U))));
            tracep->chgBit(oldp+156,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 7U))));
            tracep->chgBit(oldp+157,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 6U))));
            tracep->chgCData(oldp+158,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+159,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0xaU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                   >> 9U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                  >> 9U))))));
            tracep->chgBit(oldp+160,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0xbU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0xaU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 9U)))));
            tracep->chgBit(oldp+161,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+162,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+163,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 9U))));
            tracep->chgCData(oldp+164,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+165,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+166,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+167,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+168,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+169,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+170,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+171,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x10U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                   >> 0xfU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                  >> 0xfU))))));
            tracep->chgBit(oldp+172,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0x11U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0x10U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0xfU)))));
            tracep->chgBit(oldp+173,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+174,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+175,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+176,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+177,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+178,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+179,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+180,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+181,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+182,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+183,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+184,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+185,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+186,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+187,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+188,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+189,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+190,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+191,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+192,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+193,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+194,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+195,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+196,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+197,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+198,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+199,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+200,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+201,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+202,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+203,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+204,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+205,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+206,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+207,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+208,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+209,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+210,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+211,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+212,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+213,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+214,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+215,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+216,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+217,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+218,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+219,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+220,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+221,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+222,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+223,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+224,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+225,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+226,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+227,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+228,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+229,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+230,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+231,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+232,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+233,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+234,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+235,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+236,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+237,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+238,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+239,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+240,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+241,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+242,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+243,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+244,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+245,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+246,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+247,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+248,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+249,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+250,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+251,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+252,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+253,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+254,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+255,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+256,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+257,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+258,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+259,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+260,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+261,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+262,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+263,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+265,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__17__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+266,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U])) 
                                              >> 0x12U)))),33);
            tracep->chgBit(oldp+268,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+269,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+270,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+271,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+272,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+273,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+274,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+275,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+276,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+277,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+278,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+279,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+280,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+281,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+282,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+283,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+284,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+285,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+286,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+287,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+288,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+289,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+290,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+291,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+292,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+293,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+294,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+295,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+296,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+297,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+298,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+299,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+300,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+301,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+302,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+303,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+304,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+305,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+306,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+307,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+308,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+309,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+310,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+311,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+312,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+313,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+314,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+315,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+316,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+317,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+318,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0x15U))),3);
            tracep->chgBit(oldp+319,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x16U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                   >> 0x15U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+320,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0x17U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0x16U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+321,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+322,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+323,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+324,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+325,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+326,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+327,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+328,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+329,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+330,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+331,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+332,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+333,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+334,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+335,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+336,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+337,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+338,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+339,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U])));
            tracep->chgBit(oldp+340,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+341,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x12U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+342,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+343,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+344,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 1U)))));
            tracep->chgBit(oldp+345,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 3U))));
            tracep->chgBit(oldp+346,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 2U))));
            tracep->chgBit(oldp+347,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 1U))));
            tracep->chgCData(oldp+348,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+349,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+350,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+351,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 6U))));
            tracep->chgBit(oldp+352,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 5U))));
            tracep->chgBit(oldp+353,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 4U))));
            tracep->chgCData(oldp+354,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 7U))),3);
            tracep->chgBit(oldp+355,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 8U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                   >> 7U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                  >> 7U))))));
            tracep->chgBit(oldp+356,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 9U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 8U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 7U)))));
            tracep->chgBit(oldp+357,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 9U))));
            tracep->chgBit(oldp+358,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 8U))));
            tracep->chgBit(oldp+359,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 7U))));
            tracep->chgCData(oldp+360,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+361,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+362,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+363,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+364,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+365,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+366,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0xdU))),3);
            tracep->chgBit(oldp+367,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0xeU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                   >> 0xdU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                  >> 0xdU))))));
            tracep->chgBit(oldp+368,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0xfU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0xeU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0xdU)))));
            tracep->chgBit(oldp+369,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+370,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+371,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+372,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+373,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+374,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+375,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+376,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+377,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+378,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+379,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+380,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+381,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+382,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+383,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+384,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+385,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+386,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+387,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+388,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+389,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+390,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+391,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+392,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+393,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+394,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+395,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+396,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+397,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+398,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+399,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+400,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+401,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+402,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+403,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+404,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+405,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+406,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+407,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+408,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+409,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+410,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+411,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+412,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+413,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+414,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+415,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+416,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+417,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+418,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+419,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+420,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+421,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+422,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+423,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+424,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+425,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+426,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+427,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+428,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+429,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+430,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+431,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+432,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+433,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+434,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+435,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+436,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+437,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+438,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+439,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+440,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+441,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+442,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+443,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+444,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+445,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+446,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+447,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+448,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+449,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+450,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+451,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+452,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+453,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+454,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+455,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+456,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+457,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+458,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+459,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+460,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+461,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+462,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+463,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+464,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+465,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+466,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+467,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__18__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+468,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U])) 
                                            << 0xdU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U])) 
                                              >> 0x13U)))),33);
            tracep->chgBit(oldp+470,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+471,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+472,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+473,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+474,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+475,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+476,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+477,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+478,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+479,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+480,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+481,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+482,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+483,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+484,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+485,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+486,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+487,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+488,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+489,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+490,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+491,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+492,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+493,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+494,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+495,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+496,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+497,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+498,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+499,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+500,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+501,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+502,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+503,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+504,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+505,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+506,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+507,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+508,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+509,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+510,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+511,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+512,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+513,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+514,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0x13U))),3);
            tracep->chgBit(oldp+515,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0x14U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                   >> 0x13U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                  >> 0x13U))))));
            tracep->chgBit(oldp+516,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0x15U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0x14U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0x13U)))));
            tracep->chgBit(oldp+517,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+518,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+519,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+520,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+521,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+522,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+523,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+524,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+525,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+526,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+527,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0x1aU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                   >> 0x19U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+528,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0x1bU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0x1aU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+529,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+530,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+531,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+532,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+533,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+534,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+535,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+536,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+537,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+538,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+539,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U]) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+540,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U]) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+541,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 1U))));
            tracep->chgBit(oldp+542,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U])));
            tracep->chgBit(oldp+543,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x13U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+544,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+545,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+546,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+547,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 4U))));
            tracep->chgBit(oldp+548,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 3U))));
            tracep->chgBit(oldp+549,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 2U))));
            tracep->chgCData(oldp+550,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 5U))),3);
            tracep->chgBit(oldp+551,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 6U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                   >> 5U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                  >> 5U))))));
            tracep->chgBit(oldp+552,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 7U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 6U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 5U)))));
            tracep->chgBit(oldp+553,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 7U))));
            tracep->chgBit(oldp+554,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 6U))));
            tracep->chgBit(oldp+555,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 5U))));
            tracep->chgCData(oldp+556,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+557,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+558,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+559,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+560,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 9U))));
            tracep->chgBit(oldp+561,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 8U))));
            tracep->chgCData(oldp+562,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0xbU))),3);
            tracep->chgBit(oldp+563,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0xcU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                   >> 0xbU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+564,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0xdU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0xcU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0xbU)))));
            tracep->chgBit(oldp+565,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+566,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+567,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+568,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+569,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+570,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+571,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+572,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+573,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+574,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+575,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0x12U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                   >> 0x11U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                  >> 0x11U))))));
            tracep->chgBit(oldp+576,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0x13U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0x12U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0x11U)))));
            tracep->chgBit(oldp+577,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+578,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+579,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+580,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+581,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+582,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+583,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+584,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+585,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+586,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+587,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+588,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+589,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+590,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+591,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+592,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+593,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+594,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+595,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+596,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+597,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+598,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+599,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+600,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+601,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+602,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+603,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+604,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+605,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+606,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+607,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+608,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+609,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+610,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+611,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+612,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+613,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+614,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+615,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+616,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+617,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+618,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+619,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+620,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+621,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+622,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+623,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+624,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+625,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+626,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+627,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+628,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+629,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+630,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+631,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+632,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+633,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+634,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+635,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+636,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+637,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+638,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+639,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+640,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+641,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+642,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+643,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+644,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+645,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+646,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+647,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+648,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+649,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+650,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+651,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+652,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+653,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+654,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+655,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+656,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+657,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+658,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+659,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+660,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+661,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+662,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+663,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+664,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+665,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+666,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+667,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+668,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+669,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__19__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+670,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U])) 
                                              >> 0x14U)))),33);
            tracep->chgBit(oldp+672,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+673,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+674,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+675,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+676,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+677,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+678,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+679,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+680,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+681,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+682,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+683,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+684,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+685,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+686,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+687,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+688,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+689,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+690,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+691,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+692,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+693,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+694,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+695,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+696,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+697,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+698,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+699,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+700,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+701,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+702,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+703,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+704,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+705,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+706,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+707,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+708,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+709,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+710,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+711,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+712,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+713,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+714,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+715,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+716,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+717,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+718,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+719,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+720,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+721,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+722,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+723,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+724,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+725,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+726,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+727,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+728,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+729,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+730,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+731,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+732,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+733,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+734,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+735,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+736,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+737,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+738,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+739,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x14U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+740,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U])),3);
            tracep->chgBit(oldp+741,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U])) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U])))));
            tracep->chgBit(oldp+742,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U]))));
            tracep->chgBit(oldp+743,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 2U))));
            tracep->chgBit(oldp+744,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 1U))));
            tracep->chgBit(oldp+745,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U])));
            tracep->chgCData(oldp+746,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+747,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+748,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 3U)))));
            tracep->chgBit(oldp+749,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 5U))));
            tracep->chgBit(oldp+750,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 4U))));
            tracep->chgBit(oldp+751,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 3U))));
            tracep->chgCData(oldp+752,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+753,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+754,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+755,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 8U))));
            tracep->chgBit(oldp+756,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 7U))));
            tracep->chgBit(oldp+757,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 6U))));
            tracep->chgCData(oldp+758,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+759,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0xaU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                   >> 9U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                  >> 9U))))));
            tracep->chgBit(oldp+760,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0xbU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0xaU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 9U)))));
            tracep->chgBit(oldp+761,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+762,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+763,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 9U))));
            tracep->chgCData(oldp+764,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+765,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+766,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+767,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+768,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+769,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+770,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+771,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x10U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                   >> 0xfU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                  >> 0xfU))))));
            tracep->chgBit(oldp+772,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0x11U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0x10U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0xfU)))));
            tracep->chgBit(oldp+773,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+774,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+775,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+776,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+777,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+778,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+779,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+780,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+781,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+782,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+783,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+784,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+785,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+786,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+787,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+788,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+789,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+790,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+791,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+792,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+793,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+794,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+795,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+796,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+797,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+798,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+799,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+800,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+801,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+802,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+803,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+804,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+805,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+806,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+807,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+808,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+809,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+810,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+811,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+812,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+813,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+814,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+815,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+816,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+817,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+818,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+819,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+820,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+821,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+822,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+823,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+824,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+825,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+826,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+827,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+828,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+829,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+830,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+831,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+832,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+833,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+834,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+835,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+836,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+837,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+838,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+839,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+840,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+841,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+842,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+843,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+844,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+845,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+846,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+847,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+848,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+849,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+850,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+851,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+852,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+853,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+854,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+855,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+856,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+857,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+858,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+859,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+860,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+861,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+862,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+863,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+864,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+865,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+866,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+867,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+868,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+869,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+870,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+871,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__20__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+872,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U])) 
                                              >> 0x15U)))),33);
            tracep->chgBit(oldp+874,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+875,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+876,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+877,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+878,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+879,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+880,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+881,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+882,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+883,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+884,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+885,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+886,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+887,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+888,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+889,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+890,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+891,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+892,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+893,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+894,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+895,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+896,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+897,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+898,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+899,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+900,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+901,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+902,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+903,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+904,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+905,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+906,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+907,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+908,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+909,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+910,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+911,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+912,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+913,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+914,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+915,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+916,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+917,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+918,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0x15U))),3);
            tracep->chgBit(oldp+919,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x16U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                   >> 0x15U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+920,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0x17U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0x16U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+921,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+922,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+923,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+924,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+925,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+926,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+927,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+928,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+929,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+930,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+931,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+932,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+933,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+934,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+935,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+936,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+937,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+938,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+939,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U])));
            tracep->chgBit(oldp+940,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+941,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x15U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+942,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+943,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+944,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 1U)))));
            tracep->chgBit(oldp+945,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 3U))));
            tracep->chgBit(oldp+946,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 2U))));
            tracep->chgBit(oldp+947,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 1U))));
            tracep->chgCData(oldp+948,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+949,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+950,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+951,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 6U))));
            tracep->chgBit(oldp+952,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 5U))));
            tracep->chgBit(oldp+953,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 4U))));
            tracep->chgCData(oldp+954,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 7U))),3);
            tracep->chgBit(oldp+955,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 8U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                   >> 7U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 7U))))));
            tracep->chgBit(oldp+956,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 9U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 8U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 7U)))));
            tracep->chgBit(oldp+957,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 9U))));
            tracep->chgBit(oldp+958,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 8U))));
            tracep->chgBit(oldp+959,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 7U))));
            tracep->chgCData(oldp+960,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+961,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+962,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+963,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+964,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+965,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+966,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 0xdU))),3);
            tracep->chgBit(oldp+967,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0xeU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                   >> 0xdU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 0xdU))))));
            tracep->chgBit(oldp+968,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 0xfU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0xeU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0xdU)))));
            tracep->chgBit(oldp+969,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+970,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+971,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+972,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+973,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+974,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+975,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+976,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+977,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+978,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 0x13U))),3);
            tracep->chgBit(oldp+979,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0x14U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                   >> 0x13U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 0x13U))))));
            tracep->chgBit(oldp+980,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                              >> 0x15U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0x14U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0x13U)))));
            tracep->chgBit(oldp+981,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+982,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+983,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+984,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+985,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+986,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+987,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+988,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+989,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+990,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+991,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+992,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+993,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+994,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+995,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+996,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+997,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+998,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+999,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+1000,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1001,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1002,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1003,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1004,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1005,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1006,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1007,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1008,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1009,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1010,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1011,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1012,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1013,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1014,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1015,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1016,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1017,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1018,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1019,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1020,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1021,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1022,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1023,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1024,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1025,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1026,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1027,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1028,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1029,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1030,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1031,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1032,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1033,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1034,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1035,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1036,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1037,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1038,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1039,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1040,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1041,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1042,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1043,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1044,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1045,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1046,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1047,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1048,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1049,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1050,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1051,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1052,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1053,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1054,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1055,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1056,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1057,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1058,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1059,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1060,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1061,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1062,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1063,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1064,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1065,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1066,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1067,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1068,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1069,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1070,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1071,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1072,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1073,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__21__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1074,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U])) 
                                               >> 0x16U)))),33);
            tracep->chgBit(oldp+1076,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1077,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1078,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1079,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1080,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1081,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1082,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1083,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1084,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1085,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1086,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1087,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1088,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1089,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1090,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1091,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1092,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1093,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1094,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1095,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1096,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1097,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1098,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1099,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1100,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1101,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1102,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1103,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1104,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1105,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1106,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1107,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1108,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1109,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1110,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1111,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1112,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1113,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1114,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1115,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1116,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1117,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1118,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1119,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1120,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1121,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1122,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1123,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1124,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1125,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1126,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0x19U))),3);
            tracep->chgBit(oldp+1127,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 0x1aU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                    >> 0x19U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                   >> 0x19U))))));
            tracep->chgBit(oldp+1128,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0x1bU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0x1aU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1129,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1130,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1131,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1132,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1133,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1134,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1135,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1136,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1137,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1138,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                << 1U) 
                                               | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                  >> 0x1fU)))),3);
            tracep->chgBit(oldp+1139,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U]) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 1U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                   >> 0x1fU))))));
            tracep->chgBit(oldp+1140,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 1U) 
                                              ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U]) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1141,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1142,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U])));
            tracep->chgBit(oldp+1143,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x16U] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1144,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1145,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1146,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1147,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1148,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1149,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1150,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1151,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1152,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1153,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1154,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1155,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 5U))));
            tracep->chgCData(oldp+1156,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1157,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1158,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1159,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1160,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1161,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1162,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1163,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1164,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1165,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1166,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1167,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1168,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1169,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1170,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1171,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1172,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1173,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1174,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1175,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0x12U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0x12U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                    >> 0x11U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1176,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0x13U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0x12U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1177,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1178,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1179,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1180,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1181,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1182,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1183,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1184,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1185,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1186,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1187,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1188,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1189,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1190,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1191,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1192,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1193,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1194,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1195,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1196,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1197,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1198,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1199,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1200,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1201,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1202,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1203,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1204,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1205,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1206,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1207,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1208,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1209,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1210,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1211,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1212,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1213,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1214,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1215,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1216,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1217,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1218,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1219,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1220,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1221,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1222,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1223,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1224,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1225,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1226,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1227,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1228,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1229,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1230,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1231,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1232,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1233,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1234,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1235,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1236,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1237,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1238,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1239,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1240,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1241,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1242,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1243,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1244,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1245,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1246,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1247,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1248,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1249,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1250,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1251,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1252,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1253,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1254,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1255,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1256,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1257,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1258,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1259,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1260,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1261,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1262,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1263,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1264,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1265,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1266,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1267,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1268,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1269,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1270,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1271,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1272,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1273,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1274,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1275,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__22__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1276,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U])) 
                                               >> 0x17U)))),33);
            tracep->chgBit(oldp+1278,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1279,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1280,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1281,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1282,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1283,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1284,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1285,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1286,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1287,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1288,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1289,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1290,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1291,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1292,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1293,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1294,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1295,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1296,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1297,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1298,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1299,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1300,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1301,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1302,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1303,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1304,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1305,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1306,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1307,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1308,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1309,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1310,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1311,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1312,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1313,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1314,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1315,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1316,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1317,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1318,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1319,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1320,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1321,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1322,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0x17U))),3);
            tracep->chgBit(oldp+1323,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0x18U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0x18U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                    >> 0x17U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                   >> 0x17U))))));
            tracep->chgBit(oldp+1324,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0x19U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0x18U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1325,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1326,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1327,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1328,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1329,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1330,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1331,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1332,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1333,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1334,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                         >> 0x1dU)),3);
            tracep->chgBit(oldp+1335,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0x1eU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                  >> 0x1eU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                    >> 0x1dU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+1336,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                               >> 0x1fU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                 >> 0x1eU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1337,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1338,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1339,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x17U] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1340,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U])),3);
            tracep->chgBit(oldp+1341,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U])) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U])))));
            tracep->chgBit(oldp+1342,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U]))));
            tracep->chgBit(oldp+1343,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1344,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1345,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U])));
            tracep->chgCData(oldp+1346,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1347,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 4U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 4U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                    >> 3U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1348,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 5U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 4U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1349,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1350,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1351,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 3U))));
            tracep->chgCData(oldp+1352,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1353,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1354,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1355,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1356,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1357,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 6U))));
            tracep->chgCData(oldp+1358,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1359,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0xaU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0xaU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                    >> 9U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1360,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0xbU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0xaU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1361,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1362,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1363,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 9U))));
            tracep->chgCData(oldp+1364,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1365,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1366,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1367,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1368,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1369,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1370,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1371,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1372,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1373,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1374,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1375,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1376,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1377,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1378,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1379,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1380,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1381,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1382,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0x15U))),3);
            tracep->chgBit(oldp+1383,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x16U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x16U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                    >> 0x15U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                   >> 0x15U))))));
            tracep->chgBit(oldp+1384,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0x17U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0x16U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1385,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1386,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1387,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1388,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1389,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1390,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1391,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1392,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1393,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1394,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1395,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1396,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1397,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1398,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1399,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1400,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1401,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1402,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1403,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1404,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1405,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1406,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1407,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1408,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1409,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1410,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1411,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1412,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1413,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1414,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1415,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1416,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1417,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1418,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1419,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1420,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1421,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1422,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1423,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1424,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1425,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1426,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1427,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1428,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1429,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1430,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1431,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1432,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1433,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1434,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1435,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1436,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1437,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1438,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1439,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1440,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1441,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1442,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1443,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1444,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1445,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1446,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1447,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1448,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1449,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1450,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1451,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1452,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1453,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1454,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1455,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1456,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1457,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1458,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1459,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1460,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1461,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1462,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1463,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1464,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1465,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1466,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1467,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1468,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1469,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1470,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1471,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1472,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1473,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1474,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1475,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1476,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1477,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__23__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1478,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U])) 
                                               >> 0x18U)))),33);
            tracep->chgBit(oldp+1480,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1481,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1482,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1483,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1484,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1485,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1486,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1487,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1488,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1489,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1490,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1491,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1492,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1493,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1494,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1495,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1496,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1497,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1498,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1499,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1500,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1501,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1502,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1503,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1504,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1505,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1506,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1507,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1508,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1509,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1510,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1511,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1512,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1513,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1514,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1515,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1516,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1517,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1518,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1519,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1520,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1521,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1522,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1523,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1524,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1525,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1526,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1527,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1528,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1529,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1530,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0x1bU))),3);
            tracep->chgBit(oldp+1531,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x1cU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x1cU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                    >> 0x1bU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+1532,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                               >> 0x1dU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0x1cU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1533,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1534,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1535,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1536,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1537,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1538,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1539,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U])));
            tracep->chgBit(oldp+1540,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1541,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x18U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1542,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1543,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 2U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 2U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                    >> 1U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1544,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 3U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 2U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1545,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1546,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1547,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 1U))));
            tracep->chgCData(oldp+1548,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1549,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1550,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1551,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1552,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1553,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1554,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1555,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 8U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 8U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                    >> 7U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1556,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 9U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 8U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1557,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1558,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1559,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 7U))));
            tracep->chgCData(oldp+1560,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1561,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1562,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1563,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1564,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1565,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1566,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0xdU))),3);
            tracep->chgBit(oldp+1567,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0xeU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0xeU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                    >> 0xdU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                   >> 0xdU))))));
            tracep->chgBit(oldp+1568,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0xfU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0xeU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1569,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1570,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1571,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1572,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1573,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1574,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1575,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1576,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1577,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1578,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0x13U))),3);
            tracep->chgBit(oldp+1579,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0x14U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0x14U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                    >> 0x13U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                   >> 0x13U))))));
            tracep->chgBit(oldp+1580,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0x15U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0x14U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1581,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1582,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1583,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1584,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1585,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1586,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1587,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1588,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1589,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1590,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1591,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1592,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1593,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1594,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1595,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1596,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1597,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1598,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1599,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1600,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1601,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1602,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1603,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1604,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1605,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1606,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1607,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1608,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1609,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1610,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1611,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1612,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1613,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1614,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1615,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1616,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1617,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1618,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1619,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1620,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1621,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1622,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1623,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1624,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1625,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1626,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1627,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1628,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1629,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1630,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1631,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1632,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1633,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1634,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1635,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1636,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1637,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1638,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1639,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1640,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1641,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1642,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1643,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1644,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1645,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1646,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1647,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1648,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1649,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1650,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1651,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1652,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1653,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1654,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1655,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1656,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1657,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1658,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1659,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1660,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1661,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1662,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1663,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1664,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1665,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1666,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1667,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1668,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1669,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1670,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1671,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1672,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1673,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1674,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1675,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1676,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1677,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1678,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1679,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__24__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1680,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU])) 
                                             << 7U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U])) 
                                               >> 0x19U)))),33);
            tracep->chgBit(oldp+1682,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1683,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1684,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1685,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1686,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1687,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1688,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1689,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1690,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1691,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1692,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1693,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1694,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1695,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1696,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1697,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1698,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1699,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1700,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1701,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1702,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1703,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1704,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1705,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1706,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1707,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1708,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1709,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1710,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1711,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1712,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1713,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1714,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1715,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1716,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1717,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1718,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1719,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1720,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1721,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1722,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1723,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1724,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1725,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1726,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0x19U))),3);
            tracep->chgBit(oldp+1727,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0x1aU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                    >> 0x19U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                   >> 0x19U))))));
            tracep->chgBit(oldp+1728,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0x1bU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0x1aU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1729,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1730,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1731,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1732,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1733,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1734,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1735,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1736,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1737,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1738,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                << 1U) 
                                               | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                  >> 0x1fU)))),3);
            tracep->chgBit(oldp+1739,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU]) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 1U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                   >> 0x1fU))))));
            tracep->chgBit(oldp+1740,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 1U) 
                                              ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU]) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1741,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1742,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU])));
            tracep->chgBit(oldp+1743,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x19U] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1744,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1745,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1746,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1747,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1748,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1749,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 2U))));
            tracep->chgCData(oldp+1750,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1751,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1752,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1753,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1754,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1755,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 5U))));
            tracep->chgCData(oldp+1756,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1757,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1758,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1759,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1760,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1761,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 8U))));
            tracep->chgCData(oldp+1762,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1763,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1764,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1765,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1766,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1767,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1768,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1769,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1770,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1771,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1772,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1773,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1774,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1775,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0x12U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0x12U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                    >> 0x11U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1776,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0x13U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0x12U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1777,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1778,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1779,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1780,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1781,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1782,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1783,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1784,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1785,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1786,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0x17U))),3);
            tracep->chgBit(oldp+1787,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0x18U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0x18U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                    >> 0x17U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                   >> 0x17U))))));
            tracep->chgBit(oldp+1788,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0x19U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0x18U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1789,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1790,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1791,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1792,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1793,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1794,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1795,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1796,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1797,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1798,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1799,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1800,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1801,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1802,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1803,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1804,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1805,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1806,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1807,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1808,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1809,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1810,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1811,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1812,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1813,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1814,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1815,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1816,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1817,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1818,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1819,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1820,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1821,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1822,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1823,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1824,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1825,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1826,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1827,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1828,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1829,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1830,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1831,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1832,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1833,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1834,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1835,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1836,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1837,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1838,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1839,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1840,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1841,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1842,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1843,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1844,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1845,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1846,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1847,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1848,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1849,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1850,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1851,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1852,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1853,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1854,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1855,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1856,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1857,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1858,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1859,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1860,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1861,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1862,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1863,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1864,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1865,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1866,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1867,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1868,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1869,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1870,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1871,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1872,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1873,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1874,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1875,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1876,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1877,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1878,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1879,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1880,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1881,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__25__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1882,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU])) 
                                             << 6U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU])) 
                                               >> 0x1aU)))),33);
            tracep->chgBit(oldp+1884,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1885,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1886,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1887,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1888,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1889,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1890,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1891,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1892,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1893,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1894,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1895,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1896,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1897,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1898,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1899,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1900,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1901,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1902,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1903,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1904,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1905,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1906,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1907,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1908,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1909,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1910,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1911,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1912,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1913,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1914,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1915,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1916,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1917,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1918,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1919,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1920,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1921,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1922,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1923,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1924,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1925,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1926,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1927,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__26__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1928,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1929,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1930,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1931,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1932,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1933,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1934,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                         >> 0x1dU)),3);
            tracep->chgBit(oldp+1935,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0x1eU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                  >> 0x1eU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                    >> 0x1dU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+1936,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                               >> 0x1fU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                 >> 0x1eU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1937,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1938,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1939,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1aU] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1940,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU])),3);
            tracep->chgBit(oldp+1941,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU])) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU])))));
            tracep->chgBit(oldp+1942,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU]))));
            tracep->chgBit(oldp+1943,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1944,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1945,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU])));
            tracep->chgCData(oldp+1946,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1947,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 4U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 4U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                    >> 3U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1948,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 5U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 4U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1949,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1950,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1951,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 3U))));
            tracep->chgCData(oldp+1952,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1953,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1954,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1955,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1956,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1957,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 6U))));
            tracep->chgCData(oldp+1958,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1959,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 0xaU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 0xaU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                    >> 9U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1960,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 0xbU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 0xaU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1961,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1962,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1963,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 9U))));
            tracep->chgCData(oldp+1964,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1965,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1966,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1967,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1968,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1969,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1970,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1971,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1972,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1973,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1974,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1975,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1976,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1977,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1978,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1979,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1980,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1981,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1982,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                               >> 0x15U))),3);
            tracep->chgBit(oldp+1983,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 0x16U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                  >> 0x16U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                    >> 0x15U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x1bU] 
                                                   >> 0x15U))))));
        }
    }
}
